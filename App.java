//Application Programs
import java.util.Scanner;
public class App{
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        System.out.println("Hi Welcome to java....");
        System.out.print("What is your name?");
        String strData=scan.next();
        System.out.print("Enter your age:");
        int age=scan.nextInt();
        System.out.print("Enter your gender:");
        char gen=scan.next().charAt(0);
        System.out.print("Enter your email id:");
        String email=scan.next();
        System.out.print("create a new password:");
        String pass=scan.next();
        System.out.print("Conform Password:");
        String conf=scan.next();
        System.out.println("Application Register Successfully");
        /* Print the details */
        System.out.println("Your Name is " +strData);
        System.out.println("Your age is "+age);
        System.out.println("Your gender is "+gen);
        System.out.println("Your email id is "+email);
        System.out.println("Your password is "+pass);

        
        
        scan.close();
    }
}
