class Solution {
public:
    int mySqrt(int x) {
        int low =0; 
        int high = x; 
        int ans =0;
        while(low<=high)
        {
            long long mid = low + ((high-low)/2);
            long long num = mid*mid;
            if (num == x) return mid;
            if (num < x) 
            {
                  ans = mid;
                  low = mid+1;
            }
            if (num > x)   high = mid-1;
        }
        return ans;
    }
};