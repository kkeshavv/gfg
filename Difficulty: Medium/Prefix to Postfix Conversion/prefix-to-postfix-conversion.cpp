//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    string preToPost(string s) {
        int n = s.length();
        stack<string> st;
        int i = n - 1; // Start from the end of the string

        while (i >= 0) {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                st.push(string(1, s[i]));
            } else {
                string t1 = st.top();
                st.pop();
                string t2 = st.top();
                st.pop();
                
                string ans = t1 + t2 + s[i];
                st.push(ans);
            }
            i--;
        }
        return st.top();
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToPost(prefix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends