public class try_catch {
    public static void main(String[] args) {
        int a=2;
        int b=0;
        try {
            int c=a/b;
            System.out.println("The result is: " +c);
        } catch (Exception e) {
            System.out.println("Failed to run: Reason");
            System.out.println(e);
        } finally{
            System.out.println("End of the program");
        }
    }
}
