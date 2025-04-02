class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";  
        int i = 0, j = 0;  
        int w1 = word1.size(), w2 = word2.size();
        while (i < w1 || j < w2) {  
            if (i < w1) merged += word1[i++];
            if (j < w2) merged += word2[j++];
        }
        return merged;
    }
};
