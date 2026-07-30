class myStack {
	queue<int> q;
	int cnt = 0;
	public:
	
	void push(int x) {
		// Inserts an element x at the top of the stack4
		q.push(x);
		cnt++;
		int n = q.size();
		for (int i = 0; i<n - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		
	}
	
	void pop() {
		// Removes an element from the top of the stack
		if (q.empty())return;
		q.pop();
		cnt--;
	}
	
	int top() {
		// Returns the top element of the stack
		// If stack is empty, return -1
		if (q.empty())return - 1;
		return q.front();
		
	}
	
	int size() {
		// Returns the current size of the stack
		return cnt;
	}
};
