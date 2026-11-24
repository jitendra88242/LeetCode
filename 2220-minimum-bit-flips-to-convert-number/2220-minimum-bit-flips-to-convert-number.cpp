class Solution {
public:
    int minBitFlips(int start, int goal) {
      int n=start^goal;
      int c=0;
      while(n>1){
        if(n&1) c++;
        n=n>>1;
      }
      if(n==1) c++;
      return c;
    }
};