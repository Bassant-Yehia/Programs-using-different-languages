/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package signs;

import java.util.Scanner;

/**
 *
 * @author LENOVO
 */
public class Signs {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int n;
        int value;
        int dif;
        int difference;
         System.out.print("Enter number of elements\n");
        Scanner in=new Scanner(System.in);
        n=in.nextInt();
         System.out.print("Enter the elements\n");
        value=in.nextInt();
         System.out.print("Enter the differnce that you want to add\n");
        difference=in.nextInt();
        dif=value;
         System.out.print("the sequence is :  "+dif+" , ");
        for(int i=1;i<n;i++)
        {  
            dif=dif+difference;
             
            if(i%2==0)
             System.out.print(dif+"  ,  ");
            else
              System.out.print(" -"+dif+"  ,  ");
        }
        
        
         System.out.print("\n");
    }
    
}
