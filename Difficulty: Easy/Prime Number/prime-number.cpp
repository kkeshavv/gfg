class Solution {
  public:
    bool isPrime(int n) {
        // code here
        vector<int>res;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                res.push_back(i);
                if(n/i!=i){
                    res.push_back(n/i);
                }
            }
        }
        if(res.size()==2) return true;
        return false;
    }
};
