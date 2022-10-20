#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,num, digit, rev=0;
    cout<<"enter your positive number:";
    cin>>num;
    n=num;
    do{
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }whlie(num!=0);

    cout<<"the reverse of the number is:"<<rev<<endl;
    if(n==rev)
    cout<<"the number is palindrome";
    else
        cout<<"the number is not palindrome";
    return 0;
}
