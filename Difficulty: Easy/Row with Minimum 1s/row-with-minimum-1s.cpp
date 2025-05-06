//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int minRow(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        int minCnt = INT_MAX;
        int index = -1;

        for (int i = 0; i < n; i++) {
            int rowCnt = 0;
            for (int j = 0; j < m; j++) {
                rowCnt += mat[i][j];
            }
            if (rowCnt < minCnt) {
                minCnt = rowCnt;
                index = i;
            }
        }

        return index + 1; // convert from 0-based to 1-based index
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> mat(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(mat) << "\n";
        cout << "~\n";
    }
}
// } Driver Code Ends