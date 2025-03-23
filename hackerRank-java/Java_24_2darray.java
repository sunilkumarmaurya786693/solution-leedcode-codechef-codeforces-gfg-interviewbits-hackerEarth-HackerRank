import java.util.Scanner;

public class Java_24_2darray {
    public static  void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n=6;
        int m=6;
        int arr[][]= new int[n][m];
        for(int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                int x= sc.nextInt();
                arr[i][j]=x;
            }
        }

        int max_sum=-1000000;
        for(int i=0;i<=n-3;i++){
            for(int j=0;j<=n-3;j++){
                int sum1= arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
                int sum2=-1000000;
                if(arr[i+1][j+1]==0 && arr[i][j+2]==0 && arr[i+2][j+2]==0){
                    sum2=arr[i][j]+arr[i][j+1]+arr[i+2][j]+arr[i+2][j+1];
                }
                int sum3=-1000000;
                if(arr[i][j+1]==0 && arr[i][j+2]==0 && arr[i+1][j+1]==0 && 
                arr[i+2][j+1]==0 && arr[i+2][j+2]==0){
                    sum3=arr[i][j]+arr[i+2][j];
                }
                max_sum =Math.max(max_sum,sum1);
                max_sum=Math.max(max_sum,sum2);
                max_sum=Math.max(max_sum,sum3);
            }
        }
        System.out.println(max_sum);
    }
}
