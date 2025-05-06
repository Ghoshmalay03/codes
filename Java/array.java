import java.util.*;
public class array {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int size=sc.nextInt();
        int[] array=new int[size];

        //input
        System.out.println("Enter the elements: ");
        for(int i=0; i<size; i++){
            array[i]=sc.nextInt();
        }

        int max=array[0];

        //largest element output
        for(int i=0; i<array.length; i++){
            if(array[i]>max){
                max=array[i];
            }
        }
        System.out.println("User entered array is " + Arrays.toString(array));
        System.out.println("Largest number is " +max);

        System.out.println("Which element do you want to find?");
        int find=sc.nextInt();

        //find element from array
        for(int i=0; i<array.length; i++){
            if(array[i]==find){
                System.out.println("The element is at index " +i);
            }
        }
    }
}
