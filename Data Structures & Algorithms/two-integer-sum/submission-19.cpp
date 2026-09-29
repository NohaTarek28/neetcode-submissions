class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
       vector<int> ans;
       unordered_map<int,int>freq;
       for(int i=0;i<arr.size();i++)
       {
        int num = target - arr[i];
        if(freq.find(num)!=freq.end())
        {
            ans.push_back(freq.find(num)->second);
            ans.push_back(i);
            
        }
        else{
            freq[arr[i]] = {i};
        }
       }
       return ans;





























    //    sort(arr.begin(), arr.end());
    //    int i = 0;
    //    int j = arr.size()-1;
    //    if (i == target)
    //    {
    //     return {i};
    //    }
    //   while(arr[i] + arr[j] != target)
    //   {
    //     if( arr[i] + arr[j] < target)
    //     {
    //         i++;
    //     }
    //     if ( arr[i] + arr[j] > target)
    //     {
    //         j--;
    //     }
    //     if ( i == j)
    //     {
    //         return {};
    //     }
        
    //   }
    //   return {i, j};
//NAIVE APPROACH
    // for(int i =0; i<arr.size(); i++)
    // {
    //     for (int j =i+1; j<arr.size(); j++)
    //     {
    //         if( arr[i]+arr[j]==target) return {i,j};
    //     }
    // }
    // return {};
//TWO POINTERS APPAROACH 

      
    //  vector<pair<int,int>> vec;
    //  for(int i=0;i<arr.size();i++)
    //  {
    //     vec.push_back({arr[i], i});
    //  }
    // sort(vec.begin(), vec.end());
    // int left =0; 
    // int right = vec.size()-1; 
    //   while(left < right)
    //   {
    //      if((vec[left].first +vec[right].first)==target)
    //     {
    //          return {min(vec[left].second ,vec[right].second) , max(vec[left].second ,vec[right].second)};
    //     }
    //    else if((vec[left].first +vec[right].first)<target)
    //     {
    //         left++;
    //     }
    //     else
    //     {
    //         right--;
    //     }

    //   }
    //   return {};

        // unordered_map<int, int> map; 
        // for(int n :arr)
        // {
        //     map[arr[n]] = n;
        // }
        



    }
};