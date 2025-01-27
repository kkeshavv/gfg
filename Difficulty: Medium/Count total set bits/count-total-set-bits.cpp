//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    // Function to return the sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n) {
        if (n == 0) return 0;
        
        // Find the highest power of 2 less than or equal to n
        int x = log2(n);
        
        // Number of set bits in numbers from 1 to (2^x - 1)
        int bitsUpto2PowerX = x * (1 << (x - 1));
        
        // Set bits in the MSB of numbers from (2^x) to n
        int msbBitsFrom2PowerXToN = n - (1 << x) + 1;
        
        // Recursively calculate set bits for the remainder
        int remainder = n - (1 << x);
        
        return bitsUpto2PowerX + msbBitsFrom2PowerXToN + countSetBits(remainder);
    }
};



//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  
cout << "~" << "\n";
}
	  return 0;
}

// } Driver Code Ends