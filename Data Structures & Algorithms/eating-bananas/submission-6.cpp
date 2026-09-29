class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int minEatingSpeed;
        if(h < piles.size())
        {
            // cout<<"invalid case"<<endl;
            return 0;
        }
        if (h == piles.size())
        {
            int minEatingSpeed = *std::max_element( piles.begin(),  piles.end());
             
            return minEatingSpeed; 
        }
        int low =1; 
        int high = *std::max_element( piles.begin(),  piles.end()); 
        
        int ans;
        while(low <= high)
        {
            int mid = low+(high -low)/2;
            long long sum = 0;
            for(int i=0 ; i<piles.size(); i++)
            {
                sum += (piles[i]+mid -1)/mid;
                // cout<<"sum inside for "<<sum<<endl;
            } 
            // cout<<"sum after for loop "<< sum<<endl;
            if(sum <= h)
            {
                high = mid-1; 
                ans = mid;
            }    
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};

