package URI_Problems_solution;
/**
			I=1 J=60
			I=4 J=55
			I=7 J=50
			...
			I=? J=0
*/
public class URI_1095 {

	public static void main(String[] args) {

		for(int I = 1,J = 60;J >= 0; I+=3,J-=5){
			System.out.print("I="+I+" J="+J+"\n");
		}

	}

}
