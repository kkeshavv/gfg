// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int cpy=n;
        int sum=0;
        while(n>0){
            int x=n%10;
            sum+=(x*x*x);
            n /= 10;
        }
        if(sum==cpy) return true;
        return false;
    }
};