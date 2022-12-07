class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {

        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        vector<int> result;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second == 2)
                result.push_back(it->first);
        }
        return result;
    }
};