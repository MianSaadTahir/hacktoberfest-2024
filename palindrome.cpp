#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(string s) {
    // Remove spaces and convert to lowercase
    s.erase(remove(s.begin(), s.end(), ' '), s.end()); // Remove spaces
    transform(s.begin(), s.end(), s.begin(), ::tolower); // Convert to lowercase

    // Check if the string is the same forwards and backwards
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    return s == reversed;
}

int main() {
    // Input from the user
    string input;
    cout << "Enter a string to check if it's a palindrome: ";
    getline(cin, input);

    // Output result
    if (isPalindrome(input)) {
        cout << "'" << input << "' is a palindrome!" << endl;
    } else {
        cout << "'" << input << "' is not a palindrome." << endl;
    }

    return 0;
}
