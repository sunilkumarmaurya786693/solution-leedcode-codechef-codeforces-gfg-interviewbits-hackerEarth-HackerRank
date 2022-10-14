// 13. Roman to Integer
// Easy

// 7423

// 442

// Add to List

// Share
// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

// Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

// I can be placed before V (5) and X (10) to make 4 and 9. 
// X can be placed before L (50) and C (100) to make 40 and 90. 
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Given a roman numeral, convert it to an integer.

 

// Example 1:

// Input: s = "III"
// Output: 3
// Explanation: III = 3.
// Example 2:

// Input: s = "LVIII"
// Output: 58
// Explanation: L = 50, V= 5, III = 3.
// Example 3:

// Input: s = "MCMXCIV"
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

class Solution {
public:
    int romanToInt(string s) {
        int value[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string symbol []={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int n=s.size();
        int i=0;
        int sum=0;
        for(int index=12;index>=0;index--){
            if(symbol[index].size()==2){
                // cout<<s.substr(i,2)<<" "<<symbol[index]<<"\n";
                if(i+1<n && s.substr(i,2)==symbol[index]){
                    cout<<symbol[index]<<"\n";
                    i=i+2;
                    sum=sum+value[index];
                    index++;
                    
                }
            }else{
                string p="";
                p.push_back(s[i]);
                if( p==symbol[index]){
                    sum=sum+value[index];
                    // cout<<symbol[index]<<"\n";
                    index++;
                    i++;
                    
                }
            }
        }
        return sum;
    }
};
