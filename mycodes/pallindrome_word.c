#include <stdio.h>
// Function to check if a given string is a palindrome
int isPalindrome(const char str[]) {
    int len = strlen(str);

    // Loop through half of the string
    for (int i = 0; i < len / 2; i++) {
        // Compare characters from the beginning and end
        if (str[i] != str[len - 1 - i]) {
            // If characters do not match, it's not a palindrome
            return 0;  // Return 0 to indicate false
        }
    }

    // If the loop completes, the string is a palindrome
    return 1;  // Return 1 to indicate true
}

int main() {
    const char example[30];
    printf("Enter the word : ");
    scanf("%s",&example);


    if (isPalindrome(example)) {
        printf("%s is a palindrome.\n", example);
    } else {
        printf("%s is not a palindrome.\n", example);
    }

    return 0;
}
