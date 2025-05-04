//WAP to store the characteristics of a pen
class Pen{
    //characteristics of a pen
    String color;
    String type;

    //function of a pen
    public void write(){
        System.out.println("To write.");
    }
}

//main class
public class Main{
    public static void main(String[] args) {
        //object pen1 created
        Pen pen1=new Pen();
        //calling the methods using pen1
        pen1.color="blue";
        pen1.type="gel";
        //calling the function
        pen1.write();
    }
}