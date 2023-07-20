class Solution {
    bool isValid(vector<int>& arr,int num,int d){
        int low=0,high=arr.size()-1,mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(arr[mid] < num-d)
                low=mid+1;
            else if(arr[mid]> num+d)
                high=mid-1;
            else
                return false;
        }
        return true;
    }
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int ans = 0;
        for(int i = 0; i<arr1.size();i++){
            if(isValid(arr2,arr1[i],d)){
                ans++;
            }
        }return ans;
    }
};
