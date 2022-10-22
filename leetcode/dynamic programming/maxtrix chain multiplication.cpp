// Matrix Chain Multiplication
// Given a sequence of matrices, find the most efficient way to multiply these matrices together. The efficient way is the one that involves the least number of multiplications.
// The dimensions of the matrices are given in an array arr[] of size N (such that N = number of matrices + 1) where the ith matrix has the dimensions (arr[i-1] x arr[i]).
// Example 1:
// Input: N = 5
// arr = {40, 20, 30, 10, 30}
// Output: 26000
// Explaination: There are 4 matrices of dimension 
// 40x20, 20x30, 30x10, 10x30. Say the matrices are 
// named as A, B, C, D. Out of all possible combinations,
// the most efficient way is (A*(B*C))*D. 
// The number of operations are -
// 20*30*10 + 40*20*10 + 40*10*30 = 26000.
 
// Example 2:
// Input: N = 4
// arr = {10, 30, 5, 60}
// Output: 4500
// Explaination: The matrices have dimensions 
// 10*30, 30*5, 5*60. Say the matrices are A, B 
// and C. Out of all possible combinations,the
// most efficient way is (A*B)*C. The 
// number of multiplications are -
// 10*30*5 + 10*5*60 = 4500.
int dp[101][101];
int solve(int n, int arr[], int i,int j){
   if(i>=j)return 0;
   if(dp[i][j]!=-1)return dp[i][j];
   int temp=INT_MAX;
   for(int k=i;k<j;k++){
       temp=min(temp,solve(n,arr,i,k)+solve(n,arr,k+1,j)+arr[i-1]*arr[k]*arr[j]);
   }
   dp[i][j]=temp;
   return temp;
  
}
   int matrixMultiplication(int N, int arr[])
   {
       memset(dp,-1, sizeof(dp));
       return solve(N,arr,1,N-1);
   }
