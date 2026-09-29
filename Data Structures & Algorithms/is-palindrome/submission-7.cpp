class Solution {
public:
    bool isPalindrome(string s) {
    string clean ="";
    for (int i=0; i<s.size(); i++)
    {
        if(isalnum(s[i]))
        {
            clean += tolower(s[i]);
        }
    }
    // if (clean.size() ==1 && s.size()==1)
    // {
    //     return true;
    // }
    //  if (clean.size() ==1 )
    // {
    //     return false;
    // }
    cout<< "clean "<<clean<<endl;
    int i =0; 
    int j = clean.size()-1;
    while(i<j)
    {
        cout<<"i "<<i<<endl;
        cout<<"j "<<j<<endl;
        cout<<"s[i] "<<clean[i]<<endl;
        cout<<"s[j] "<<clean[j]<<endl;
        if (clean[i]!=clean[j])
        {
            return false;
        }
        i++;
        j--;

    }
   
    return true;

        
    }
};
