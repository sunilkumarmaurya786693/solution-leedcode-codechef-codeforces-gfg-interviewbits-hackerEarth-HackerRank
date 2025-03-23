import java.io.*;
import java.util.*;

public class Java_11_string_token {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        scan.close();
        List<String>ans = new ArrayList<>();
        int prev=0;
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if((ch>='A' && ch<='Z') ||(ch>='a' && ch<='z')){
                continue;
            } else{
                if(prev != i){
                    ans.add(s.substring(prev,i));    
                }
                
                prev=i+1;
            }
        }
        char ch = s.charAt(s.length()-1);
        if((ch>='A' && ch<='Z') ||(ch>='a' && ch<='z')){
            ans.add(s.substring(prev));    
        }
        
        System.out.println(ans.size());
        for(String a: ans){
            System.out.println(a);
        }

        //same above solution
        String words[]=s.trim().split("[ !,?.\\_'@]+");
        System.out.println(words.length);
        for (String word:words)
            System.out.println(word);
    }
}

