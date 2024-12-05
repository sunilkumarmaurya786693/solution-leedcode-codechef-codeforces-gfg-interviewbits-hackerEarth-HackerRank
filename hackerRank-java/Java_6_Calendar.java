import java.util.Calendar;

public class Java_6_Calendar {
    enum Days{
        SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
    }
    public static  void main(String args[]){
        Calendar c = Calendar.getInstance();
        c.set(2024,11,5);
//        System.out.println(c.getTime());
        int x = c.get(Calendar.DAY_OF_WEEK);
        String Day[]={"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};
        System.out.println(Day[x-1]);
    }
}
