//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here.
        int l=0;
        int r=m;
        int ans=-1;
        while(l<=r){
            int mid=(l+r)/2;
            
            if((pow(mid,n)==m)){
                ans=mid;
            }
            
            if((pow(mid,n)>m)){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends