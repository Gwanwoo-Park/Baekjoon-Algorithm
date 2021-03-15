import java.awt.Point;
import java.util.Arrays;
import java.util.Scanner;

class Main 
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		int t = scan.nextInt();
		scan.nextLine();
		String[] mos = new String[5];
		int count = 0;
		String A = ".-";
		String B = "-...";
		String C = "-.-.";
		String D = "-..";
		String E = ".";
		String F = "..-.";
		String G = "--.";
		String H = "....";
		String I = "..";
		String J = ".---";
		String K = "-.-";
		String L = ".-..";
		String M = "--";
		String N = "-.";
		String O = "---";
		String P = ".--.";
		String Q = "--.-";
		String R = ".-.";
		String S = "...";
		String T = "-";
		String U = "..-";
		String V = "...-";
		String W = ".--";
		String X = "-..-";
		String Y = "-.--";
		String Z = "--..";
		
		for(int i=0; i<t; i++)
		{
			count++;
			System.out.print("Case " + count + ": ");
			String str = scan.nextLine();
			
			mos = str.split(" ");
			
			for(int j=0; j<5; j++)
			{
				if(mos[j].contentEquals(A)) System.out.print("A");
				else if(mos[j].contentEquals(B)) System.out.print("B");
				else if(mos[j].contentEquals(C)) System.out.print("C");
				else if(mos[j].contentEquals(D)) System.out.print("D");
				else if(mos[j].contentEquals(E)) System.out.print("E");
				else if(mos[j].contentEquals(F)) System.out.print("F");
				else if(mos[j].contentEquals(G)) System.out.print("G");
				else if(mos[j].contentEquals(H)) System.out.print("H");
				else if(mos[j].contentEquals(I)) System.out.print("I");
				else if(mos[j].contentEquals(J)) System.out.print("J");
				else if(mos[j].contentEquals(K)) System.out.print("K");
				else if(mos[j].contentEquals(L)) System.out.print("L");
				else if(mos[j].contentEquals(M)) System.out.print("M");
				else if(mos[j].contentEquals(N)) System.out.print("N");
				else if(mos[j].contentEquals(O)) System.out.print("O");
				else if(mos[j].contentEquals(P)) System.out.print("P");
				else if(mos[j].contentEquals(Q)) System.out.print("Q");
				else if(mos[j].contentEquals(R)) System.out.print("R");
				else if(mos[j].contentEquals(S)) System.out.print("S");
				else if(mos[j].contentEquals(T)) System.out.print("T");
				else if(mos[j].contentEquals(U)) System.out.print("U");
				else if(mos[j].contentEquals(V)) System.out.print("V");
				else if(mos[j].contentEquals(W)) System.out.print("W");
				else if(mos[j].contentEquals(X)) System.out.print("X");
				else if(mos[j].contentEquals(Y)) System.out.print("Y");
				else if(mos[j].contentEquals(Z)) System.out.print("Z");
			}
			System.out.println();
		}
	}
}
