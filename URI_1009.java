import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {
		
	  double salary = 0,value, TOTAL;
	  String name;
	  Scanner sc = new Scanner(System.in);
	  name = sc.next();
	  salary = sc.nextDouble();
	  value = sc.nextDouble();
	  

	  TOTAL = salary + value * 0.15;
	  System.out.printf("TOTAL = R$ %.2f\n",TOTAL);
		  
	}
}
