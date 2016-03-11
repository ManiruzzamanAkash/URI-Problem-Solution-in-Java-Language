package URI_Problems_solution;

import java.io.IOException;
import java.util.Scanner;

public class URI_1070 {

	public static void main(String[] args) throws IOException{
		
		Scanner input =new Scanner(System.in);
		       int i, n, even = 0;
		 
		      for(i =1; i <= 5; i++){
		            n =input.nextInt();
		            if(n % 2 == 0){
		                  even += 1;
		            }
		       }
		        System.out.printf("%d valores pares\n", even);
		}

	}


