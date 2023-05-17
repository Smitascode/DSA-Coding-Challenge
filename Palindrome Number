class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long int reversed=0;
        long int original=x;
        while(x>0){
            long int digit= x % 10;
            reversed= reversed*10 + digit;
            x=x/10;
        }
        return original == reversed;
    }

};
