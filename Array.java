/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package array;

import java.util.Scanner;

/**
 *
 * @author LENOVO
 */
public class Array {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int x,sum = 0;
        int arr[] = {17, 6, 22, 2, 8, 7, 10};
        Scanner Bs = new Scanner(System.in);
        x = Bs.nextInt();

        for (int i = 0; i < arr.length; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                for (int k = j + 1; k < arr.length; k++) {
                    if (arr[i] + arr[j] + arr[k] == x) {
                        sum=arr[i]+arr[j]+arr[k];
                    } 
                         
                        
                    }
                }
            }
        int i;
        int j;
        int k;
        if(sum==x)
        System.out.print(arr[i] + "," + arr[j] + "," + arr[k] + "\n");
        else
            System.out.print("Out\n");
        }
    }

}
