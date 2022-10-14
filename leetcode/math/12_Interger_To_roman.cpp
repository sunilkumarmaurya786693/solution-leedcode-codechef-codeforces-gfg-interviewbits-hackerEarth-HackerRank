class Solution {
public:
    string intToRoman(int num) {
        int value[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string symbol []={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        string ans="";
            for(int i=12;i>=0;i--){
                int x=value[i];
                int mul=num/x;
                    while(mul){
                        ans.append(symbol[i]);
                        mul--;
                    }
                num=num%x;
            }
        return ans;
    }
};