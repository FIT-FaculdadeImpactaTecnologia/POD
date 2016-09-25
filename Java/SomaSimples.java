import java.io.IOException;
import java.util.Scanner;
// import java.io.Console;
public class SomaSimples {
    public static void main(String[] args) throws IOException {
        // Console c = System.console();
        Scanner s = new Scanner(System.in);
        int a,b,soma;
        // a =  Integer.parseInt(c.readLine(""));
        // b =  Integer.parseInt(c.readLine(""));
        a = s.nextInt();
        b = s.nextInt();
        soma = a + b;
        System.out.println("SOMA = " + soma);
    }
}