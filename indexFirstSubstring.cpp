#include <iostream>
using namespace std;

int strStr(string haystack, string needle) {
    int n = haystack.length();
    int m = needle.length();

    // Edge case
    if (m > n) return -1;

    for (int i = 0; i <= n - m; i++) {
        int j = 0;

        // Check substring match
        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }

        // If full match found
        if (j == m) {
            return i;
        }
    }

    return -1;
}

int main() {
    cout << strStr("sadbutsad", "sad") << endl; // Output: 0
    cout << strStr("leetcode", "leeto") << endl; // Output: -1
    return 0;
}