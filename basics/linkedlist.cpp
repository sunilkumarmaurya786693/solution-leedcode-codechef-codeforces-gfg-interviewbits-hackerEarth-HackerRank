#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;

//email-> anil.bhat@siply.in

// input
// 12
// 1 2 3 4 5 6 7 8 9 10 11 12

// output
// 1 3 2 6 5 4 10 9 8 7 12 11


struct LinkedList {
    int data;
    LinkedList * next;

    LinkedList (int x) {
        data = x;
        next = NULL;
    }
};

//this will reverse linkedlist on given node to next k element.
LinkedList* reverseChunkList(LinkedList *head, int k) {
    LinkedList *prevPointer=NULL;
    LinkedList *currentPointer=head;
    LinkedList *nextPointer=head;
    int chunk=k;
    while( currentPointer !=NULL && chunk--){
        nextPointer=currentPointer->next;
        currentPointer->next= prevPointer;
        prevPointer= currentPointer;
        currentPointer = nextPointer;
    }
    return prevPointer;
}
//this will return the whole reverse linkedList (reverse in k chunks)
LinkedList* revereseLinkedList(LinkedList *head) {
    if(head==NULL || head->next==NULL)return head;
    
    int k=2;
    LinkedList *prevPointer = head;
    LinkedList *currentPointer = head->next;
    LinkedList *nextPointer = head->next;
    
    while(currentPointer){
        int chunks=k;
        
        while(chunks-- && nextPointer){
            nextPointer = nextPointer->next;
        }

        LinkedList *temp = reverseChunkList(currentPointer, k);
        prevPointer->next=temp;
        prevPointer = currentPointer;
        currentPointer=nextPointer;

        k++;
    }
    return head;
}

//this will reverse array from start and end index
void reverse(int arr[], int s, int e){
    while(s<e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}

//this will reverse array in k chunks
void reverseArray(int arr[], int n){
    int k=1;
    int i=0;
    while(i<n){
        int e = min(i+k-1, n-1);
        reverse(arr, i, e);
        i=i+k;
        k++;
    }

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
     LinkedList *head= NULL;
     LinkedList *tempHead= NULL;
     
     //taking input and creating linkedList for given input
     cout<<"-----------Given input -----------------\n";
     cout<<n<<"\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(head==NULL){
            head = new LinkedList(arr[i]);
            tempHead=head;
        }else{
            tempHead->next = new LinkedList(arr[i]);
            tempHead=tempHead->next;
        }
        cout<<arr[i]<<" ";
    }
    cout<<"\n";


    cout<<"------------Reverse array in k size chunks -----------------\n";
    reverseArray(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";


    cout<<"------------Reverse linkedList in k size chunks -----------------\n";
    LinkedList *reverseHead=revereseLinkedList(head);
    while(reverseHead){
        cout<<reverseHead->data<<" ";
        reverseHead=reverseHead->next;
    }

    return 0;
}
