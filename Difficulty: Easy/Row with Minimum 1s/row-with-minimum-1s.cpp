//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

// class Solution {
//   public:
//     int minRow(vector<vector<int>> &mat) {
//         // code here
//         int m=mat.size();
//         int n=mat[0].size();
//         int index=-1;
//         int mincount=INT_MAX;
//         for(int i=0;i<m;i++){
//             int rowcount=0;
//             for(int j=0;j<n;j++){
//                 rowcount+=mat[i][j];
//             }
//             if(rowcount<mincount){
//                 mincount=rowcount;
//                 index=i;
//             }
//         }
//         return index+1;
//     }
// };

class Solution {
public:
    int minRow(vector<vector<int>> &mat) {
        int m=mat.size();
        int n=mat[0].size();
        int ans=INT_MAX;
        int index=-1;
        for(int i=0;i<m;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    cnt++;
                }
            }
            if(cnt<ans){
                ans =cnt;
                index=i;
            }
        }
        return index+1;
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