import java.util.*;
public class Java_34_dequeu {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();

        Deque<Integer> deque = new ArrayDeque<>(); //it can be queue also
        List<Integer>arr = new ArrayList<>();
        Map<Integer,Integer>map = new HashMap<>();
        for(int i=0;i<n;i++){
            arr.add(sc.nextInt());

        }
        int max_unique_key=0;
        for(int i=0;i<n;i++){
            if(deque.size()>=m){
                Integer removed_element = deque.removeFirst();
                deque.add(arr.get(i));
                if(map.containsKey(arr.get(i))){
                    map.put(arr.get(i),map.get(arr.get(i))+1);
                }else{
                    map.put(arr.get(i),1);
                }
                map.put(removed_element, map.get(removed_element)-1);
                if(map.get(removed_element)==0){
                    map.remove(removed_element);
                }
            }else{
                deque.add(arr.get(i));
                if(map.containsKey(arr.get(i))){
                    map.put(arr.get(i),map.get(arr.get(i))+1);
                }else{
                    map.put(arr.get(i),1);
                }

            }
            if(map.size()>max_unique_key){
                max_unique_key = map.size();
            }
        }
        System.out.println(max_unique_key);
    }
}