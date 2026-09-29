class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //    sort(nums.begin(), nums.end());
    //    int i = 0;
    //    int j = nums.size()-1;
    //    if (i == target)
    //    {
    //     return {i};
    //    }
    //   while(nums[i] + nums[j] != target)
    //   {
    //     if( nums[i] + nums[j] < target)
    //     {
    //         i++;
    //     }
    //     if ( nums[i] + nums[j] > target)
    //     {
    //         j--;
    //     }
    //     if ( i == j)
    //     {
    //         return {};
    //     }
        
    //   }
    //   return {i, j};

for(int i =0; i<nums.size(); i++)
{
    for (int j =i+1; j<nums.size(); j++)
    {
        if( nums[i]+nums[j]==target) return {i,j};
    }
}
return {};
    
        
    }
};
