import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner objScanner=new Scanner(System.in);
        //input
        String name=objScanner.nextLine();
        objScanner.close();
        //output
        System.out.println("Name: " +name);
    }
}