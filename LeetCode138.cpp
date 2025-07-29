#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) return NULL;
        Node* curr = head;

        // Bu?c 1: Ch�n node m?i xen k? node cu
        while (curr != NULL) {
            Node* newnode = new Node(curr->val);
            newnode->next = curr->next;
            curr->next = newnode;
            curr = newnode->next;
        }

        // Bu?c 2: G�n random cho node m?i
        curr = head;
        while (curr != NULL) {
            if (curr->random != NULL)
                curr->next->random = curr->random->next;
            curr = curr->next->next;
        }

        // Bu?c 3: T�ch danh s�ch
        curr = head;
        Node* newhead = head->next;
        Node* newcurr = newhead;
        while (curr != NULL) {
            curr->next = newcurr->next;
            curr = curr->next;
            if (curr != NULL) {
                newcurr->next = curr->next;
                newcurr = newcurr->next;
            }
        }

        return newhead;
    }
};

// H�m in danh s�ch
void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << "Node val: " << curr->val;
        if (curr->random)
            cout << ", Random val: " << curr->random->val << endl;
        else
            cout << ", Random val: NULL" << endl;
        curr = curr->next;
    }
}

int main() {
  
    Node* node1 = new Node(7);
    Node* node2 = new Node(13);
    Node* node3 = new Node(11);
    Node* node4 = new Node(10);
    Node* node5 = new Node(1);


    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;


    node1->random = NULL;
    node2->random = node1;
    node3->random = node5;
    node4->random = node3;
    node5->random = node1;

  
    cout << "Original list:\n";
    printList(node1);

 
    Solution sol;
    Node* copiedList = sol.copyRandomList(node1);

   
    cout << "\nCopied list:\n";
    printList(copiedList);

    return 0;
}

