
class Solution {
public:
    int guessNumber(int n) {
      int low =0;
      int high = n;
    
      while (low <= high)
      {
        int mid = low + (high-low)/2;
        if (guess(mid)==0) return mid;
        if  (guess(mid) == -1 ) high = mid -1;;
         if  (guess(mid) ==1 ) {low = mid +1;}
        
      }
     return 0;























      // int low =0;
      // int high = n-1; 
      // while(low<= high)
      // {
      //   int mid =low+ (high-low)/2;
      //   if (guess(int num) == mid) return 0;
      //   else if (guess(int num)>mid) return -1;
      //   else return 1;
      // }
        
    }
};