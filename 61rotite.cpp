#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) // đieu kien 
            return head; // tra ve head 

        ListNode* temp = head; //
        int n = 1; // count starts at 1 since temp is already at head

        // Count number of nodes
        while (temp->next) {
            temp = temp->next;
            n++;
        }

        // Connect tail to head to form a circle
        temp->next = head;

        // Effective rotations
        k = k % n;
        int jump = n - k;

        // Find the new tail node
        temp = head;
        while (--jump > 0) {
            temp = temp->next;
        }

        // Set new head and break the circle
        ListNode* returnhead = temp->next;
        temp->next = nullptr;

        return returnhead;
    }
};
