import java.util.*;
public class Main{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
       int length= str.length();
       String result="";  
       for(int i=0;i<length;i++){
         if(i==0 || str.charAt(i-1)== ' '){
              result+=Character.toUpperCase(str.charAt(i));
             }
             else{
                result+=str.charAt(i);
             }
          }
          System.out.println(result);
        }
    } 
