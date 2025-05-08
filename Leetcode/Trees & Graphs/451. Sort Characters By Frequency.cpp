class Solution
{
public:
    string frequencySort(string s)
    {

        unordered_map<char, int> freq;
        for (char ch : s)
        {
            freq[ch]++;
        }

        priority_queue<pair<int, char>> maxHeap;

        // Create heap from frequency table
        for (auto &entry : freq)
        {
            maxHeap.push({entry.second, entry.first});
        }

        string result;

        while (!maxHeap.empty())
        {
            pair<int, char> topElement = maxHeap.top();
            maxHeap.pop();

            int count = topElement.first;
            char ch = topElement.second;

            result += string(count, ch);
        }
        return result;
    }
};