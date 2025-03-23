import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class MyRegex {
//    1--> it can contain single digit i.e ([0-9]);
//
//2--> It can contain two digits i.e ([0-9][0-9]);
//
//3--> Range is (099 to 199)i.e((0|1)[0-9][0-9]);
//–
//4--> range is (200 - 249) i.e (2[0-4][0-9]) ;
//
//5--> range is (250-255) i.e (25[0-5]);
//
//    Total :"([0-9]|[0-9][0-9]|(0|1)[0-9][0-9]|2[0-4][0-9]|25[0-5])"
    String zerotoMax = "([0-9]|[0-9][0-9]|(0|1)[0-9][0-9]|2[0-4][0-9]|25[0-5])";
    String pattern = zerotoMax+"."+zerotoMax+"."+zerotoMax+"."+zerotoMax;
}

public class Java_13_ip_regex {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext())
        {
            String IP = sc.next();
            System.out.println(IP.matches(new MyRegex().pattern));
        }

    }
}
