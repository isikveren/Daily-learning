package headFirstJava.Dog;

public class Dog {
    String name;

    public static void main(String[] args) {
        Dog dog1 = new Dog();
        dog1.bark();
        dog1.name = "Bart";

        Dog[] mydog = new Dog[3];
        mydog[0] = new Dog();
        mydog[1] = new Dog();
        mydog[2] = dog1;

        mydog[0].name = "Fred";
        mydog[1].name = "Marge";

        System.out.print("Last dog's name is ");
        System.out.println(mydog[2].name);

        int x = 0;
        while(x < mydog.length){
            mydog[x].bark();
            x++;

        }
    }

    public void bark(){
        System.out.println(name+" says Ruff!");
    }
}
