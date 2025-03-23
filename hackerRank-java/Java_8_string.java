import java.io.*;
import java.util.*;

public class Java_8_string {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String A = sc.next();
        String B = sc.next();
        int total_length = A.length()+B.length();
        System.out.println(total_length);
        int comapre = A.compareTo(B);
        if(comapre>0){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
        char a = (char)(A.charAt(0)-'a'+'A');
        //if already capital latter
        if(A.charAt(0)>='A'&& A.charAt(0)<='Z'){
            a=A.charAt(0);
        }
        
        char b = (char)(B.charAt(0)-'a'+'A');
        if(B.charAt(0)>='A'&& B.charAt(0)<='Z'){
            b=B.charAt(0);
        }
        System.out.println(a+A.substring(1)+" "+b+B.substring(1));
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    }
}
