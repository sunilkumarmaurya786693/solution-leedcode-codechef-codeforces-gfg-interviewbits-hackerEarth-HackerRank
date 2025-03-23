import java.util.Scanner;

public class Java_10_anagaram {
    static boolean isAnagram(String a, String b) {
        // Complete the function
        a=a.toUpperCase();
        b=b.toUpperCase();
        int arrA[]= new int[26];
        int arrB[]= new int[26];
        
        if(a.length() !=b.length()){
            return false;
        }
        
        for(int i=0;i<a.length();i++){
            arrA[a.charAt(i)-'A']++;
            arrB[b.charAt(i)-'A']++;
        }
        
        for(int i=0;i<26;i++){
            if(arrA[i]!=arrB[i]){
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}