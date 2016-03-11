package URI_Problems_solution;
/**
						I=1 J=7
						I=1 J=6
						I=1 J=5
						I=3 J=9
						I=3 J=8
						I=3 J=7
						...
						I=9 J=15
						I=9 J=14
						I=9 J=13
 */
public class URI_1097 {

	public static void main(String[] args) {
		for (int i = 1,j =7; i <= 9; i += 2,j += 2) {
			for (int l = i, k = j; k >= (j-2); k--) {
				System.out.print("I="+l+" J="+k+"\n");
			}
		}

	}

}
