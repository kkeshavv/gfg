//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int findFloor(vector<int>& arr, int k) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] > k) {
                return i - 1;  // Return the index of the previous element
            } else if (arr[i] == k) {
                return i;  // Return the index of the exact match
            }
        }
        return n - 1;  // If k is greater than all elements, return the last index
    }
};



//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.findFloor(arr, k);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends