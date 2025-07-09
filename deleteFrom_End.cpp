#include <iostream>
using namespace std;
struct node {
    int data; 
    node *next ; 
}  ; 
void deleteFrom_End(node* &head) {
if (head == NULL) return; // empty list
node *temp = head;
node *prev = NULL;
while (temp->next != NULL) {
    prev = temp;
    temp = temp->next;
}

if (temp == head) { // only one node
    delete head;
    head = NULL;
} else {
    prev->next = NULL;
    delete temp;
}
}
int main () { 
node *head = new node ; 
head->data = 10 ; 
head->next = NULL  ; 
node *second = new node;
second->data = 20; 
second->next = NULL;
head->next = second; // link first node to second node
cout <<"Before deletion: "<<head->data<< "->" << head->next->data << endl ;
deleteFrom_End(head) ; 
if(head != NULL) { 
        cout<< "\nAfter deletion: " << head->data << endl;
}  else  { 
        cout <<"list is empty after deletion" << endl;
}
return 0; 
}