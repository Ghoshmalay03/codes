import java.util.Scanner;

public class PrimeNumbersInRange {
    // Method to check if a number is prime
    public static boolean isPrime(int num) {
        if (num < 2) return false; // Prime numbers start from 2
        for (int i = 2; i * i <= num; i++) { // Loop till sqrt(num)
            if (num % i == 0) return false; // If divisible, not prime
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read input values
        int L = scanner.nextInt();
        int U = scanner.nextInt();
        scanner.close();
        
        // Print prime numbers in the range [L, U]
        for (int i = L; i <= U; i++) {
            if (isPrime(i)) {
                System.out.print(i + " ");
            }
        }
    }
}
