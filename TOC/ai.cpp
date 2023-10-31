/*#include <iostream>
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

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define the CFG production rules
vector<string> deriveLeftmost(const string& input);
vector<string> deriveRightmost(const string& input);

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    // Define the CFG for palindromes
    vector<string> leftmost = deriveLeftmost(input);
    vector<string> rightmost = deriveRightmost(input);

    if (leftmost.empty()) {
        cout << "No leftmost derivation exists for the given input.\n";
    } else {
        cout << "Leftmost Derivation:\n";
        for (const string& step : leftmost) {
            cout << step << endl;
        }
    }

    if (rightmost.empty()) {
        cout << "No rightmost derivation exists for the given input.\n";
    } else {
        cout << "Rightmost Derivation:\n";
        for (const string& step : rightmost) {
            cout << step << endl;
        }
    }

    return 0;
}

vector<string> deriveLeftmost(const string& input) {
    // Define the CFG production rules
    vector<string> derivations;
    string current = "S";

    for (char c : input) {
        if (current == "S") {
            if (c == '0') {
                derivations.push_back("S -> A1B");
                current = "A1B";
            } else {
                return {}; // Invalid input
            }
        } else if (current == "A1B") {
            if (c == '0') {
                derivations.push_back("A1B -> 0A1B");
                current = "0A1B";
            } else {
                return {}; // Invalid input
            }
        } else if (current == "0A1B") {
            if (c == '0') {
                derivations.push_back("0A1B -> 00A1B");
                current = "00A1B";
            } else if (c == '1') {
                derivations.push_back("0A1B -> ε");
                current = "";
            } else {
                return {}; // Invalid input
            }
        } else {
            return {}; // Invalid input
        }
    }

    if (current == "0A1B") {
        derivations.push_back("0A1B -> ε");
    } else {
        return {}; // Invalid input
    }

    return derivations;
}

vector<string> deriveRightmost(const string& input) {
    // Define the CFG production rules
    vector<string> derivations;
    string current = "S";

    for (char c : input) {
        if (current == "S") {
            if (c == '0') {
                derivations.push_back("S -> A1B");
                current = "A1B";
            } else {
                return {}; // Invalid input
            }
        } else if (current == "A1B") {
            if (c == '0') {
                derivations.push_back("A1B -> A10B");
                current = "A10B";
            } else {
                return {}; // Invalid input
            }
        } else if (current == "A10B") {
            if (c == '0') {
                derivations.push_back("A10B -> A100B");
                current = "A100B";
            } else if (c == '1') {
                derivations.push_back("A10B -> A1B");
                current = "A1B";
            } else {
                return {}; // Invalid input
            }
        } else {
            return {}; // Invalid input
        }
    }

    if (current == "A10B") {
        derivations.push_back("A10B -> ε");
    } else {
        return {}; // Invalid input
    }

    return derivations;
}

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define the CFG production rules
vector<string> deriveLeftmost(const string& input);
vector<string> deriveRightmost(const string& input);

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    // Define the CFG for palindromes
    vector<string> leftmost = deriveLeftmost(input);
    vector<string> rightmost = deriveRightmost(input);

    if (leftmost.empty()) {
        cout << "No leftmost derivation exists for the given input.\n";
    } else {
        cout << "Leftmost Derivation:\n";
        for (const string& step : leftmost) {
            cout << step << endl;
        }
    }

    if (rightmost.empty()) {
        cout << "No rightmost derivation exists for the given input.\n";
    } else {
        cout << "Rightmost Derivation:\n";
        for (const string& step : rightmost) {
            cout << step << endl;
        }
    }

    return 0;
}

vector<string> deriveLeftmost(const string& input) {
    // Define the CFG production rules
    vector<string> derivations;
    string current = "S";

    for (char c : input) {
        if (current == "S") {
            if (c == '0') {
                derivations.push_back("S -> 0A1B");
                current = "0A1B";
            } else {
                return {}; // Invalid input
            }
        } else if (current == "0A1B") {
            if (c == '0') {
                derivations.push_back("0A1B -> 0A0B1B");
                current = "0A0B1B";
            } else if (c == '1') {
                derivations.push_back("0A1B -> ε");
                current = "";
            } else {
                return {}; // Invalid input
            }
        } else {
            return {}; // Invalid input
        }
    }

    if (current == "0A1B") {
        derivations.push_back("0A1B -> ε");
    } else {
        return {}; // Invalid input
    }

    return derivations;
}

vector<string> deriveRightmost(const string& input) {
    // Define the CFG production rules
    vector<string> derivations;
    string current = "S";

    for (char c : input) {
        if (current == "S") {
            if (c == '0') {
                derivations.push_back("S -> 0A1B");
                current = "0A1B";
            } else {
                return {}; // Invalid input
            }
        } else if (current == "0A1B") {
            if (c == '0') {
                derivations.push_back("0A1B -> 0A0B1B");
                current = "0A0B1B";
            } else if (c == '1') {
                derivations.push_back("0A1B -> ε");
                current = "";
            } else {
                return {}; // Invalid input
            }
        } else {
            return {}; // Invalid input
        }
    }

    if (current == "0A1B") {
        derivations.push_back("0A1B -> ε");
    } else {
        return {}; // Invalid input
    }

    return derivations;
}
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define the CFG rules
vector<pair<char, string>> cfg = {
    {'S', "aS"},
    {'S', "aSbS"},
    {'S', ""}
};

// Function to generate leftmost derivations
void leftmostDerivation(const string& input, int step, const string& derivation) {
    if (step == input.length()) {
        if (derivation == input) {
            cout << "Leftmost " << step << ": " << derivation << endl;
            return;
        }
        return;
    }

    for (const auto& rule : cfg) {
        char nonTerminal = rule.first;
        const string& production = rule.second;

        if (derivation.length() + production.length() <= input.length() &&
            input.compare(derivation.length(), production.length(), production) == 0) {
            string newDerivation = derivation;
            newDerivation += nonTerminal;
            leftmostDerivation(input, step, newDerivation);
        }
    }
}

int main() {
    string input;
    cout << "Input: ";
    cin >> input;
    for (int step = 1; step <= input.length(); step++) {
        string initialDerivation;
        leftmostDerivation(input, step, initialDerivation);
    }

    cout << "The grammar is ambiguous." << endl;

    return 0;
}

