import java.util.Scanner;

public class Armstrong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        int original = num;
        int n = 0;
        int sum = 0;

        // Count number of digits
        int temp = num;
        while (temp != 0) {
            temp /= 10;
            n++;
        }

        temp = num;
        // Calculate sum of digits raised to power n
        while (temp != 0) {
            int digit = temp % 10;
            sum += Math.pow(digit, n);
            temp /= 10;
        }

        // Check if the sum is equal to the original number
        if (sum == original)
            System.out.println(original + " is an Armstrong number.");
        else
            System.out.println(original + " is not an Armstrong number.");

        sc.close();
    }
}
