class Arithmetic {
    int add(int x, int y){
        int z =x+y;
        return z;
    }
}

class Adder extends Arithmetic{

}

public class Java_16_inheritance {
    public static void main(String args[]){
        Adder a = new Adder();
        int result = a.add(10,20);
        System.out.println(result);
    }
}
