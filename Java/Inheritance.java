class Animal{
    void animal(){
        System.out.println("Eating...");
    }
}
class Dog extends Animal{
    void dog(){
        System.out.println("Barking...");
    }
}
class BabyDog extends Dog{
    void babydog(){
        System.err.println("Weeping...");
    }
}

class Main{
    public static void main(String[] args) {
        BabyDog obj1=new BabyDog();
        obj1.animal();
        obj1.dog();
        obj1.babydog();
    }
}