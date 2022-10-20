#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num , original, rem,result=0;
    cout<<"enter the three digit number";
    cin>>num;
    original=num;
    whlie(original!=0){
        //remender contain last digit
        rem=original%10;
        result += rem*rem*rem*rem;

        // removing last digit from the original number
        original=original/10;
    }
    if(result==num)
    cout<<num<<"it is an Armstrong number";
    else
    cout<<num<<"it is not armstrong number";

    return 0;
}
