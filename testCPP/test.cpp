#include<bits/stdc++.h>
using namespace std;



//         5
//      /     \
//   3       7
// /
// 2
//   TRUE


//       5
//      /     \
//   3       7
// /          /
// 8        4
// FALSE



//        5
//      /    \
//     3 (null,5)     7
//    /  \
//   2 (null,3)  6


//node-> head
//min1->null  -inf
//max1->null  +inf

bool isBST(TreeNode *root, TreeNode* min1, TreeNode *max1){
    if(node==NULL){
        return true;
    }
    bool ans=true;
    if(min1){
        if(root->val < min1->val){
            ans=ans& false;
        }
        // if(min1->val> root>val){
        //     min1=root;
        // }
    }
    // else{
    //     min1=root;
    // }

    if(max1){
        if(root->val > max1->val){
            ans=ans&false;
        }

        // if(max1->val < root->val){
        //     max1=root;
        // }
    }
    // else{
    //     max1=root;
    // }
    
    bool leftAns= isBST(root->left, min1, root);
    bool rightAns= isBST(root->right, root, max1);

    return ans & leftAns & rightAns;
}