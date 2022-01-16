import java.util.Scanner;
import java.util.Stack;

public class Infixx {

	public static void main(String[] args) {

		Scanner kb = new Scanner(System.in);
		String exp = kb.nextLine();

		Stack<Integer>oprnd = new Stack<>();
		Stack<Character>optr = new Stack<>();

		for(int i =0 ; i<exp.length();i++)
		{
			char a= exp.charAt(i);
			if(Character.isDigit(a))
			{
				oprnd.push(a - '0');
			}else if(a == '(')
			{

			}else if(a == '+' || a=='-'||a=='*'||a=='/')
			{
				while(optr.size()>0&&optr.peek()!='('&&pre(a)<=pre(optr.peek()))
				{
					int v2 = oprnd.pop();
					int v1 = oprnd.pop();
					char o = optr.pop();

					oprnd.push(eval(v1, v2, o));
				}

				optr.push(a);
			}else if(a == ')')
			{
				while(optr.size()>0&&optr.peek()!='(')
				{
					int v2 = oprnd.pop();
					int v1 = oprnd.pop();
					char o = optr.pop();

					oprnd.push(eval(v1, v2, o));

				}
				optr.pop();
			}

		}
		
	}

	public static int pre(char a)
	{
		if(a == '+'){
			return 1;

		}else if(a == '-'){
			return 1;

		}else if(a == '*'){
			return 2;

		}else if(a == '/'){
			return 2;

		}
		return 0;
	}
	

	public static int eval(int v1,int v2,char a)
	{
		if(a == '+'){
			return v1+v2;

		}else if(a == '-'){
			return v1-v2;

		}else if(a == '*'){
			return v1-v2;

		}else if(a == '/'){
			return v1-v2;

		}

		return Integer.MAX_VALUE;

	}
}
