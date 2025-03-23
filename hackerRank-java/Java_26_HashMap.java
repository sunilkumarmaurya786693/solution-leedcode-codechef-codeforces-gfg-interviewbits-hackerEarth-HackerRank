import java.util.HashMap;
import java.util.Scanner;
import java.util.*;

public class Java_26_HashMap {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        Map<String,Integer>storeDetail = new HashMap<>();
        Map<Integer,Integer>storeDetail1 = new HashMap<>();

        while(n-- >0){
            String name = sc.nextLine();
            Integer phoneNumber = Integer.parseInt(sc.nextLine());
            storeDetail.put(name, phoneNumber);
        }
        while(sc.hasNext()){
            String search_name = sc.nextLine();
            if(storeDetail.containsKey(search_name)){
                System.out.println(search_name+"="+storeDetail.get(search_name));
            }else{
                System.out.println("Not found");
            }
        }


        Set<Integer>p =  storeDetail1.keySet();
        Iterator it = p.iterator();

        storeDetail.forEach((k,v)-> {
            System.out.println(k+" "+v);
        });
//        for(String x: p){
//            System.out.println(p);
//        }
    }
}
