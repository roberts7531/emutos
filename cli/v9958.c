#include "emutos.h"
#include "v99x8.h"
#include "v9958.h"

volatile uint8_t* vramBase = (volatile uint8_t*)0xc0800000;
uint32_t printX = 0;
uint32_t printY = 0;
uint8_t isInit = 0;

uint32_t screenWidth = 80;  // Define screen width
uint32_t screenHeight = 49; // Define screen height

void setCur(int x, int y) {
    printX = x;
    printY = y;
}

void putChar(char c) {
    if (c == '\r') {
        // Carriage return: move cursor to the beginning of the line
        printX = 0;
        return;
    }
    if (c == '\n') {
        // Newline: move cursor to the beginning of the next line
        printX = 0;
        printY++;
    } else {
        // Print the character at the current cursor position
        *(vramBase + (printY * screenWidth) + printX) = c;
        printX++;
    }
    
    // Handle scrolling if necessary
    if (printX > screenWidth) {
        printX = 0;
        printY++;
    }
    if (printY >= screenHeight) {
        printY = screenHeight - 1;
        uint32_t y, x;
        for (y = 0; y < screenHeight - 1; y++) {
            for (x = 0; x < screenWidth; x++) {
                *(vramBase + (y * screenWidth) + x) = *(vramBase + ((y + 1) * screenWidth) + x);
            }
        }
        // Clear the last line
        for (x = 0; x < screenWidth; x++) {
            *(vramBase + ((screenHeight - 1) * screenWidth) + x) = 0;
        }
    }
}

 
