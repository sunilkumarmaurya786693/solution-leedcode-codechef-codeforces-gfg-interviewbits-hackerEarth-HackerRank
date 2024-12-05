public class HelloWorld {
    public static void main(String args[]) {
      int x=10;
      int y=2;
            System.out.println("Before swapong of x and y = \n" + x+ " \n"+y);
      x=x+y;
      y=x-y;
      x=x-y;

      System.out.println("After swapong of x and y = \n" + x+ " \n"+y);
    }
}