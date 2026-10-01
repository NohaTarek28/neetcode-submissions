class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if (nums.size() == 0) {
            return 0;
        }

        int left = 0;

        for (int right = left + 1; right < nums.size(); right++) {
            if (nums[right] != nums[left]) {
                left ++;
                 nums[left] = nums[right];

            }
           

        }
         return left +1;
       

























    //  int i=0; 
    //  int k =0;
    //  for(int j=i+1; j<nums.size();j++)
    //  {
    //     if(nums[i]!= nums[j])
    //     {
    //         i++;
    //         nums[i]=nums[j];
    //     }
    //  }
    //  k = i+1;
    //  return k;

        
    }
};