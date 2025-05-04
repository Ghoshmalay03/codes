import java.util.Scanner;

class A{
    public static void main(String[] args) {
        Scanner SC=new Scanner(System.in);
        String str1=SC.nextLine();
        String str2=SC.nextLine();
        SC.close();
        String str3=str1+str2;
        System.out.println(str1+" "+str2);
        int length=str3.length();
        System.out.println(length);
    }
}