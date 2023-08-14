class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> p;
        for(int it:nums) p.push(it);
        k--;
        while(k--) p.pop();
        return p.top();
    }
};
