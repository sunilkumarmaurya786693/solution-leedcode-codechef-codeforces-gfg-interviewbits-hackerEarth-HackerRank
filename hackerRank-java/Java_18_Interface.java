interface AdvancedArithmetic {
    int divisor_sum(int n);
}

class MyCalculator1 implements AdvancedArithmetic{
    @Override
    public int divisor_sum(int n){
        int sum=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                sum=sum+i;
            }
        }
        return sum;
    }
}

public class Java_18_Interface {
    public static  void main(String args[]){
        MyCalculator1 myCalculator = new MyCalculator1();
        int result = myCalculator.divisor_sum(6);
        System.out.println("Divisor sum is: "+result);
    }
}
