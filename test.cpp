// C++ program to generate random numbers
#include <iostream>
#include<memory.h>
#include <time.h>
#include <string>

using namespace std;
const int nn=10000000;



string pa[8]={"0","10","110","1110","111100","111101","111110","111111"};
char store[]={'J','A','G','N','E','S','O','K'};

int comp(unsigned char dst[nn], unsigned char src[nn]){
    int offset = 0;
    unsigned char p = 0u;
    for(int i=0;i<nn;i++){
        unsigned char c = src[i];
        for(int j=0;j<8;j++)
        {
            if(c==store[j]){
                string encode = pa[j];
                for(int k=0;k<encode.size();k++){
                    int x = encode[k]-'0';
                    if(x==1){
                        int setIndex = 7-(offset%8);
                        p = p|1<<setIndex;
                    }
                    offset++;
                    if(offset%8==0){
                            dst[(offset/8)-1]=p;
                            p=0u;
                    }
                        
                }
            }
        }        
    }
    if(offset%8>0){
        dst[(offset/8)]=p;
        return (offset/8)+1;
    }
    return offset/8;
}
void convertBinary(int n, int arr[]){
    int i=7;
    while(n){
        int r = n%2;
        n=n/2;
        arr[i]=r;
        i--;
    }
}
void decomp(unsigned char dst[nn], unsigned char src[nn]){
    int sum=0;
    int decodeNumber[8]={0,2,6,14,60,61,62,63};
    int index=0;
    for(int i=0;i<nn;i++){
        int x = (int)(dst[i]);
        int arr[8]={0};
        convertBinary(x,arr);
        for(int j=0;j<8;j++){
            sum = sum*2+arr[j];
            for(int k=0;k<8;k++){
                if(decodeNumber[k]==sum){
                    src[index++]=store[k];
                    if(index>=nn){
                        return;
                    }
                    sum=0;
                }
            }
        }
    }
}


int main()
{
	srand(time(0));

    static const char *tbl="JAGANJNJJGANJJAAJJEAJJOAJAJJGJJNJKJSNNJJJAJJNAAJAJAJJGAJJANJJJAJ";
    static unsigned char src[nn];
    static unsigned char _src[nn];
    static unsigned char dst[nn];

long long SCORE=0LL;
    for(int i=0;i<10;i++){
        for(int j=0;j<nn;j++){
            char c=tbl[rand()%64];
            _src[j]=c;
            src[j]=c;
        }
        int start=0;
        // cout<<src<<"\n";
        // clock()/(CLOCK_PER_SEC/1000);
        int size = comp(dst,src);
        cout<<"Reduce Percentage %"<<(size*100/nn)<<" Actual size is "<<size<<"\n";
        memset(dst+size,rand()%256,nn-size);
        memset(src,0,nn);
        
        decomp(dst,src);
        // // SCORE+=clock()/(CLOCK_PER_SEC/1000LL)-start;

        if(memcmp(src,_src,nn)!=0){
            cout<<"No\n";
            SCORE+=1000000000000LL;
        }else{
            SCORE+=size*100000LL;
        }
    }
    cout<<"Final Score = "<<SCORE<<"\n";
    
	return 0;
}