// // You are using Java
// //WAP to store the characteristics of a pen
// class Pen{
//     //characteristics of a pen
//     String color;
//     String type;

//     //function of a pen
//     public void write(){
//         System.out.println("To write.");
//     }
//     public void printInfo(){
//         System.out.println(this.color);
//         System.out.println(this.type);
//     }
// }

// //main class
// public class Main{
//     public static void main(String[] args) {
//         //object pen1 created
//         Pen pen1=new Pen();
//         //calling the methods using pen1
//         pen1.color="blue";
//         pen1.type="gel";
//         //calling the function
//         pen1.write();
//         pen1.printInfo();
        
//         Pen pen2=new Pen();
//         pen2.color="black";
//         pen2.type="ballpoint";
//         pen2.write();
//         pen2.printInfo();
//     }
// }

// //CONSTRUCTORS
// class Student{
//     String name;
//     int age;
    
//     public void studentInfo(){
//         System.out.println(this.name);
//         System.out.println(this.age);
//     }
    
//     Student(String name, int age){      //parametized constructor
//         this.name=name;
//         this.age=age;
//     }
// }

// public class Main{
//     public static void main(String[] args){
//         Student stu1=new Student("malay", 21);
//         stu1.studentInfo();
//     }
// }

//POLYMORPHISH
class Student{
    String name;
    int age;
    
    public void printInfo(String name){
        System.out.println(name);
    }
    public void printInfo(int age){
        System.out.println(age);
    }
    public void println(String name, int age){
        System.out.println(name+ " " +age);
    }
}

public class Main{
    public static void main(String[] args){
        Student s1=new Student();
        s1.name="malay";
        s1.age=21;
        
        s1.printInfo(s1.name, s1.age);
    }
}