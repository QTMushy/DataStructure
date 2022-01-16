public class Merge {


	public static int[] s(int[] arr,int lo,int high)
	{
		if(lo==high)
		{
			int[] bc = new int[1];
			bc[0] = arr[lo];
			return bc;
		}

		int mid = (lo+high)/2;
		int[] lsa = s(arr, lo, mid);
		int[] rsa = s(arr,mid+1,high);

		int[] answer = m(lsa, rsa);

		return answer;
	}

	


	public static int[] m(int[] arr1,int[] arr2)
	{
		int[] answer = new int[arr1.length+arr2.length];
		int i=0;
		int j=0;
		int k = 0;

		while(i<arr1.length&&j<arr2.length)
		{
			if(arr1[i]>arr2[j])
			{
				answer[k] = arr2[j];
				j++;
				k++;
			}
			else{
				answer[k] = arr1[i];
				i++;
				k++;
			}
		}

		while(i<arr1.length)
		{
			answer[k] = arr1[i];
			i++;
			k++;
		}
		while(j<arr2.length)
		{
			answer[k] = arr2[j];
			j++;
			k++;
		}

		return answer;

	}

	public static void main(String[] args) {
		int[] arr1 = {1,3,5,8,9,2,3,55,0};
		

		for(int i:s(arr1, 0, arr1.length-1))
		{
			System.out.println(i);
		}
	}
	
}
