import java.util.Scanner;
import java.util.Stack;

public class Celebrity {

	public static void main(String[] args) {
		Scanner kb = new Scanner(System.in);

		int n = kb.nextInt();
		int m = kb.nextInt();

		int[][] ppl = new int[n][m];

		for(int i =0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				ppl[i][j]  = kb.nextInt();

			}
		}

		Stack<Integer> st = new Stack<>();

		for(int i = 0;i<n;i++)
		{
			st.push(i);
		}

		while(st.size()>1)
		{
			int a = st.pop();
			int b = st.pop();
			if(ppl[a][b] == 1)
			{
				st.push(b);
			}
			else
			{
				st.push(a);
			}
		}

		int i = st.pop();
		int flag = 0;

		for(int j = 0;j<m;j++)
		{
			if(i == j )
			{
				continue;
			}else if(ppl[i][j] == 1)
			{
				flag++;
				break;
			}

		}

		if(flag>0)
		{
			System.out.println(i);
		}
		else
		{
			System.out.println("none");
		}
		
	}
	
}
