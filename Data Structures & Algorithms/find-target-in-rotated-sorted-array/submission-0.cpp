class Solution {
public:
    int search(vector<int>& nums, int target) {
        //sort(nums.begin(), nums.end()); 
      
        for (int i =0 ;i<nums.size(); i++)
        {
            if (target == nums[i])
            {
                return i;
            }
        }
        return -1;
        
    }
};
