import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Java_25_2dJaggedArray {
    public static void main(String args[]){
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int N=n;
        List<List<Integer>> arr = new ArrayList<>();
        while(n-- >0){
            int m= sc.nextInt();
            List<Integer>tempArray= new ArrayList<>();
            for(int i=0;i<m;i++){
                tempArray.add(sc.nextInt());
            }
            arr.add(tempArray);
        }
        n=N;
        int q = sc.nextInt();
        while(q-- >0){
            int x= sc.nextInt();
            int y=sc.nextInt();
            x--;y--;
            if(x>=n || x<0) {System.out.println("ERROR!");continue;}
            if(y>=arr.get(x).size() || y<0) {System.out.println("ERROR!");continue;}

            System.out.println(arr.get(x).get(y));
        }
    }
}
