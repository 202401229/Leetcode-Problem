
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        int n=nums.size();
        unordered_map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;

        }
        priority_queue<pair<int,int>>pq;
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }
        vector<int>ans;
        while(k--)
        {
            int val=pq.top().second;
            pq.pop();
            ans.push_back(val);
        }
        return ans;

    }
};
