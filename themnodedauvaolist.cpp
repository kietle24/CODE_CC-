#include<bits/stdc++.h>
using namespace std ;
struct node { 
     int data ; 
    node *next ; 
} ; 
typedef struct node node ;  
node *makeNode(int x ){  
        node *newNode = new node ; 
        newNode->data = x ; 
        newNode->next = NULL ; 
        return newNode ;
}
void duyet(node *head) {   
    node *p = head; 
    while( head != NULL ) { 
         cout << head ->data <<" " ; 
         head = head-> next ; 
    }
}
int count(node *head) { 
    int dem = 0;  
    while(head != NULL ) { 
        dem++ ; 
        head = head ->next; 
}
return dem ; 
}
void pushFront(node *&head, int x)   { 
     node *newNode = makeNode(x) ; 
    // Step 1: set newNode's next to current head
        newNode->next = head; // assign next pointer
        head = newNode;  // update head to new node
    

}

 int main () {
      node *head =NULL ;
      for(int i = 1 ; i <= 5;i++)  { 
        pushFront(head, i) ;
      } 
      duyet(head) ;
      cout<< count(head) << endl; 
return 0 ; 
 }