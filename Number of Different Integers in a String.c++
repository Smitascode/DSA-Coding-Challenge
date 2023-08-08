class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string> mn;
        for (int i = 0; i < word.length(); i++){
            if (std::isdigit(word[i])){
                string num = "";
                while ((i < word.length()) && (word[i] == '0')) i++;
                while ((i < word.length())  && (std::isdigit(word[i]))){
                    num = num + word[i];
                    i++;
                }
                mn.insert(num);
            }
        }
        return mn.size();  
    }
};
