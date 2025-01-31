//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string& s) {
        string output;
        stack<char> stack;
        
        for (char c : s) {
            // If operand, add to output
            if (isalnum(c)) {
                output += c;
            }
            // If '(', push to stack
            else if (c == '(') {
                stack.push(c);
            }
            // If ')', pop and add to output until '(' is found
            else if (c == ')') {
                while (!stack.empty() && stack.top() != '(') {
                    output += stack.top();
                    stack.pop();
                }
                stack.pop(); // Remove '(' from stack
            }
            // Operator encountered
            else {
                while (!stack.empty() && precedence(stack.top()) >= precedence(c)) {
                    output += stack.top();
                    stack.pop();
                }
                stack.push(c);
            }
        }
        
        // Pop remaining operators in stack
        while (!stack.empty()) {
            output += stack.top();
            stack.pop();
        }
        
        return output;
    }
    
    // Function to check precedence of operators
    int precedence(char c) {
        if (c == '^') return 3;
        if (c == '*' || c == '/') return 2;
        if (c == '+' || c == '-') return 1;
        return 0;
    }
};


//{ Driver Code Starts.
//  Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends