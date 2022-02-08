#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("i.txt", "r", stdin);  

    int start=0,end;
    cin>>end;
    
    int countZero=1;
    for(int i=start;i<=end;i++){
        int currentNumber=i;
        while(currentNumber){
            int digit=currentNumber%10;
            currentNumber=currentNumber/10;
            if(digit==0)
            {
                countZero++;
            }
        }
    }
    cout<<"total number of zero from 0 to "<<end<<" is "<<countZero;
    
    return 0;

}

// nlog(10)n
