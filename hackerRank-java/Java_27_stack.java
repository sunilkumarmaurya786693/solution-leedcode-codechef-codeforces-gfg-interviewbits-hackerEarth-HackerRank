import java.util.List;
import java.util.Scanner;
import java.util.Stack;

public class Java_27_stack {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextLine()){
            String s = sc.nextLine();
            Stack<Character>st= new Stack<>();
//            List<Character> st = new Stack<>();
            boolean ans = true;
            for(int i=0;i<s.length();i++){
                Character character = s.charAt(i);
                if(character.equals('{') || character.equals('[') || character.equals('(')){
                    st.push(character);
                }else if(st.isEmpty()==false){
                    Character top = st.peek();
                    if(top=='{' && character=='}')st.pop();
                    if(top=='[' && character==']')st.pop();
                    if(top=='(' && character==')')st.pop();
                }else{
                    ans = false;
                }
            }
            if(st.isEmpty() && ans==true){
                System.out.println("true");
            }else{
                System.out.println("false");
            }
        }
    }
}
