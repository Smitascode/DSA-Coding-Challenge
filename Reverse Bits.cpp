class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t x=0;
        int i=0;
        while(n>0){
            x+=(n%2)<<(31-i);
            n>>=1;
            i++;
        }
        return x;
    }
};
