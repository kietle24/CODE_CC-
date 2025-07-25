#include<bits/stdc++.h>
using namespace std ; 
  struct ListNode {
 int val;
    ListNode *next;
      ListNode() : val(0), next(NULL) {}
      ListNode(int x) : val(x), next(NULL) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
    ListNode* temp = head ;
    int n = 0 ; 
    while(temp->next ) {  
        temp->next ; 
        n++;
    }
    temp->next = head ; 
    k= k% n; 
    int jump = n- k ; 
    temp = head; 
    while(jump) { 
        temp = temp->next ; 
        jump--; 

    }
    ListNode* returnhead = temp->next ; 
    temp->next = NULL ; 
    return returnhead; 
    }
};
