// class Solution {
//   public:
//     void print_divisors(int n) {
//         // Code here.
//         for(int i=1;i<=n;i++){
//             if(n%i==0){
//                 cout<<i<<" ";
//             }  
//         }
//     }
// };

class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        vector<int>res;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                res.push_back(i);
                if((n/i)!=i){
                res.push_back(n/i);
            }
            }
            
        }
        sort(res.begin(),res.end());
        for(auto it:res) cout<<it<<" ";
    }
};