//
// Created by chris on 2025-01-04.
//
#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD_LENGTH 20  // Maximum word length we want to count

int main() {
    int c, length = 0;
    int word_lengths[MAX_WORD_LENGTH] = {0};  // Array to store word lengths frequencies

    // Read input until EOF
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            // If a space, newline, or tab is encountered, the word ends
            if (length > 0 && length <= MAX_WORD_LENGTH) {
                word_lengths[length]++;  // Increment the frequency of this word length
            }
            length = 0;  // Reset word length for the next word
        } else {
            // If the character is part of a word, increase word length
            length++;
        }
    }

    // Now, print the histogram vertically
    int max_height = 0;

    // Find the maximum frequency for scaling
    for (int i = 0; i < MAX_WORD_LENGTH; i++) {
        if (word_lengths[i] > max_height) {
            max_height = word_lengths[i];
        }
    }

    // Print the histogram vertically
    for (int level = max_height; level > 0; level--) {
        for (int i = 1; i < MAX_WORD_LENGTH; i++) {
            if (word_lengths[i] >= level) {
                printf(" * ");  // Print a star if the word length has this frequency
            } else {
                printf("   ");  // Print spaces for no stars at this level
            }
        }
        printf("\n");
    }

    // Print the word lengths on the bottom
    for (int i = 1; i < MAX_WORD_LENGTH; i++) {
        printf(" %d ", i);  // Print the word length numbers at the bottom
    }
    printf("\n");
    system("pause");
    return 0;
}
