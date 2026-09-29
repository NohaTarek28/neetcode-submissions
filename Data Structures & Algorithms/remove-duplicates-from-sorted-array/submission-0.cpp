class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int i=0; 
     int k =0;
     for(int j=i+1; j<nums.size();j++)
     {
        if(nums[i]!= nums[j])
        {
            i++;
            nums[i]=nums[j];
        }
     }
     k = i+1;
     return k;

        
    }
};