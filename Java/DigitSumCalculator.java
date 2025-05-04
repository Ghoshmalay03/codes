import java.util.Scanner;

public class DigitSumCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the user input
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        scanner.close();

        // Calculate the sum of digits
        int sum = 0;
        int temp = Math.abs(number); // Handle negative numbers

        while (temp > 0) {
            sum += temp % 10; // Extract the last digit and add to sum
            temp /= 10; // Remove the last digit
        }

        // Output the result
        System.out.println("Sum of digits: " + sum);
    }
}
