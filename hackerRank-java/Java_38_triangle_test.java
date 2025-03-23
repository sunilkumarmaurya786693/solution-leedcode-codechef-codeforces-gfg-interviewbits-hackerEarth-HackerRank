import java.util.*;
public class Triangle {
    public static void main(String args[]){
        Scanner sc =new Scanner(System.in);
        double a=sc.nextDouble();
        double b=sc.nextDouble();
        double c=sc.nextDouble();
        
        double A=a*a;
        double B=b*b;
        double C=c*c;
        double tol=0.000001;
        
        if(a+b<=c || a+c<=b || b+c<=a){
            System.out.println("invalid");
        }else if(a==b && b==c){
            System.out.println("equilateral");
        }
        else if((Math.abs(A+B-C)<=tol) || (Math.abs(A+C-B) <=tol) || (Math.abs(B+C-A)<=tol) ){
            System.out.println("right-angled");   
        }else if(a==b || b==c || a==c){
            System.out.println("isosceles");
        }else{
            System.out.println("notspecial");
        }
        
    }
}