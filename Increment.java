//Increament Numbers
class Number{
    public void increment(){
        int num=1;
        for(int i=0;i<=3;i++){
            System.out.println("Number :"+ num);
            num++;
            
        }
        
    }
}
public class Increment{
    public static void main(String[] args){
        Number number=new Number();
        number.increment();

            
        
    }
}