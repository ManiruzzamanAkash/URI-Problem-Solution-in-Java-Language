package URI_Problems_solution;
/**
								I=1 J=7
								I=1 J=6
								I=1 J=5
								I=3 J=7
								I=3 J=6
								I=3 J=5
								...
								I=9 J=7
								I=9 J=6
								I=9 J=5
 */
public class URI_1096 {

	public static void main(String[] args) {
		
		for (int i = 1; i <= 9; i += 2) {
			for (int I = i,J = 7; (J >= 5); J-=1) {
				System.out.print("I="+I+ " J="+J+"\n");
				
			}
		}
	}

}	
//		
//		for (int I = 3,J = 7; (J >= 5); J-=1) {
//			System.out.print("I="+I+ " J="+J+"\n");
//			
//		}
//		for (int I = 5,J = 7; (J >= 5); J-=1) {
//			System.out.print("I="+I+ " J="+J+"\n");
//			
//		}
//		for (int I = 7,J = 7; (J >= 5); J-=1) {
//			System.out.print("I="+I+ " J="+J+"\n");
//			
//		}
//		for (int I = 9,J = 7; (J >= 5); J-=1) {
//			System.out.print("I="+I+ " J="+J+"\n");
//			
//		}

