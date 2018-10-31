import java.io.IOException;
import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        final int autonomy = 12;
        double spentTime;
        double averageSpeed;
        double liters;

        Scanner scan = new Scanner(System.in);
        spentTime = scan.nextInt();
        averageSpeed = scan.nextInt();

        liters = (spentTime * averageSpeed) / autonomy;

        System.out.printf("%.3f\n", liters);
      
    }
 
}
