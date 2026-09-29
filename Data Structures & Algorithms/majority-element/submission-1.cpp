class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i=0; i<nums.size(); i++)
        {
            freq[nums[i]]++;

        }
        for(auto n: freq)
        {
            if(n.second> floor(nums.size()/2))
            {
                return n.first;
            }
        }
        return 0;
        
    }
};