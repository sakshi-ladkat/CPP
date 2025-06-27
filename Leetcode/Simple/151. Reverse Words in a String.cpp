#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string tmp;
        vector<string> words;
        while (ss >> tmp) {
            words.push_back(tmp);
        }
        reverse(words.begin(), words.end());

        string result;
        for (int i = 0; i < words.size(); i++) {
            result += words[i];
            if (i != words.size() - 1)
                result += " ";
        }
        return result;
    }
};
