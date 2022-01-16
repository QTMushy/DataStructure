import java.util.Stack;

public class NextGreatestElement {

	public static void main(String[] args) {
		
	}

	public static int[] nge(int[] arr)
	{
		Stack<Integer> st = new Stack<>();

		int[] answer = new int[arr.length];

		st.push(arr.length-1);
		answer[arr.length-1] = -1;

		for(int i=arr.length-2;i>=0;i++)
		{
			while(st.size()>0 && arr[i] > arr[st.peek()])
			{
				st.pop();
			}
			if(st.size()==0)
			{
				answer[i] = -1;
			}
			else{
				answer[i] = arr[st.peek()];
			}

			st.push(i);
		}

		return answer;
	}

	
}
