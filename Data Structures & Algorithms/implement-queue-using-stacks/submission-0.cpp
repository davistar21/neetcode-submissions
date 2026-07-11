class MyQueue {
   private:
    stack<int> outStack;
    stack<int> inStack;
    void moveIfNecessary() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }

   public:
    MyQueue() {}

    void push(int x) { inStack.push(x); }

    int pop() {
        moveIfNecessary();
        int val = outStack.top();
        outStack.pop();
        return val;
    }

    int peek() {
        moveIfNecessary();
        return outStack.top();
    }

    bool empty() {
        moveIfNecessary();
        return outStack.empty() && inStack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */