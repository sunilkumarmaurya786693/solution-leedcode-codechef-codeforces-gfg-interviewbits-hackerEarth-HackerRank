import java.util.*;
public class JAVA_4_multiLine {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int index=1;
        while(sc.hasNext()){
            String s = sc.nextLine();

            s=Integer.toString(index)+" "+s;
            index+=1;
            System.out.println(s);
        }
    }
}