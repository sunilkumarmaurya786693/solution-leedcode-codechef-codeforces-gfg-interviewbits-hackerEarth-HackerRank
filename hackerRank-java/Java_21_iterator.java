import java.util.*;
public class Java_21_iterator{

    //just need to give the pointer index after ###
    static Iterator func(ArrayList mylist){
        Iterator it=mylist.iterator();
        Object text = "###";
        while(it.hasNext()){
            Object element = it.next();
            if(element.equals(text)){
                break;
            }
            //both if will work
            if(element.toString().equals("###")){
                break;
            }
        }
        return it;

    }
    @SuppressWarnings({ "unchecked" })
    public static void main(String []args){
        ArrayList mylist = new ArrayList();
        Double d=1.0;
        double d1=1.0;
        System.out.println(d.compareTo(d1));
        System.out.println(d.compareTo(d1));
        System.out.println(Double.compare(1.0,d));



        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        for(int i = 0;i<n;i++){
            mylist.add(sc.nextInt());
        }
//        mylist.sort(new Comparator() {
//            @Override
//            public int compare(Object o1, Object o2) {
//                return 0;
//            }
//        });

        mylist.add("###");
        for(int i=0;i<m;i++){
            mylist.add(sc.next());
        }

        Iterator it=func(mylist);
        while(it.hasNext()){
            Object element = it.next();
            System.out.println((String)element);
        }
    }
}

