#include<bits/stdc++.h>
using namespace std ; 
struct ListNode{ 
int val ;
ListNode* next ; 
ListNode(int x ):val(x), next(NULL){} 
};
/*
Tính chiều dài của danh sách (len)

Tìm node cần xóa bằng công thức: node thứ (len - n + 1) từ đầu

Xóa node đó bằng cách cập nhật con trỏ next của node trước nó.


*/
class Solution {
public:
ListNode* removeNthFromEnd(ListNode* head, int n) {
int len = 0 ;   // khoi tao bien dem do dai cua list 
ListNode* temp = head;  // temp la con tro de duyet danh sach tu dau 
ListNode* prev = NULL ;  //prev = con tro node dung truoc node can xoa 
for(len = 0 ; temp != NULL; len++)  // duyet den het list va dem so node cua list  
temp = temp->next ;  //temp di chuyen den cac node tiep theo 
if(len <  1 ) return NULL ;  //list rong tra ve NULL
temp = head ;  //temp tro ve dau reset temp duyet lai tu dau (vi o day can tim node can xoa !!)
for(; len - n > 0 ; len-- ){  
// day la ham de xac dinh node can xoa
//chung la can dung con tro temp de duyet den node can xoa 
//vd len =5 n= 2 thi len - n = 3 
// node can xoa la node thu 3 tu dau
// va va khi ket thuc vong lap temp se den node thu 3 
prev =temp ;  
temp= temp->next  ; 
}
if(prev == NULL) {
head = head->next; // neu prev = NULL thi node can xoa la node dau tien
} else {
prev->next = temp->next; // neu prey != NULL thi node can xoa khong phai la node dau tien ma la node thu n tu cuoi len
}
return head; // tra ve head, vi node can xoa da duoc xoa
}
};
int main () { 
Solution sol ; 
ListNode* head = new ListNode(1) ;
head->next = new ListNode(2); 
head->next->next = new ListNode(3);
head->next->next->next = new ListNode(4);
head->next->next->next->next = new ListNode(5);
int  n ; 
cin >> n ; 
ListNode* kq =sol.removeNthFromEnd(head,n) ; 
while(kq != NULL){ 
cout << kq->val << " " ; 
kq = kq->next ; 
}
return 0 ; 
}
