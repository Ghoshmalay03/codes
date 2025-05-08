import java.util.*;
public class multiplicationTable {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter Number: ");
        int n=sc.nextInt();
        System.out.println("The table of " +n+ " is -");
        for(int i=0; i<=10; i++){
            System.out.println(n+ " X " +i+ " = " +n*i);
        }
        sc.close();
    }
}
