import java.text.NumberFormat;
import java.util.*;
public class Java_7_Currency {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();

        NumberFormat US = NumberFormat.getCurrencyInstance(Locale.US);
        NumberFormat IN = NumberFormat.getCurrencyInstance(new Locale("en","IN"));
        NumberFormat China = NumberFormat.getCurrencyInstance(Locale.CHINA);
        NumberFormat France = NumberFormat.getCurrencyInstance(Locale.FRANCE);



        // Write your code here.

        System.out.println("US: " + US.format(payment));
        System.out.println("India: " + IN.format(payment));
        System.out.println("China: " + China.format(payment));
        System.out.println("France: " + France.format(payment));
    }
}
