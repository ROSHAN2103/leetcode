class Solution {
public:
    bool isPowerOfTwo(int n) {
        // if2^x=3 where n=3 return false
        if(n<1)       
            return false;
            // if2^x=1 where n=1 and x=0 return true
        else if (n==1)
            return true;
        else{
            // check if rem ==0,if true return n=n/2
            while(n%2==0){
                n=n/2;
            }
            // after calculation if n=1 return true else false
            if(n==1)
                return true;
            else 
                return false;
        }

    }
};