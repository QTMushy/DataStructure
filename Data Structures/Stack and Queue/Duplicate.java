import java.util.Scanner;
import java.util.Stack;

public class Duplicate {

	public static void main(String[] args) {
		Scanner kb = new Scanner(System.in);
		String exp = kb.nextLine();

		Stack<Character> st = new Stack<>();

		for(int i=0;i<exp.length();i++)
		{
			char a = exp.charAt(i);

			if(a == ')')
			{
				if(st.peek()=='(')
				{
					System.out.println("Duplicate");
					return;
				}
				else{

					while(st.size()>0&&st.peek()!='(')
					{
						st.pop();
					}
					if(st.size()>0)
					{
						st.pop();
					}
				}
			}
			else{
				st.push(a);
			}
		}

		System.out.println("perfect");
	}
	
}
