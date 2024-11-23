// Testing Program (Interview Questions)
public class Test{
    public static void main(String[] args){
        int num=1;
        while(true){
            num++;//2
                if(num!=100){
                num=(num!=100)? num:100;	//output:	Num:2   //	Num:2	
                break;

                }
        }
        System.out.println("Num:"+num);
        
        try{
            int[] arr={10,20,30};
            int element=arr[num--];
        

        }
        catch( ArrayIndexOutOfBoundsException e){
            int element=0;
            num=num+100;
          }
        int element=0;
        System.out.println("Num:"+ ++num);

    }

}
