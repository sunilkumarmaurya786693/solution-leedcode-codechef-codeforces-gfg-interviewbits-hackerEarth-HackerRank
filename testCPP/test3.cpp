#include<bits/stdc++.h>
using namespace std;


//         5
//      /     \
//   3        7
// /
// 2
//   TRUE

//         5
//      /     \
//     2       7


//       5
//    /     \
//   3       7
// /          /
// 8        4
// FALSE



//        5
//      /    \
//     3      7
//    /  \
//   2   4


//        5
//      /    \
//     4      7
//    /  
//   2   


//        5
//      /    \
//     3      7
//    /  \   / \
//   1   4   6  11
//             / \
               8   12

//        5
//      /    \
//     3      11
//    /  \   / \
//   1   4   8  12
            //  /
            // 6

pair<TreeNode*, string> findParent(TreeNode *root, TreeNode *deleteNode){
    if(root==NULL)return {NULL, left};
    
    if(root->left == deleteNode){
        return {root, left};
    }
    
    if(root->right == deleteNode){
        return {root,right};
    }
    TreeNode *left = findParent(root->left, deleteNode);
    TreeNode *right= findParent(root->right, deleteNode);

    if(left.first)return left;
    if(right.second)return right;
    return root;
}
void deleteBstNode (TreeNode *root, TreeNode *deleteNode){
       
       TreeNode *findParent = findParent(root, deleteNode);
       TreeNode *rightChild = deleteNode->right;
       TreeNode *leftChild= deleteNode->left;
}
