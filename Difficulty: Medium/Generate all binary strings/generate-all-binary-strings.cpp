//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void generateStrings(int n, string current, vector<string>& result) {
        // Base case: if the string has reached length N, add it to the result
        if (current.size() == n) {
            result.push_back(current);
            return;
        }

        // Add '0' and recurse
        generateStrings(n, current + "0", result);

        // Add '1' only if the last character is not '1'
        if (current.empty() || current.back() != '1') {
            generateStrings(n, current + "1", result);
        }
    }

    vector<string> generateBinaryStrings(int N) {
        vector<string> result;
        string current="";
        generateStrings(N, "", result);
        return result;
    }
};



//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends