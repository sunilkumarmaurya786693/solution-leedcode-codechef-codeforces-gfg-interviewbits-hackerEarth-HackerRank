import java.util.HashSet;
import java.util.Scanner;

public class Java_28_hashset {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.next());
        HashSet<String>set = new HashSet<>();
        while(n-- >0){
            String first_name = sc.next();
            String last_name = sc.next();
            set.add(first_name+last_name);
            System.out.println(set.size());
        }
    }
}
