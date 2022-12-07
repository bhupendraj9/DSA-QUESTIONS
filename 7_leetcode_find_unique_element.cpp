class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {

        if (arr.size() == 1)
            return true;
        unordered_map<int, int> sb;
        for (int i = 0; i < arr.size(); i++)
        {
            sb[arr[i]]++;
        }
        vector<int> freq;
        for (auto it = sb.begin(); it != sb.end(); it++)
        {
            int val = it->second;
            freq.push_back(val);
        }
        sort(freq.begin(), freq.end());

        for (int i = 0; i < freq.size() - 1; i++)
        {
            if (freq[i] == freq[i + 1])
                return false;
        }
        return true;
    }
};