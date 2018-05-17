package queue;

public class Queue{
  public static void main (String [] args) {
    Queue q = new Queue(3);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    q.print();

    for (int i=0;i<=q.Q.length;i++){
	    q.dequeue();
    }

    q.print();

  }
  
    int front, rear;
    int [] Q;
    
    public Queue(int size) {
      Q = new int[size+1];
      front = 0;
      rear = 0;
    }
    
    public void enqueue(int val) {
      rear = (rear + 1) % Q.length;
      if (rear == front) { //if full
        System.out.println("Queue is full."); 
        if (rear == 0) rear = Q.length - 1; else rear = rear - 1; 
        return; 
      }
      Q[rear] = val;
    }
    public int dequeue() {
      if (rear == front) {//if empty
        System.out.println("Queue is empty.");
        return -1;
      }
      int tmp = Q[front];
      front = (front+1) % Q.length;
      return tmp;
    }
    public void print() {
      int curr = front;
      System.out.print("Queue state: ");
      if (curr == rear) { System.out.print("[empty]"); }
      else while (curr != rear) {
        curr = (curr + 1) % Q.length;
        System.out.print(Q[curr] + " ");
      }
      System.out.println();
	}
}
