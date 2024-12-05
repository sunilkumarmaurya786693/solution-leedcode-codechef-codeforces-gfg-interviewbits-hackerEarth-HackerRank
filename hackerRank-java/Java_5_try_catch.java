import java.util.*;
public class Java_5_try_catch {
    public static void main(String args[]){
        try{
            Scanner sc = new Scanner(System.in);
            int a = sc.nextInt();
            int b = sc.nextInt();
            
            if(a>=0 && b>=0){
                int area = (a*b);
                System.out.println(area);       
            }
            else{
                throw new Exception("Breadth and height must be positive");
            }
        }catch(Exception e){
            System.out.println(e);
        }
        
    }
}