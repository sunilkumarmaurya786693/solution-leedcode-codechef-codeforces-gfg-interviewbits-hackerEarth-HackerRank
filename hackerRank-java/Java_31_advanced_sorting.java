import java.util.*;

class Student{
    private int id;
    private String fname;
    private double cgpa;
    public Student(int id, String fname, double cgpa) {
        super();
        this.id = id;
        this.fname = fname;
        this.cgpa = cgpa;
    }
    public int getId() {
        return id;
    }
    public String getFname() {
        return fname;
    }
    public double getCgpa() {
        return cgpa;
    }
}

//Complete the code
public class Java_31_advanced_sorting
{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int testCases = Integer.parseInt(in.nextLine());

        List<Student> studentList = new ArrayList<Student>();
        while(testCases>0){
            int id = in.nextInt();
            String fname = in.next();
            double cgpa = in.nextDouble();

            Student st = new Student(id, fname, cgpa);
            studentList.add(st);

            testCases--;
        }
        Comparator comparator = new Comparator<Student>() {
            @Override
            public int compare(Student a, Student b) {
                if(a.getCgpa()==b.getCgpa() && a.getFname().equals(b.getFname())){
                    return a.getId()-b.getId(); //asc
                }
                if(a.getCgpa()==b.getCgpa()){
                    return a.getFname().compareTo(b.getFname());//asc
                }
                return Double.compare(b.getCgpa(),a.getCgpa());//desc
            }
        };
        Collections.sort(studentList, comparator);
        for(Student st: studentList){
            System.out.println(st.getFname());
        }
    }
}



