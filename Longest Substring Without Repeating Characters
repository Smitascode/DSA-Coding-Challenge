class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
    int left = 0, right = 0;
    std::unordered_set<char> uniqueChars;

    while (right < s.length()) {
        if (uniqueChars.find(s[right]) == uniqueChars.end()) {
            // Character is not a repeating character
            uniqueChars.insert(s[right]);
            maxLength = std::max(maxLength, right - left + 1);
            right++;
        } else {
            // Character is a repeating character
            uniqueChars.erase(s[left]);
            left++;
        }
    }

    return maxLength;
}

    
};
