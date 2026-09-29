class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

      map<vector<int>,vector<string>>freq;
      vector<vector<string>>ans;
      for(int i=0; i<strs.size();i++)
      {
        vector<int> count(26,0);
        for (int j=0; j<strs[i].size();j++)
        {
            //get the index in the array by subtracting 'a' from the char
            int index= strs[i][j] -'a';
            count[index] = count[index]+1;
        }
        auto it = freq.find(count);
        if(it != freq.end())
        {
            it->second.push_back(strs[i]);
        }
        else{
            freq[count]= {strs[i]};
        }
      }  
      for(auto pair: freq)
      {
        ans.push_back(pair.second);
      }
     
     
       

return ans;
    }  
    };
