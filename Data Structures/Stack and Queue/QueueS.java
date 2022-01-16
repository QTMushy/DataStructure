public class QueueS {

	int[] data;
    int front;
    int size;

    public QueueS(int cap) {
      data = new int[cap];
      front = 0;
      size = 0;
    }

    int size() {
		return size;
      // write ur code here
    }

    void display() {
      for(int i = 0;i<size;i++)
	  {
		  int idx = (front+i)%data.length;
		  System.out.print(data[idx]);
	  }
    }

    void add(int val) {
      // write ur code here
	  if(size == data.length)
	  {
		  System.out.println("Queue overflow");
	  }
	  else
	  {
		  int rear = (front+size)%data.length;
		  data[rear] = val;
		  size++;
	  }
    }

    int remove() {
      if(size == 0)
	  {
		  System.out.println("queue underflow");
		  return -1;
	  }
	  else
	  {
		int val = data[front];
		front = (front+1)%data.length;
		size--;
		return val;
	  }
    }

    int peek() {
       return data[front];
    }
	
}
