#include <bits/stdc++.h>
using namespace std;

int main()
{
     int year;
     cout<<"enter the year :";
     cin>>year;
     if((year%4==0 && year%100!=0) || year%400==0)
     cout<<year<<"leap year";
     else
     cout<<"not leap year";
    return 0;
}
