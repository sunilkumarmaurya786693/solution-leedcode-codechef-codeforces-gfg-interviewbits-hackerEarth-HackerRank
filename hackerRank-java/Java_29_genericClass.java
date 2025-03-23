import java.io.IOException; import java.lang.reflect.Method;
import java.util.ArrayDeque;
import java.util.Queue;
import java.util.Stack;

class PrintAnything{
    public static <T> void print(T arr[]){
        for(T element:arr){
            System.out.println(element);
        }
    }
}
//class Printer { public static void printArray(T array[]){ for(T temp : array) { System.out.println(temp); } } }

public class Java_29_genericClass {

    public static void main(String args[]){
        Queue<Integer>q= new ArrayDeque<>();
        q.add(1);
        q.add(2);
        System.out.println(q);
        System.out.println(q.peek());
        System.out.println(q.poll());
        System.out.println(q.peek());
        System.out.println(q.size());

        System.out.println("-------");

        Stack<Integer>st = new Stack<>();
        st.push(1);
        st.push(2);

        System.out.println(st);
        System.out.println(st.peek());
        System.out.println(st.pop());
        System.out.println(st.peek());
        System.out.println(st.size());

        Integer intArr[] = {1,2,4};
        String strArr[]={"ads","Ad"};
        PrintAnything.print(strArr);
        PrintAnything.print(intArr);

    }
}
