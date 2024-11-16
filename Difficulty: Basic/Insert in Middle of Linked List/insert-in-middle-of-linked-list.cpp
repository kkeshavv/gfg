//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to insert a node in the middle of the linked list.

class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // Code Here
          if (head == NULL) {
            return new Node(x);
        }
        Node *curr=head;
        int cnt=0;
        while(curr != NULL){
            cnt++;
            curr=curr->next;
        }
        int pos;
        if(cnt%2==0){
             pos=(cnt/2)-1;
        }
        else{
            pos=(cnt/2);
        }
        curr = head;
        Node *nodetoinsert=new Node(x);
        // int trav=0;
        
        for (int i = 0; i < pos; i++) {                  
            curr = curr->next;
        }
    nodetoinsert->next =curr->next;
    curr->next=nodetoinsert;            
        return head;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }

        int x;
        cin >> x;
        cin.ignore();

        Node *head = nullptr;

        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node *tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }

        Solution ob;
        Node *ans = ob.insertInMiddle(head, x);
        printList(ans);
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends