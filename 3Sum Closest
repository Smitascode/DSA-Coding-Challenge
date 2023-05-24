class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int calcu = INT_MAX;
        int ans = 0;
        int n = nums.size() ;
        sort( nums.begin() , nums.end() );
        for( int i=0 ; i<n-2 ; i++ )
        {
            int l = i+1 ;
            int r = n-1 ;
            while( l<r )
            {
                int sum = nums[i]+nums[l]+nums[r];
                int temp = abs( sum - target );
                if( temp<calcu )
                {
                    calcu = temp ;
                    ans = sum;
                }
                if( sum==target )
                {
                    return sum;
                }
                else if( sum<target )
                {
                    l++;
                }
                else
                {
                    r--;
                }
            } 
        }
        return ans;
    }
};
