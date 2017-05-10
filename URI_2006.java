import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        short t = in.nextShort(), cnt = 0, x;
        for (short i = 0; i < 5; i++)
            if(in.nextInt() == t)
                cnt++;
        System.out.println(cnt);
    }
}