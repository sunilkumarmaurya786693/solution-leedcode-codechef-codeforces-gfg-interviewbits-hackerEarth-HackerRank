import java.util.*;
public class Java_33_linkedList {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Integer>arr = new LinkedList<>();
        for(int i=0;i<n;i++){
            arr.add(sc.nextInt());
        }
        int q = sc.nextInt();
        while(q-- >0){
            String operationType = sc.next();
            if(operationType.equals("Insert")){
                int index= sc.nextInt();
                int value = sc.nextInt();
                arr.add(index,value);
            }else{
                int index = sc.nextInt();
                arr.remove(index);
            }
        }

        for(int i=0;i<arr.size();i++){
            System.out.print(arr.get(i)+" ");
        }
        
        
    }
}