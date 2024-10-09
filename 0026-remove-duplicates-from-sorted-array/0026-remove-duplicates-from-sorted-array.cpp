class Solution {
public:
    int removeDuplicates(vector<int>& num) {
        if (num.empty()) {
            return 0;}
        else{

        int s = 1; 
        for (int i = 1; i < num.size(); i++) {
            if (num[i] != num[i - 1]) {
                num[s] = num[i]; 
                s++;
            }
        }
        
        return s;
    } 
        }
};