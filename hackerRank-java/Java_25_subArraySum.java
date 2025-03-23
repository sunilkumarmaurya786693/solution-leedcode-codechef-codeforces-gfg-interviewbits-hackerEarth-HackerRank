import java.util.*;
public class Java_25_subArraySum {
    static int getSubArrayCount(int arr[], int n){
        int count=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum=sum+arr[j];
                if(sum<0){
                    count++;
                }
            }
        }
        return count;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }

        int result = getSubArrayCount(arr,n);
        System.out.println("result: "+result);

    }
}