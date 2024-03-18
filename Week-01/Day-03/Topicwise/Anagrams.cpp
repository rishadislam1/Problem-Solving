#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int search(string pat, string txt) {
    int patLen = pat.length();
    int txtLen = txt.length();

    unordered_map<char, int> patFreq, windowFreq;

    // Populate frequency map for pattern
    for (char c : pat)
        patFreq[c]++;

    int count = 0;
    int left = 0, right = 0;

    // Traverse through the text using sliding window
    while (right < txtLen) {
        char rightChar = txt[right];
        windowFreq[rightChar]++;

        // Shrink the window if its size exceeds pattern size
        while (right - left + 1 > patLen) {
            char leftChar = txt[left];
            windowFreq[leftChar]--;
            if (windowFreq[leftChar] == 0)
                windowFreq.erase(leftChar);
            left++;
        }

        // If the window size matches pattern size, check for anagrams
        if (right - left + 1 == patLen) {
            if (windowFreq == patFreq)
                count++;
        }

        right++;
    }

    return count;
}

int main() {
    string txt;
    string pat;
    cin>>txt>>pat;

    return 0;
}
