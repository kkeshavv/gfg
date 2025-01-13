//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int helper(int n){
        if(n==1){
            return 1;
        }
        else{
             return  n*n*n+helper(n-1);
        }
    }
    int sumOfSeries(int n) {
        // code here
        return helper(n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends