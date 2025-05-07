import java.util.*;
public class try_catch_array {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size=sc.nextInt();
        int[] array=new int[size];
        
        if(size<=10){
            for (int i = 0; i < size; i++) {
            array[i]=sc.nextInt();  
        }
    }
        try {
            System.out.print(array[size - 1]);
        } catch (Exception e) {
            System.out.println("Failed to run: Reason");
            System.out.println(e);
        } finally{
            System.out.println("End of the program");
        }
        
    }
}
