import java.util.Scanner;
import java.util.regex.*;

public class Java_12_pattern {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        //just to clean buffer
        if (sc.hasNextLine()) {
            sc.nextLine();
        }
        while(n>0){
            String s = sc.nextLine();
            try{
                Pattern.compile(s);
                System.out.println("Valid");
            }catch (PatternSyntaxException e){
                System.out.println("Invalid");
            }
            n=n-1;
        }
        sc.close();   
    }
    public static void main1(){
        Scanner in = new Scanner(System.in);
        //everything should be in in.nextLine();
        int testCases = Integer.parseInt(in.nextLine());
        while(testCases > 0){
            String pattern = in.nextLine();
            try {
                Pattern.compile(pattern);
                System.out.println("Valid");
            } catch (PatternSyntaxException e) {
                System.out.println("Invalid");
            }
            testCases--;
        }
    }
}
