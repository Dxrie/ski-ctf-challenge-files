import java.util.*;
import java.util.Base64;
import java.nio.charset.StandardCharsets;

public class FlagFactory1 {
    public static void main(String[] args) {
        FlagFactory1 factory = new FlagFactory1();
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
        return encode(password).equals("U0tJQ1RGe2Jhc2U2NF9lbmNvZGluZz8/X2htbV9zdGlsbF9ub3RfdGhhdF9kaWZmaWN1bHR9");
    }

    private static String encode(String input) {
        return Base64.getEncoder().encodeToString(input.getBytes(StandardCharsets.UTF_8));
    }
}
