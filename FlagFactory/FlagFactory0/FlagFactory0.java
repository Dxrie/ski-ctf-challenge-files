import java.util.*;

public class FlagFactory0 {
    public static void main(String[] args) {
        FlagFactory0 factory = new FlagFactory0();
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the secret passphrase: ");
        String userInput = scanner.next();
        
        if (factory.checkPassword(userInput)) {
            System.out.println("Access granted! Here is your flag: " + userInput);
        } else {
            System.out.println("Access denied!");
        }
    }

    public boolean checkPassword(String password) {
        return password.equals("SKICTF{FlagFactory0_1s_st1ll_pr3tty_3asy}");
    }
}
