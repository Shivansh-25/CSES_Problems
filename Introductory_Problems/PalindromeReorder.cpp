// SORTING WAS TOO SLOW GOT A TLE
// also repetitive addition to the middle of a string is expensive and we shouldnt do things like c + palindrome + c 
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define int long long

signed main() {

    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char d : s) {
        freq[d - 'A']++;
    }
    int odd = 0;
    char mid = '\0'; 
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            mid = i + 'A';
            odd++;
        }
        if (odd > 1) {
            cout << "NO SOLUTION\n";
            return 0;
        }
    }
    string left_half = "", right_half = "";
    for (int i = 0; i < 26; i++) {
        char c = i + 'A';
        int count = freq[i];
        for (int j = 0; j < count / 2; j++) {
            left_half += c;
        }
    }

    right_half = left_half;
    reverse(right_half.begin(), right_half.end());

    if (odd == 1) {
        left_half += mid;
    }
    cout << left_half + right_half << endl;

    return 0;
}
