#include<bits/stdc++.h>
using namespace std;
typedef long long int intl;

void permute(vector<int> nums, int i, vector<vector<int> >& perms) {
        if (i == nums.size()) {
            perms.push_back(nums);
        } else {
            for (int j = i; j < nums.size(); j++) {
                swap(nums[i], nums[j]);
                permute(nums, i + 1, perms);
            }
        }
    }    
    
    vector<vector<int> > permute(vector<int>& nums) {
        vector<vector<int> > perms;
        permute(nums, 0, perms);
        return perms;
    }

intl powerCal(intl a, intl b){
    if(b==0)return 1;
     intl half = powerCal(a,b/2);
     intl ans = half*half;
     if(b%2) {ans=ans*a;}
     return ans;
}

int getSumProd(vector<int>&arr, int n){
    intl count=0;
    intl ans=0;
    for(intl i=0;i<n;){
        if(arr[i]==0){
            i++;
            continue;
        }
        count=0;
        while(i<n && arr[i]==1){
            count++;
            i++;
        }
        if(count){
            ans =ans+((count*(count+1))/2);
        }
        
    }
    return ans;
}

int main() {
	intl t;
	cin>>t;
	
	while(t--){
	    intl n;
	    cin>>n;
        vector<int>arr(n);
	    // intl arr[n];
	    for(intl i=0;i<n;i++){
	        cin>>arr[i];
	    }
        vector<vector<int> >permutation = permute(arr);
        
        int sum=0;
        for(int i=0;i<permutation.size();i++){
            // for(int j=0;j<permutation.size();j++){
            //     cout<<permutation[i][j]<<" ";
            // }
            // cout<<"\n";
            sum =sum+ getSumProd(permutation[i],n);
        }
        cout<<sum<<"\n";
	   // cout<<solve(arr,n)<<"\n";
	    
	}
	
	return 0;
}
