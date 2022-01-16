public class Stack {

	int[] data;
	int tos;

	public Stack(int size)
	{
		data = new int[size];
		tos = -1;
	}

	public void push(int val)
	{
		if(tos+1>data.length-1)
		{
			System.out.println("Stack Overflow");
		}
		else
		{
			tos++;
			data[tos] = val;

		}
	}

	public void pop()
	{
		int a = data[tos];
		tos--;
		return a;
	}
	
}
