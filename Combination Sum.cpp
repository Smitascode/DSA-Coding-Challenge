class Solution {
public:
    // vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
void backtrack(vector<vector<int>>& result, vector<int>& combination, vector<int>& candidates, int target, int start) {
    if (target == 0) {
        result.push_back(combination);
        return;
    }

    for (int i = start; i < candidates.size(); i++) {
        if (candidates[i] <= target) {
            combination.push_back(candidates[i]);
            backtrack(result, combination, candidates, target - candidates[i], i);
            combination.pop_back();
        }
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> result;
    vector<int> combination;
    sort(candidates.begin(), candidates.end()); // Sort candidates to handle duplicates properly
    backtrack(result, combination, candidates, target, 0);
    return result;
}

int main() {
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> combinations = combinationSum(candidates, target);

    cout << "Unique combinations that sum up to " << target << ":" << endl;
    for (const vector<int>& combination : combinations) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

    
};
