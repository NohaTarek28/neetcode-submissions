class Solution {
public:
    int search(vector<int>& nums, int target) {
        int right=0;
        int left = nums.size()-1;
        while (right <= left)
        {
            int mid = right + (left- right)/2;
            if (target == nums[mid])
            {
                return mid;
            }
            if(target > nums[mid])
            {
                right = mid+1;
            }
            else
            {
                left = mid-1;

            }

        }
        return -1;


























        // int right =0;
        // int left = nums.size()-1;
        
        // while(right <= left)
        // {
        //     int mid = right+(left-right)/2;
        //     if (nums[mid]==target)
        //     {
        //         return mid;
        //     }
        //     if(nums[mid]<target )
        //     {
        //         right = mid +1;
        //     }
        //     if(nums[mid]>target)
        //     {
        //         left = mid-1;
        //     }

        // }
        // return -1;
    }
        
};
