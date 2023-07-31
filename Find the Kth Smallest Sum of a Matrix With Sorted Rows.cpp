class Solution {
public:
    int less_than(vector<vector<int>>& matrix, int sum, int idx, int k){
        if(sum < 0)
            return 0;
        if(idx == matrix.size())
            return 1;
        int ans = 0;
        for(int j = 0; j < matrix[0].size(); j++){
            int count= less_than(matrix, sum - matrix[idx][j], idx + 1, k-ans);
            if(count == 0) 
                break;
            ans+= count;
            if(ans > k)
                break;
        }
        return ans;
    }
    int kthSmallest(vector<vector<int>>& mat, int k) {
        int m = mat.size(), n = mat[0].size();
        int left = m, right = 5000*m, sum = 0;
        while(left <= right){
            int mid = (left + right )/ 2;
            int count  =  less_than(mat, mid, 0, k);
            if(count >= k){
                right = mid - 1;
                sum = mid;
            }
            else
                left = mid + 1;
        }
        return sum;
    }
};
