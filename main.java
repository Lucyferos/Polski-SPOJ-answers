import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner test = new Scanner(System.in);
        double a = test.nextDouble();
        double b = test.nextDouble();
        double c = test.nextDouble();

        // c=ax+b

        double wynik = c-b;

        //c-a = ax
        if(a==0.00 && wynik==0.00){
            System.out.println("NWR");
        }
        else if(a==0.00&& wynik != 0.00){
            System.out.println("BR");
        }
        else {
            double x = wynik / a;
           System.out.format("%.2f%n", x);
        }

    }


}
