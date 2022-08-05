#include<iostream>
using namespace std;
long long int solve(int maxT, int maxN, int sumN){
    long long int sum=0;
    for(int i=0;i<maxT && sumN>0; i++){
        sum =sum+ min(sumN, maxN) * min(sumN, maxN);
        sumN = sumN - min(sumN, maxN);
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int maxT,maxN,sumN;
        cin>>maxT>>maxN>>sumN;
        cout<<solve(maxT, maxN,sumN)<<"\n";
    }

return 0;
}