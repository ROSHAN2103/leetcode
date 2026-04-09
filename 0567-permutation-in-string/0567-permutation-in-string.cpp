class Solution {
public:
    bool isFreqSame(int a[], int b[]) {
        for(int i = 0; i < 26; i++) {
            if(a[i] != b[i]) return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        int window[26] = {0};

        for(char c : s1) freq[c - 'a']++;

        int k = s1.length();

        // first window
        for(int i = 0; i < k && i < s2.length(); i++) {
            window[s2[i] - 'a']++;
        }

        if(isFreqSame(freq, window)) return true;

        // sliding window
        for(int i = k; i < s2.length(); i++) {
            window[s2[i] - 'a']++;          // add new char
            window[s2[i - k] - 'a']--;      // remove old char

            if(isFreqSame(freq, window))
            { return true;}
        }

        return false;
    }
};