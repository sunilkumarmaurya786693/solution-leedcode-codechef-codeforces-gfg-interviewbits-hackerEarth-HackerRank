import java.util.*;
class IPL {
    String name;
    Integer point;
    Double run_rate;
    
    IPL(String name){
        this.name=name;
        this.point=0;
        this.run_rate=0.0;
    }
}
public class IPL_TABLE {
    public static void main(String args[]){
        Scanner sc =new Scanner(System.in);
        int n=sc.nextInt();
        IPL arr[] = new IPL[n];
        Map<String,Integer> map = new HashMap<>();
        for(int i=0;i<n;i++){
            String name = sc.next();
            IPL ipl=new IPL(name);
            arr[i] = ipl;
            map.put(name,i);
        }
        int m=sc.nextInt();
        for(int i=0;i<m;i++){
            String team1=sc.next();
            Double run_rate1=sc.nextDouble();
            
            String team2=sc.next();
            Double run_rate2=sc.nextDouble();
//            System.out.println(team1+" "+run_rate1+" "+team2+" "+run_rate2);
            
            if(run_rate1.compareTo(run_rate2)==0){
                int index1 = map.get(team1);
                int index2 = map.get(team2);
                arr[index1].run_rate+=run_rate1;
                arr[index2].run_rate+=run_rate2;
                arr[index1].point+=1;
                arr[index2].point+=1;
            } else if(run_rate1.compareTo(run_rate2)>0){
                int index1 = map.get(team1);
                int index2 = map.get(team2);
                arr[index1].run_rate+=run_rate1;
                arr[index2].run_rate+=run_rate2;
                arr[index1].point+=2;
//                arr[index2].point+=1;
            }else{
                 int index1 = map.get(team1);
                int index2 = map.get(team2);
                arr[index1].run_rate+=run_rate1;
                arr[index2].run_rate+=run_rate2;
                arr[index2].point+=2;
            }
        }
        Comparator compare = new Comparator<IPL>(){
            @Override
            public int compare(IPL i1, IPL i2){
                if(i1.point == i2.point){
                   return i2.run_rate.compareTo(i1.run_rate);
                }
                return i2.point.compareTo(i1.point);
//                if(i1.run_rate==i2.run_rate){
//                    return i2.point-i1.point;
//                }
//                 return i2.run_rate.compareTo(i1.run_rate);

                
            }
        };
        Arrays.sort(arr,compare);
//        Arrays.sort(arr,(a,b)->b.run_rate.compareTo(a.run_rate));
        for(int i=0;i<n;i++){
//            Integer point =Double.parseInt(arr[i].point);
            System.out.println(arr[i].name+" "+arr[i].point+" "+String.format("%.2f",arr[i].run_rate));
        }
        
        
        
    }
}