import java.util.*;
public class Java_32_array_recursion {
    static boolean solve(List<Integer>arr, int i, int n, int x){
        if(i>=n){ 
            return true;
        }
        if(i<0 || arr.get(i)==1)return false;
        boolean ans = false;
        arr.set(i,1);
        ans = ans | solve(arr,i-1,n,x);
        ans = ans | solve(arr,i+1,n,x);
        ans = ans | solve(arr,i+x,n,x);
        return ans;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int q = sc.nextInt();
        while(q-- >0){
            int n= sc.nextInt();
            int leap = sc.nextInt();
            boolean result = true;

            List<Integer>arr = new ArrayList<>();
            // List<Integer>dp = new ArrayList<>();
            for(int i=0;i<n;i++){
                arr.add(sc.nextInt());
                // dp.add(-1);
            }
            result = solve(arr,0,n,leap);
            if(result) System.out.println("YES");
            else System.out.println("NO");
            
        }
    }
}