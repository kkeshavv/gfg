//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void bitManipulation(int num, int i) {
        // Get the i-th bit (1-based index)
        int getBit = (num & (1 << (i - 1))) != 0 ? 1 : 0;   // Checking the i-th bit

        // Set the i-th bit
        int setBit = num | (1 << (i - 1));  // Set the i-th bit using bitwise OR

        // Clear the i-th bit
        int clearBit = num & ~(1 << (i - 1)); // Clear the i-th bit using bitwise AND with NOT mask

        // Print the results as space-separated values
        cout << getBit << " " << setBit << " " << clearBit;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends