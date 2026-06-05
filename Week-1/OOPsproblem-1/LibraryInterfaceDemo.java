import java.util.Scanner;

public class LibraryInterfaceDemo {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        KidUser kid = new KidUser();
        AdultUser adult = new AdultUser();

        //test case 1
        System.out.println("Enter your age: ");
        kid.age=sc.nextInt();

        System.out.println("Enter book type: ");
        kid.bookType=sc.next();

        kid.registerAccount();
        kid.requestBook();

        //test case 2
        System.out.println("Enter your age: ");
        adult.age=sc.nextInt();

        System.out.println("Enter book type: ");
        adult.bookType=sc.next();

        adult.registerAccount();
        adult.requestBook();
    }
}