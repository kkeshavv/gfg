class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int st=0;
        int e=s.size()-1;
        while(st<e){
            bool ans=true;
            if(s[st]!=s[e]){
                return false;
                break;
            }
            st++;
            e--;
        }
        return true;
    }
};