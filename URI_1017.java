import java.util.Scanner;
/** 
Site Link 
http://onlinejudgesolution.blogspot.com/2017/06/uri-online-judge-solution-1017-fuel.html
***/


public class Main {


	public static void main(String[] args) {

		double a, b, r;

		Scanner sc = new Scanner(System.in);
		a = sc.nextDouble();
		b = sc.nextDouble();

		r = (a * b)/12;
		
		System.out.printf("%.3f\n", r);
		

	}

}
