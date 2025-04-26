//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int n=arr.size();
        int ans=n;
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]>target){
                ans=min(ans,mid);
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
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.upperBound(arr, d);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends