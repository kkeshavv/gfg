// class Solution {
//   public:
//     int gcd(int a, int b) {
//         // code here
//         int x=min(a,b);
//         int gcd=1;
//         for(int i=x;i>=1;i--){
//             if((a%i==0) && (b%i==0)){
//                 gcd=i;
//                 break;
//             }
//         }
//         return gcd;
//     }
// };


class Solution {
  public:
    int gcd(int a, int b) {
        while(a>0 && b>0){
            if(a>b){
                a=a%b;
            }
            else{
                b=b%a;
            }
        }
        
        if(a==0){
            return b;
        }
        else{
            return a;
        }
    }
};
