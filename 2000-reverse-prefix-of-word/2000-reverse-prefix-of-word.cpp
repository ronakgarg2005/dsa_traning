class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = 0;

        for(char c : word) {
            if(c == ch)
                break;
            i++;
        }

        if(i == word.length())
            return word;

        string m = word.substr(0, i + 1);
        reverse(m.begin(), m.end());

        return m + word.substr(i + 1);
    }
};