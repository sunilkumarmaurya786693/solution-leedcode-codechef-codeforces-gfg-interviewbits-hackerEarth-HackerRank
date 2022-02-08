#include<bits/stdc++.h>
using namespace std;
typedef long long int intl;

class Node {
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

Node* deleteLastIndex(Node *head, int lastIndex){
    if(lastIndex<=0){
        cout<<"Index should be greater than 0\n";
        return head;
    }
    Node *firstPointer=head;
    Node *secondPointer=head;
    while(lastIndex && firstPointer){
        firstPointer=firstPointer->next;
        lastIndex--;
    }
    if(lastIndex>0){
        cout<<"lastIndex is greater than size of linkedlist\n";
        return head;
    }
    if(firstPointer==NULL){
        return secondPointer->next;
    }
    while(firstPointer && firstPointer->next && secondPointer){
        firstPointer=firstPointer->next;
        secondPointer = secondPointer->next;
    }
    if(secondPointer->next==NULL){
        secondPointer=NULL;
    }
    else {
        secondPointer->next=secondPointer->next->next;
    }
    return head;
}
void printLinkedList(Node *head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";
}
int main()
{
    freopen("i.txt", "r", stdin);  
    int n;
    cin>>n;

    Node *head=NULL;
    Node *currentHead=NULL;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        if(head==NULL){
            head = new Node(value);
            currentHead=head;
        }else{
            Node *temp= new Node(value);
            currentHead->next=temp;
            currentHead=currentHead->next;
        }

    }

    int lastIndex;
    cin>>lastIndex;
    printLinkedList(head);
    head=deleteLastIndex(head,lastIndex);
    printLinkedList(head);
    return 0;
}