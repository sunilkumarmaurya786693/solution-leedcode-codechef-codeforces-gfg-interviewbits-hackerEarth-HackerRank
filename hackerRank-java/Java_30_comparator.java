import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

class Player{
    String name;
    int score;

    Player(String name, int score){
        this.name = name;
        this.score = score;
    }
}

class Checker implements Comparator<Player> {

    public int compare(Player a, Player b) {
        if(a.score==b.score){
            return a.name.compareTo(b.name);
        }
        return b.score-a.score;
    }
}

public class Java_30_comparator {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Player player[] = new Player[n];
        for(int i=0;i<n;i++){
            String name = sc.next();
            int score = sc.nextInt();
            player[i] = new Player(name,score);
        }
        Checker checker = new Checker();
        Arrays.sort(player, (a,b)->b.score-a.score);
        for(int i = 0; i < player.length; i++){
            System.out.printf("%s %s\n", player[i].name, player[i].score);
        }
    }
}
