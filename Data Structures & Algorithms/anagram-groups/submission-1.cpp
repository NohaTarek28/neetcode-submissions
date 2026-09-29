class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>, vector<string>> freq;
        for(int i=0; i<strs.size();i++)
        {
            vector<int> count(26,0);
            for(int j=0;j<strs[i].size();j++)
            {
                int index = strs[i][j]-'a';
                count[index]++;

            }
            freq[count].push_back(strs[i]);
        }
        for(auto it:freq)
        {
            ans.push_back(it.second);
        }
return ans;

    }  
    };
