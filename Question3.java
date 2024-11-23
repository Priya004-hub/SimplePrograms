// Testing Program(Interview Questions)
public class Question3{
    public static void main(String[] args){
        int num=10;
        boolean isValid=false;
        while(true){
            if((num==10) && !(isValid)){
                 num=(num!=10)? 100:200;
                 System.out.println("Num value "+num);
                isValid=true;
                break;
            }
        }
	while(true){
            if(num==100){
                System.out.println("Num Value is " +num);
                break;

            }
        }
         System.out.println("Number " +num);   
        }    
    
}
