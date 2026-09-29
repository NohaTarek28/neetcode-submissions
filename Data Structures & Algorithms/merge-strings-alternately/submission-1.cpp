class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        // int i =0; 
        // int j =0; 
        // string newstr="";
        // while( i<word1.size() && j< word2.size())
        // {
        //   newstr += word1[i];  
        //   newstr += word2[j]; 
        //   i++;
        //   j++;
        // }
        // cout<<i <<"  "<<j<<endl;
        // if(i!=word1.size() )
        // {
        //     while(i<word1.size())
        //     {
        //         newstr += word1[i]; 
        //         i++; 
        //     }
        // }
        //   if(j!=word2.size() )
        // {
        //     while(j < word2.size())
        //     {
        //         newstr += word2[j];  
        //         j++;
        //     }
        // }
        // return newstr;
        int i =0; 
        int n = std::max(word1.size(), word2.size());
        string newstr ="";
        while(i<n)
        {
            if (i<word1.size())
            {
                newstr += word1[i];
            }
            if(i<word2.size())
            {
                newstr += word2[i];
            }
            i++;
        }
        return newstr;
        
        
    }
};