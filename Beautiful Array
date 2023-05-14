class Solution {
public:
    vector<int> beautifulArray(int n) {
         vector<int> res;
    if (n == 1) {
        res.push_back(1);
        return res;
    }
    vector<int> odds = beautifulArray((n + 1) / 2);
    vector<int> evens = beautifulArray(n / 2);
    for (int i : odds) {
        res.push_back(i * 2 - 1);
    }
    for (int i : evens) {
        res.push_back(i * 2);
    }
    return res;
}

int main() {
    int n = 5;
    vector<int> beautiful_array = beautifulArray(n);
    for (int i : beautiful_array) {
        cout << i << " ";
    }
    cout << endl;
    return 0;


    }
};
