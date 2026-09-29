class Solution {
public:
    bool validPalindrome(string s) {
        string clean ="";
        for (int i =0; i< s.size();i++)
        {
            if(isalnum(s[i]))
            {
                clean+= tolower(s[i]);
            }

        }
      
        int i =0; 
        int j =clean.size()-1;
        while(i < j)
        {
          if(clean[i]!=clean[j])
          {
            return ispalindrome(s.substr(0,i)+s.substr(i+1, clean.size()-1))||
            ispalindrome(s.substr(0,j)+s.substr(j+1,clean.size()-1 ));
          }
          i++;
          j--;
            
           
        }
        return true;
    }
    private:
    bool ispalindrome(string s){
        int l=0;
        int r=s.size()-1;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;


    }
};