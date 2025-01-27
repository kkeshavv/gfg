//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int setBit(int n) {
        // Write Your Code Here
        int count = 0;

        // Iterate until we find an unset bit
        while ((n & (1 << count)) != 0) {
            count++; // Move to the next bit position
        }

        // Set the first unset bit
        return n | (1 << count);
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
        int ans = ob.setBit(N);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends