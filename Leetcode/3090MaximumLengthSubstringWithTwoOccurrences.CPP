#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int maximumLengthSubstring(string s) {
    int left = 0;
    int ans = 0;
    int freq[26] = {0};
    for (int right = 0; right < s.size(); right++) {
        freq[s[right] - 'a']++;
        while (freq[s[right] - 'a'] > 2) {
            freq[s[left] - 'a']--;
            left++;
        }
        ans = max(ans, right - left + 1);
    }
    return ans;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    int ans = maximumLengthSubstring(s);
    cout << "Maximum Length = " << ans << endl;
    return 0;
}