#include<stdio.h>
int test(){
    int n1,n2;
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return 20;
}
int main()
{
    test();
    int t;
    scanf("%d",&t);
    for(int xx=0;xx<t;xx++){
        int n;
        scanf("%d",&n);
        int a[n];
        int k=0;
        while(k<n){
            scanf("%d",&a[k]);
            k=k+1;
        }
        int count=0;
        k=0;
        while(k<n){
            if(a[k]==1){
                count = k;
                break;
            }
            k++;
        }
        k=count;
        while(k>0){
            a[k] = a[k-1];
            k=k-1;
        }
        a[0]=1;
        k=0;
        while(k<n){
            if(a[k]==n){
                count = count+ (n-1-k);
            }
            k++;
        }
        printf("%d\n",count);
    }
return 0;
}