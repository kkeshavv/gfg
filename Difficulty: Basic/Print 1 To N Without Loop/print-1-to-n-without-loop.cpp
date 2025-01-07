//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    void printhelper(int curr,int n){
        if(curr > n){
            return;
        }
        else{
            cout<<curr<<" ";
            curr++;
            printhelper(curr,n);
        }
    }
    void printNos(int n) {
        // Your code here
        printhelper(1,n);
    }
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main() {
    int T;

    // taking testcases
    cin >> T;

    while (T--) {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printNos(N);
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends