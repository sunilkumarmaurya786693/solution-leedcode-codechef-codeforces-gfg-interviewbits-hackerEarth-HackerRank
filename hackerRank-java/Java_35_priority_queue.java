import java.util.*;

/*
 * Create the Student and Priorities classes here.
 */
class Student2 {
    Integer id;
    String name;
    double cgpa;

    Student2(Integer id, String name, Double cgpa){
        this.id=id;
        this.name=name;
        this.cgpa=cgpa;
    }

    int getId(){
        return this.id;
    }

    String getName(){
        return this.name;
    }

    Double getCgpa(){
        return this.cgpa;
    }

}

class Priorities {
//    Queue<Student> priorityQueue = new PriorityQueue<>(); //for priority queue
    PriorityQueue<Student2>priorityQueue = new PriorityQueue<>(new Comparator<Student2>() {
    @Override
    public int compare(Student2 s1, Student2 s2) {
        if(s1.getCgpa().compareTo(s2.getCgpa())==0 && s1.getName().equals(s2.getName())){
            return s1.getId()-s2.getId();
        }
        if(s1.getCgpa().compareTo(s2.getCgpa())==0){
            return s1.getName().compareTo(s2.getName());
        }
        return Double.compare(s2.getCgpa(),s1.getCgpa());
    }
});
//    Queue<String>queue = new ArrayDeque<>(); for making queue
    List<Student2>getStudents(List<String>events){
        addStudent(events);
        List<Student2>remainingStudent = new ArrayList<>();
        while(priorityQueue.isEmpty()==false){
            remainingStudent.add(priorityQueue.poll());
        }
        return remainingStudent;
    }

    void addStudent(List<String>events){
        for(int i=0;i<events.size();i++){
            String details  = events.get(i);
            String chunks[] = details.split(" ");
            if(chunks[0].equals("ENTER")){
                String name = chunks[1];
                Double cgpa = Double.parseDouble(chunks[2]);
                Integer id = Integer.parseInt(chunks[3]);
                Student2 s = new Student2(id,name,cgpa);
                priorityQueue.add(s);
            }else{
                //Served
                priorityQueue.poll();
            }
        }
    }
}


public class Java_35_priority_queue {
    private final static Scanner scan = new Scanner(System.in);
    private final static Priorities priorities = new Priorities();

    PriorityQueue<Double>pq = new PriorityQueue<>(Collections.reverseOrder());

    ArrayList<Integer>arr[]= new ArrayList[10];

    public static void main(String[] args) {
        int totalEvents = Integer.parseInt(scan.nextLine());
        List<String> events = new ArrayList<>();

        while (totalEvents-- != 0) {
            String event = scan.nextLine();
            events.add(event);
        }

        List<Student2> students = priorities.getStudents(events);

        if (students.isEmpty()) {
            System.out.println("EMPTY");
        } else {
            for (Student2 st: students) {
                System.out.println(st.getName());
            }
        }
    }
}
