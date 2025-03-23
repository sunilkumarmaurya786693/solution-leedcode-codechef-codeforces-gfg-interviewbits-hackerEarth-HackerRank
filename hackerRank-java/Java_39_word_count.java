import java.util.*;
public class WordCount {
    public static void main(String args[]){
        Scanner sc =new Scanner(System.in);
        String s;
        int count=0;
        int count2=0;
        while(sc.hasNext()){
            s=sc.nextLine();

            String temp[] = s.split("[ \n \t \r]");
//            System.out.println(temp.length);
            for(int i=0;i<temp.length;i++){
                count2+=temp.length;
                boolean isWord=false;
                for(int j=0;j<temp[i].length();j++){
                    if(temp[i].charAt(j) ==' '){
                        continue;
                    }
                    isWord=true;
                    break;
                }
                if(isWord){
                    count++;
                }
                
            }
        }

        System.out.println(count2);
        System.out.println(count);
        
    }
}