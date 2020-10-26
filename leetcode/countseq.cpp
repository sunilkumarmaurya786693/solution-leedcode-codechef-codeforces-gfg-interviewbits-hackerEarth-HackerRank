//Question
The count-and-say sequence is the sequence of integers beginning as follows:

1, 11, 21, 1211, 111221, ...
1 is read off as one 1 or 11. 11 is read off as two 1s or 21.

21 is read off as one 2, then one 1 or 1211.

Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.

Example:

if n = 2, the sequence is 11.

//Solution
string Solution::countAndSay(int A) {
    string s[A+2];
    s[1] = "1";
    s[2] = "11";
    for(int i = 3; i <= A; i++) {
        s[i] = "";
        for(int j = 0; j < s[i-1].length(); j++) {
            char x = s[i-1][j];
            int count = 1;
            while((j+1) < s[i-1].length() && s[i-1][j+1] == x) {
                count++;
                j++;
            }
            string sCount = "";
            while(count > 0) {
                int y = count % 10;
                count = count / 10;
                char c = y + '0';
                sCount.push_back(c);
            }
            string iCount = "";
            for(int j = sCount.length() - 1; j >= 0; j--) {
                iCount += sCount[j];
            }
            s[i] += iCount;
            s[i] += x;
        }
    }
    return s[A];
}
