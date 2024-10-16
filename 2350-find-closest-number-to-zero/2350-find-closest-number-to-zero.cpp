class Solution {
public:
    int findClosestNumber(vector<int>& num) {
       int result = INT_MAX;
        int a;
        for(int i = 0; i<num.size(); i++){
            a = 0;
            a = abs(num[i]);
            if(a<abs(result) || (a == abs(result) && num[i] > result) ){
                result = num[i];
            }
        }
        return result;
    }
};