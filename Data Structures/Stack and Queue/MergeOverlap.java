public class MergeOverlap {

	public static void main(String[] args) {

		
		
	}

	public static class Pair implements Comparable<Pair>{

		int st;
		int et;

		public Pair(int st,int et)
		{
			this.et = et;
			this.st = st;
		}

		@Override
		public int compareTo(Pair o) {

			if(this.st != o.st)
			{
				return this.st - o.st;
			}
			else
			{
				return this.et - o.et;
			}
			
		}
	}
	
}
