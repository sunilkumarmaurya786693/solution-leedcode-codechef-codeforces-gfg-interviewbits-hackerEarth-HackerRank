// Q2. XOR QUERIES - II

// Given three integers A, B and C.
// Return the maximum possible value of A ^ D, such that D is an integer in range [B, C].
// Note 1: ^ repersents BITWISE xor.
// Note 2: A single testfile may contain multiple testcases upto 105.


// Problem Constraints
// 1 <= A, B, C <= 109


// Input Format
// The first argument given is the integer A.
// The second argument given is the integer B.
// The third argument given is the integer C.


// Output Format
// Return the maximum possible value of A ^ D, such that D is an integar in range [B, C].


// Example Input
// Input 1:
// A = 2
//  B = 1
//  C = 10
// Input 2:
// A = 3
//  B = 5
//  C = 6


// Example Output
// Output 1:
// 11
// Output 2:
// 6


// Example Explanation
// Explanation 1:
// For D = 9, A ^ D = 11, which is maximum for any D in range [1, 10].
// Explanation 2:
// For D = 5, A ^ D = 6, which is maximum for any D in range [5, 6]

int Solution::solve(int A, int B, int C){
   int x=0;
   for(int i=30;i>=0;i--)
   {
       int q=1<<i;
       bool a=A&q;
       if(a==1)
       {  
           if(x+q-1>=B);
           else
           {
                x=x+q;
           }
          
       }
       else
       {
           if(x+q<=C)x=x+q;
 
       }
       // cout<<q<<" "<<x<<endl;
 
 
 
   }
   return x^A;
  
}
