class Solution {
public:
   
int mem_helper(int n , vector<int>&output ){
    if(n<0)
        return 0;
if(n ==0){
    return 1;
}
if(output[n] != -1){
    return output[n];
}
output[n] = mem_helper(n-1,output) + mem_helper(n-2,output);
    return output[n];
}
int climbStairs(int n) {
 vector<int> mem_rec(n+1,-1);
        return mem_helper(n,mem_rec);
    }

};
