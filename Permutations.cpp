class Solution {
public:
    // vector<vector<int>> permute(vector<int>& nums) {
       
void backtrack(vector<int>& nums, int start, vector<vector<int>>& permutations) {
    if (start == nums.size()) {
        permutations.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); i++) {
        swap(nums[start], nums[i]);
        backtrack(nums, start + 1, permutations);
        swap(nums[start], nums[i]); // backtrack
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> permutations;
    backtrack(nums, 0, permutations);
    return permutations;
}

int main() {
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = permute(nums);

    // Print the permutations
    for (const auto& perm : result) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

    };
// };
