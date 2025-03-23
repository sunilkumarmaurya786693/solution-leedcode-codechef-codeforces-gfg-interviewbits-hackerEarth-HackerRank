class Animal{
    void walk(){
        System.out.println("I am walking");
    }
}

class Bird extends Animal {
    void fly(){
        System.out.println("I am flying");
    }
}

public class Java_15_inheritance {
    public static void main(String argd[]){
        Bird b = new Bird();
        b.fly();
        b.walk();
        //print super class name
        System.out.println(b.getClass().getSuperclass().getName());

        Animal a = new Animal();
        a.walk();

        Animal a2 = new Bird(); //only walk will allow (generalization)
        a2.walk();
//        a2.fly();

        if(a instanceof Bird){
            System.out.println("possible specialization");
            Bird b3 = (Bird) a;
        }else{
            System.out.println("not possible specialisation");
        }
//        Bird b2 = (Bird) new Animal(); //need to type caste (specialization)
//        b2.walk();
//        b2.fly();
    }
}
