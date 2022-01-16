import java.util.Scanner;
import java.util.Stack;

import javax.lang.model.util.ElementScanner6;

public class BalancedBracket{


	public static void main(String[] args) {
		Scanner kb = new Scanner(System.in);

		String input = kb.nextLine();

		Stack<Character> b = new Stack<>();

		for(int i=0;i<input.length();i++)
		{
			char ch = input.charAt(i);
      if (ch == '(' || ch == '[' || ch == '{')
      {
        b.push(ch);
      }
			else if(input.charAt(i)=='}')
			{
				if(!check(b, '{'))
				{
					System.out.println("Unbalanced");
					return;
				}

			}
			else if(input.charAt(i)==']')
			{
				if(!check(b, '['))
				{
					System.out.println("Unbalanced");
					return;
				}

			}
			else if(input.charAt(i)==')')
			{
				if(!check(b, '('))
				{
					System.out.println("Unbalanced");
					return;
				}

			}
			
			
		}

		System.out.println("Balanced");


		
	}

	public static boolean check(Stack<Character> b, char brac)
	{
		if(!b.isEmpty())
		{
			char temp = b.pop();
			if(temp == brac)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else{
			return false;
		}
	}
}