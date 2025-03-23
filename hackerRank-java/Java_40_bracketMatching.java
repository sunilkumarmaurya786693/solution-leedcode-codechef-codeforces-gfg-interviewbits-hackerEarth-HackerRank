import java.util.*;
import java.lang.*;
import java.io.*;
public class BracketMatching {
    public static void main(String args[]){
        Scanner sc =new Scanner(System.in);
        int n=sc.nextInt();
        StringBuilder sb = new StringBuilder("sunil");
        sb.setCharAt(5,'c');
        ArrayList<Integer>arr[]=new ArrayList[10];
        HashMap<Integer,Integer>map = new HashMap<>();
        map.put(1,2);
        map.containsKey(1);
        Set<Integer>set =map.keySet();

        sc.nextLine();
        while(n-- >0){
            String s= sc.nextLine();
            boolean ans = true;
            Stack<Character>st = new Stack<>();
            for(int i=0;i<s.length();i++){
                Character ch = s.charAt(i);
                if(ch=='(' || ch=='[' || ch=='{'){
                    st.push(ch);
                }else if(ch == ')' || ch==']' || ch=='}'){
                    if(st.isEmpty()){
                        ans=false; break;
                    }
                    Character top1= st.peek();
                    //System.out.println(top1+" "+ch);
                    if((top1=='(' && ch==')') || (top1=='{' && ch=='}') || (top1=='[' && ch==']')){
                        st.pop();
                    }
                }
            }
            if(st.isEmpty() && ans){
                            System.out.println("TRUE");                
            }else{
                            System.out.println("FALSE");
            }

        }
    }
}