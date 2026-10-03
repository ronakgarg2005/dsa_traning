class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int counter = 0;
        int score = 0;
        vector<int>vec;
        for (string s : events) {
            if(counter==10)break;
            if (s == "W")
                counter++;
            else if (s == "WD")
                score++;
            else if (s == "NB")
                score++;
            else {
                int b = stoi(s);
                 score += b;
            }
        }vec.push_back(score);
        vec.push_back(counter);
        return vec;
    }
};