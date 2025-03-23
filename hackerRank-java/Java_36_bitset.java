import java.util.BitSet;
import java.util.Scanner;

public class Java_36_bitset {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        BitSet b1 = new BitSet(n);
        BitSet b2 = new BitSet(n);
        while(m-- >0){
            String type = sc.next();
            if(type.equals("AND") || type.equals("OR") || type.equals("XOR")){
                int a1=sc.nextInt();
                int a2 = sc.nextInt();
                if(type.equals("AND")){
                    if(a1==1){
                        b1.and(b2);
                    }else{
                        b2.and(b1);
                    }
                }
                if(type.equals("OR")){
                    if(a1==1){
                        b1.or(b2);
                    }else{
                        b2.or(b1);
                    }
                }
                if(type.equals("XOR")){
                    if(a1==1){
                        b1.xor(b2);
                    }else{
                        b2.xor(b1);
                    }
                }

            }
            if(type.equals("SET")){
                int a1 = sc.nextInt();
                int index = sc.nextInt();
                if(a1==1){
                    b1.set(index);
                }else{
                    b2.set(index);
                }
            }

            if(type.equals("FLIP")){
                int a1 = sc.nextInt();
                int index = sc.nextInt();
                if(a1==1){
                    boolean prev_value = b1.get(index);
                    b1.set(index,!prev_value);
                }else{
                    boolean prev_value = b2.get(index);
                    b2.set(index,!prev_value);
                }
            }


            System.out.println(b1.cardinality()+" "+b2.cardinality());
        }
    }
}
