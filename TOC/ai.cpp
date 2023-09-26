#include <iostream>
#include <string>

bool isPalindrome(std::string input);

int main() {
    std::string input;
    std::cout << "Enter a string of 0s and 1s: ";
    std::cin >> input;

    if (isPalindrome(input)) {
        std::cout << "The input string is a valid palindrome according to the grammar." << std::endl;
    } else {
        std::cout << "The input string is not a valid palindrome according to the grammar." << std::endl;
    }

    return 0;
}

bool isPalindrome(std::string input) {
    if (input.empty()) {
        // An empty string is a valid palindrome
        return true;
    } else {
        // Try to apply each production rule
        // Rule 2: P → 0
        if (input[0] == '0') {
            if (input[input.length() - 1] == '0') {
                return isPalindrome(input.substr(1, input.length() - 2));
            }
        }

        // Rule 3: P → 1
        if (input[0] == '1') {
            if (input[input.length() - 1] == '1') {
                return isPalindrome(input.substr(1, input.length() - 2));
            }
        }

        // If none of the rules apply, it's not a valid palindrome
        return false;
    }
}

