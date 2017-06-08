import java.util.Scanner;


public class Main {


 public static void main(String[] args) {
  double x1, x2, y1, y2, dist;

  Scanner sc = new Scanner(System.in);
  x1 = sc.nextDouble();
  y1 = sc.nextDouble();
  x2 = sc.nextDouble();
  y2 = sc.nextDouble();

  dist = Math.sqrt(Math.pow(x2-x1,2)+Math.pow(y2-y1,2));

  System.out.printf("%.4f\n", dist);

 }

}
