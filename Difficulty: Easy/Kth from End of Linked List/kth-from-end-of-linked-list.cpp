//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Step 1: Reverse the linked list
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;

        while (curr != NULL) {
            forward = curr->next; // Save next node
            curr->next = prev;    // Reverse link
            prev = curr;          // Move `prev` forward
            curr = forward;       // Move `curr` forward
        }

        // Step 2: Traverse the reversed list to find the k-th node
        Node* curr1 = prev;
        int i = 1; // 1-based index
        while (curr1 != NULL && i < k) {
            curr1 = curr1->next;
            i++;
        }

        // If `curr1` is NULL, k is out of bounds
        if (curr1 == NULL) {
            return -1; // Return -1 if k exceeds the length of the list
        }

        return curr1->data; // Return the k-th node's data
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

        Node* head = nullptr;

        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node* tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }

        Solution ob;
        cout << ob.getKthFromLast(head, x) << endl;
    }
    return 0;
}
// } Driver Code Ends