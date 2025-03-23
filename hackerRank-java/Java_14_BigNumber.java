import java.math.BigInteger;
import java.util.Scanner;

public class Java_14_BigNumber {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String n1= sc.nextLine();
        String n2 = sc.nextLine();
        sc.close();

        BigInteger b = new BigInteger(s);
        if(b.isProbablePrime(10)){
            System.out.println("Prime");
        }else{
            System.out.println("not prime");
        }

        BigInteger nb1 = new BigInteger(n1);
        BigInteger nb2 = new BigInteger(n2);
        BigInteger sum = nb1.add(nb2);
        BigInteger mul = nb1.multiply(nb2);

        System.out.println(sum);
        System.out.println(mul);

    }
}
