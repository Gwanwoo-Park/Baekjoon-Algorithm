import java.awt.*;
import java.awt.event.*;
import java.util.Scanner;

import javax.swing.*;

public class Main {
   public static void main(String[] args) {  
	   Scanner sc = new Scanner(System.in);
	   
	   int n = sc.nextInt();
	   sc.nextLine();
	   int num = 0;
	   
	   for(int i = 0; i < n; i++) {
		   num++;
		   int count = 0;
		   int m = sc.nextInt();
		   sc.nextLine();
		   
		   String s = sc.nextLine();
		   String[] arr = s.split(" ");
		   
		   for(int j = 0; j < arr.length; j++) {
			   if (arr[j].equals("sheep")) count++;
		   }
		   
		   System.out.printf("Case %d: This list contains %d sheep.\n\n", num, count);
	   }
   }
}
