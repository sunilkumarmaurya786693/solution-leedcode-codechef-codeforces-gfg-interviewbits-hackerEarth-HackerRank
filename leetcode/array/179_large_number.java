/**

@lc id : 179
@problem : Largest Number
@author : github.com/rohitkumar-rk
@url : https://leetcode.com/problems/largest-number/
@difficulty : medium
*/

class Solution {
    public String largestNumber(int[] nums) {
        
        String numString[] = new String[nums.length];
        
        //Convert given int array to String array
        for(int i=0;i<nums.length;i++)
            numString[i] = new String(nums[i]+"");
        
        /*Sort the numbers in descending order 
        This will give correct result for all cases except when two numbers are 3 and
        30. We should get 3,30. But we will get 30,3 due to descending order.
        To handle this, we check what no is formed by these two no's i.e. 330 & 303
        and hence compare firstNum + secondNum */
        Arrays.sort(numString, new Comparator<String>(){
            public int compare(String s1, String s2){
                String firstNum = s1 + s2;
                String secondNum = s2 + s1;
                return secondNum.compareTo(firstNum);
            }
        });
        
        /*Now only 1 case is left, if given array contains only 0's. Then our result
        might show 000 if num contains 3 elements. To handle this, if largest element is 0,
        return "0" */
        if(numString[0].equals("0"))
            return "0";
        
        String res = "";
        for(int i = 0;i < numString.length; i++)
            res += numString[i];
        
        return res;
    }
}