//  construct all unique bst 
#include<bits/stdc++.h>
using namespace std;
typedef long long int intl;
class TreeNode {
    public: 
    int val;
    TreeNode *left, *right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
}

void printBST(TreeNode* head){
    if(head ==NULL)return;
    cout<<head->val<<" ";
    printBST(head->left);
    printBST(head->right);
}
int main()
{
    int n=3;
    vector<TreeNode*>ans = constructBST(1,n);
    for(int i=0;i<ans.size();i++){
        printBST(ans[i]);
        cout<<"\n";
    }
    
return 0;
}