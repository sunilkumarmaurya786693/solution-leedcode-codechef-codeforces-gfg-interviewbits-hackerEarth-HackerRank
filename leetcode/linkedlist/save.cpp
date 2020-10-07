#include <bits/stdc++.h>
#define pii pair<int, int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m = 1000000007;
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


int solve(ListNode *head){
  
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
