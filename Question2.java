//Testing Program(Interview Question)
public class Question2 {
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
        System.out.println("Number value is "+num);

        while(isValid){
            num++;// some correction needed for the scope
            num=(num==100)? 100:num;
            num--;
            System.out.println("Num value is "+num);
            //if(num==100){the statement is wrong
                break;
            }
        
        
         System.out.println("Number " +num);   
        }    
}
