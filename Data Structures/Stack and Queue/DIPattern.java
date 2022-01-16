import java.util.Scanner;
import java.util.Stack;

public class DIPattern {

	public static void main(String[] args) {
		Scanner kb = new Scanner(System.in);

		String input = kb.nextLine();

		Stack<Integer> st = new Stack<>();
		int num = 1;

		for(int i =0;i<input.length();i++)
		{
			char a = input.charAt(i);

			if(a == 'd')
			{
				st.push(num);
				num++;
			}else if(a == 'i')
			{
				st.push(num);
				num++;
				while(st.size()>0)
				{
					System.out.print(st.pop());
				}
			}
			

		}
		st.push(num);
		while(st.size()>0)
		{
			System.out.print(st.pop()); 

		}



	}
	
}
