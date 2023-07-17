class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a = 0, b = sqrt(c);
        while(a<=b){
            long long d = a*a + b*b;
            if(d<c){
                a++;
            }else if(d>c){
                b--;
            }else if(d==c){
                return true;
            }
        }return false;
    }
};
