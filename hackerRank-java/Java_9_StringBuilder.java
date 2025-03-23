import java.io.*;
import java.util.*;

public class Java_9_StringBuilder  {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        StringBuilder B = new StringBuilder(A);
        B= B.reverse();
        if(A.compareTo(B.toString())==0){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
        /* Enter your code here. Print output to STDOUT. */
        
    }
}



