// int dp[1000][1000]={-1};
map<pair<int,int>, int>m; //<int,int> => int

// i -> j

int minimumChange(string s1, string s2, int n1, int n2, int i, int j) {
    if(i>=n1 || j>=n2){
        return 0;
    }

if(m.find({i,j}!=m.end())){
    return m[{i,j}];
}
    // if(dp[i][j]!=-1)return dp[i][j];

    if(s1[i]==s2[j]){
        return minimumChange(s1,s2,n1,n2, i+1, j+1);
    }

    int ans1 = minimumChange(s1,s2,n1,n2,i, j+1)+1; //insert
    int ans2 = minimumChange(s1,s2,n1,n2,i+1, j)+1;  //delete
    int ans3 = minimumChange(s1,s2,n1,n2,i+1, j+1)+1;  //replace

    int ans = min(ans1, ans2);
    ans = min(ans, ans3);

     dp[i][j]= ans;
    return ans;
}
