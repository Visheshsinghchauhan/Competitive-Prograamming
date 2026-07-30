class myQueue {
	private:
	stack<int>st;
	stack<int>temp;
	void shift() {
		if (temp.empty()) {
			while (!st.empty()) {
				temp.push(st.top());
				st.pop();
			}
		}
	}
	int cnt;
	public:
	myQueue() {
		// Initialize your data members
		cnt = 0;
	}
	
	void enqueue(int x) {
		// Implement enqueue operation
		st.push(x);
		cnt++;
	}
	
	void dequeue() {
		// Implement dequeue operation
		shift();
		if (!temp.empty()){
		    temp.pop();
		}
		cnt--;
	}
	
	int front() {
		// Implement front operation
		shift();
		if(temp.empty())return -1;
		return temp.top();
		
	}
	
	int size() {
		// Implement size operation
		return cnt;
	}
};
