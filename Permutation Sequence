class Solution {
public:
    string getPermutation(int n, int k) {
        string result;
        vector<int> nums;

        for(int i=1;i<=n;++i){
            nums.push_back(i);
        }
        int factorial=1;
        for(int i=2;i<=n;++i){
            factorial*=i;

        }
        --k;
        for(int i=n;i>=1;--i){
            factorial/=i;
            int index=k/factorial;
            k%=factorial;
            result+= to_string(nums[index]);
            nums.erase(nums.begin()+ index);
        }
        return result;
    }
};
