#include <iostream>
using namespace std;

int dp[2000][2000]={0};
int dp1[2000][2000]={0};
int main() {
	// your code goes here
// 	cout<<"sunil"<<dp[100][10];
	
    int i = 0, j = 0; // i counts rows, j counts columns

    int n = 2000;
    int k=1;
    for(int p=0;p<2000;p++){
        int i=0;
        int j=p;
        while(j>=0){
            dp[i][j]=k++;
            dp1[i][j]=dp[i][j];
            i++;
            j--;
        }
    }
    for(int i=1;i<1000;i++){
        dp[0][i]=dp[0][i]+dp[0][i-1];
    }
    for(int i=1;i<1000;i++){
        dp[i][0]=dp[i][0]+dp[i-1][0];
    }
    
    for(int i=1;i<1000;i++){
        for(int j=1;j<1000;j++){
            int x=dp[i-1][j];
            int y=dp[i][j-1];
            dp[i][j]=dp[i][j]+max(x,y);
            // cout<<dp[i][j]<<" ";
        }
        // cout<<"\n";
    }
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        x1--;y1--;x2--;y2--;

        if(x2>=x1 && y2>=y1){
        int intial=dp[x1][y1];
        int final1=dp[x2][y2]-intial+dp1[x1][y1];
        cout<<final1<<"\n";
        }else{
            cout<<0<<"\n";
        }

    }
	return 0;
}











// user
//     id
    



// url_store


























// //         5
// //     8       2
// // 6     5   9    4


// // bool order=true  l->r
// // false  r->l


// // queue-> 6 5 9 4

// // queue_size 4

// // order=true

// // print-> 5 2 8 6 5 9 4


// // 5 2 8 6 5 9 4
// // struct binaryTree
// // {
// //     binaryTree *left;
// //     binaryTree * right;
// //     int val;
// // };

// void zigzag(TreeNode *root){
//     if(root==NULL)return;

//     bool order=true;

//     queue<TreeNode *>q;
//     q.push(root);

//     while(q.size()){
        
//         int queue_size=q.size();
//         vector<int>levelStore;

//         while(queue_size--){

//             TreeNode *topElement= q.front();
//             q.pop();

//             levelStore.push_back(topElement->val);

//             if(topElement->left){
//                 q.push(topElement->left);
//             }

//             if(topElement->right){
//                 q.push(topElement->right);
//             }
//         }
//         if(order){
//             for(int i=0;i<n;i++){
//                 cout<<levelStore[i]<<" ";
//             }
//         }
//         else{
//              for(int i=n-1;i>=0;i--){
//                 cout<<levelStore[i]<<" ";
//             }
//         }
//         order = !order;
//     }

// }