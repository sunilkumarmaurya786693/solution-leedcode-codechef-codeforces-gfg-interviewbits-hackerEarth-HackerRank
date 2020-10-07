#include <bits/stdc++.h>
#define pii pair<int, int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m = 1000000007;

// 5
// 1 2 3 4 5

// 1,2 2,4 3,null

// 6
// 1 2 3 4 5 6

// 1,2 2,4 3,6 4,null

// 1,2

// 1,2 2,null

// 1 2 3

// 1,2 2,3 3,

// 1 2 3 4

// 1,2 2,3 3 null

struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x)
  {
    this->val = x;
    this->next = NULL;
  }
};

int middleFinder(ListNode *slow, ListNode *fast){
   if(fast==NULL)return slow->val;
   if(fast->next==NULL)return middleFinder(slow->next,fast->next);
   return middleFinder(slow->next,fast->next->next);
}

int solve(ListNode *head){
    ListNode *slow=head, *fast=head->next;
  return middleFinder(slow,fast);
}



int main()
{
#ifndef ONLINE_JUDGE
  freopen("i.txt", "r", stdin);
#endif
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  ListNode *head=NULL;
  ListNode *head1= NULL;
  for (int i = 0; i < n; i++)
  {
    ListNode *temp = new ListNode(arr[i]);
    if (head == NULL)
    {
      head = temp;
      head1 = temp;
    }
    else if(head!=NULL && head1!=NULL)
    {
      head1->next=temp;
      head1=head1->next;   
    }
  }

  cout<<solve(head);

  // while(head)
  // {
  //   cout<<head->val<<"\n";
  //   head=head->next;
  // }

  return 0;
}
