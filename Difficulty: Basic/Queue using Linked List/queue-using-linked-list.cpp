class Node {
	public:
	int data;
	Node* next;
	
	Node(int val) {
		data = val;
		next = nullptr;
	}
};

class myQueue {
	private:
	Node* front;
	Node* rear;
	int cnt;
	
	public:
	myQueue() {
		// Initialize your data members
		front = NULL;
		rear = NULL;
		cnt=0;
	}
	
	bool isEmpty() {
		// check if the queue is empty
		if (front == NULL && rear == NULL)return true;
		return false;
	}
	
	void enqueue(int x) {
		// Adds an element x at the rear of the queue
		if (front == NULL) {
			front = new Node(x);
			rear = front;
			cnt++;
			return;
		}
		Node* temp = new Node(x);
		rear->next = temp;
		rear = rear->next;
		cnt++;
	}
	
	void dequeue() {
		// Removes the front element of the queue
		if(front==NULL)return;
		Node*todelete=front;
		if(front==rear){
		    front=NULL;
		    rear=NULL;
		    delete todelete;
		    cnt--;
		    return;
		}
		front=front->next;
		cnt--;
		delete todelete;
	}
	
	int getFront() {
		// Returns the front element of the queue
		// If queue is empty, return -1
		if(front==NULL)return -1;
		return front->data;
		
	}
	
	int size() {
		// Returns the current size of the queue.
		return cnt;
	}
};
