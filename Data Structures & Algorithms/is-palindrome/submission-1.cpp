class Solution {
public:
    bool isPalindrome(string s) {
        string newstr ="";
        for(char c : s)
        {
            if(isalnum(c))
            {
                newstr +=tolower(c);
            }
        }
        int i =0; 
        int j = newstr.size()-1;
        while (i< j)
        {
            if (newstr[i] !=newstr[j])
            {
                 return false;
               
            }
             i++;
            j--;

        }
        return true;


        
    }
};
