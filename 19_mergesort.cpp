    #include<bits/stdc++.h>
    using namespace std ; 
     struct ListNode{ 
     int val ; 
     ListNode* next ;
    ListNode(int x): val(x), next(NULL) {}
     }; 
    
    class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);  // tao mot not gia de sap xep lau danh sach 
        ListNode* returnnode = head; //     dung tro returnnode de duyet va xay dung danh sach moi tai head 

        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val) {  // gia tri l1 < l2 thi cap nhat gia tri l1 vao returnode 
                returnnode->next = l1;
                l1 = l1->next;
            } else {
                returnnode->next = l2; nguoc lai thi trar vao l2 
                l2 = l2->next;A
            }
            returnnode = returnnode->next; // tiep tuc tien toi node vua them
        }

        returnnode->next = (l1 != NULL) ? l1 : l2;

        return head->next;
    }
};
int main () { 
   

}
