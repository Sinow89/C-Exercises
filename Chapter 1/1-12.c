//
// Created by chris on 2025-01-04.
//
/* count lines, words, and characters in input */
#include <stdio.h>

int main() {
    int c, in_word = 0;

    // Read input until EOF
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            // If the character is a space, tab, or newline, mark that we are outside a word
            if (in_word) {
                putchar('\n');  // Print a newline after a word
                in_word = 0;    // Reset word status
            }
        } else {
            // If the character is not a space, tab, or newline, we are inside a word
            if (!in_word) {
                in_word = 1;   // Mark that we are inside a word
            }
            putchar(c);       // Print the character of the word
        }
    }
    return 0;
}
