import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

        int initialValue, restValue = 0;

        Scanner scan = new Scanner(System.in);
        initialValue = scan.nextInt();

        System.out.printf("%d\n", initialValue);
        System.out.printf("%d nota(s) de R$ 100,00\n", initialValue / 100);
        restValue = initialValue % 100;

        System.out.printf("%d nota(s) de R$ 50,00\n", restValue / 50);
        restValue = restValue % 50;

        System.out.printf("%d nota(s) de R$ 20,00\n", restValue / 20);
        restValue = restValue % 20;

        System.out.printf("%d nota(s) de R$ 10,00\n", restValue / 10);
        restValue = restValue % 10;

        System.out.printf("%d nota(s) de R$ 5,00\n", restValue / 5);
        restValue = restValue % 5;

        System.out.printf("%d nota(s) de R$ 2,00\n", restValue / 2);
        restValue = restValue % 2;

        System.out.printf("%d nota(s) de R$ 1,00\n", restValue / 1);

    }

}
