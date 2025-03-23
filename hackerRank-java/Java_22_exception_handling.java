import java.util.InputMismatchException;
import java.util.Scanner;

public class Java_22_exception_handling {
    public static  void main(String args[]){
        Scanner sc  =new Scanner(System.in);

        try{
            // String a= sc.next();
            // String b = sc.next();
            int A = sc.nextInt();
            int B = sc.nextInt();

             int result = A/B;
             System.out.println(result);
        } 
        catch (InputMismatchException e){
            System.out.println("java.util.InputMismatchException");
        }
        // catch (ArithmeticException e){
        //     System.out.println("java.lang.ArithmeticException: / by zero"+e.getMessage());
        // }
        catch (Exception e){
            System.out.println(e.toString());
        }
    }
}
