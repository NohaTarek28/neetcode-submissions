class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int count=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==0) count++;
        //     if(nums[i]!=0 && count!=0)
        //     {
        //         nums[i-count]= nums[i];
        //         nums[i]=0;
        //     }
        // }
        int left =0; 
        for (int right =0; right<nums.size(); right++)
        {
            if (nums[right]!=0 )
            {
                int temp = nums[right];
                nums[right]= nums[left];
                nums[left] = temp;
                left++;
            }
        }
      
        
    }
};