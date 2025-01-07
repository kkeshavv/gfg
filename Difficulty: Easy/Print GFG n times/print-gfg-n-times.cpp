//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  void printhelper(int count,int n){
      
      if(count > n){
          return;
      }
      else{
          cout<<"GFG"<<" ";
          count++;
          printhelper(count,n);
      }
  }
    void printGfg(int n) {
        // Code here
        int count=1;
         printhelper(count,n);
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
        ob.printGfg(N);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends