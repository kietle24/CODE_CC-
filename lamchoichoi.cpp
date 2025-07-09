#include <iostream>
using namespace std;
struct node {
    int data;
    struct node *next;
};
typedef struct node node; // define node as a type
node *makeNode(int x) { //funcion to create a new node ; 
    node *newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}
void duyet(node *head) { 
    while(head != NULL ) { 
        cout << head->data <<" " ; 
        head = head->next ; //move to the next node if it exists 
    } 

}
int count(node *head) {  
    int dem = 0 ; 
    while(head != NULL)  { 
        dem++; 
        head = head->next; // move to the next node
    }
    return dem  ;
}
void pushFront(node **head , int x )  { 
     node *newNode = makeNode(x); // create a new node
     newNode->next = *head; // point the new node to the current head
        *head = newNode; // update the head to the new node
}
int main() {
    system("cls"); // clear the console screen
    node *head =NULL ; // initialize the head of the linked list 
    for(int i = 1 ; i <=5 ; i++){ 
         pushFront(&head, i); // push elements 1 to 5 to the front of the list
    }
    duyet(head) ; 
    cout << count(head) << endl ; 
    return 0;
}