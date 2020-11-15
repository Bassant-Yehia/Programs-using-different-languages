/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package brothers.or.not;

import java.util.Scanner;

/**
 *
 * @author LENOVO
 */
public class BrothersOrNot {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String x,y,m,n;
        Scanner sc=new Scanner (System.in);
        x=sc.next();
        y=sc.next();
        m=sc.next();
        n=sc.next();
        if(y.equals(n))
        System.out.print("They are brothers\n");
        else
         System.out.print("They arenot brothers\n");
        
        
    }
    
}
