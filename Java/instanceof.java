class A{
    
}
class B extends A{
    
}
class C extends B{
    
}
class Main{
    public static void main(String[] args){
        A obj=new A();
        B obj1=new B();
        System.out.println(obj instanceof A);
        System.out.println(obj instanceof B);
        System.out.println(obj1 instanceof B);
        System.out.println(obj1 instanceof A);
    }
}