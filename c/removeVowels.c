#include <stdio.h>
#include <string.h>

// Function to check if a character is a vowel
int isVowel(char c) {
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; vowels[i] != '\0'; i++) {
        if (c == vowels[i]) {
            return 1;  // If the character is a vowel, return 1
        }
    }
    return 0;  // Not a vowel, return 0
}

// Function to remove vowels from the input string (using arrays)
void removeVowels(char input[], char output[]) {
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (isVowel(input[i]) != 1) {  // If the character is not a vowel
            output[j] = input[i];  // Copy it to the output array
            j++;  // Increment output index
        }
    }
    output[j] = '\0';  // Null-terminate the output string
}

int main() {
    char input[100], output[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);  // Read input from the user
    input[strcspn(input, "\n")] = '\0';  // Remove the newline character if present

    removeVowels(input, output);

    printf("String without vowels: %s\n", output);

    return 0;
}
