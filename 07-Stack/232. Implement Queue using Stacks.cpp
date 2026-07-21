class MyQueue {
public:
    stack<int> stin;
    stack<int> stout;
    MyQueue() {}
    bool empty() { return stin.empty() && stout.empty(); }

    void push(int x) { stin.push(x); }

    int pop() {
        if (empty()) {
            return 0;
        } else if (!stout.empty()) {
            int el = stout.top();
            stout.pop();
            return el;
        } else {
            while (!stin.empty()) {
                stout.push(stin.top());
                stin.pop();
            }
            int el = stout.top();
            stout.pop();
            return el;
        }
    }

    int peek() {
        if (empty()) {
            return 0;
        } else if (!stout.empty()) {
            return stout.top();
        } else {
            while (!stin.empty()) {
                stout.push(stin.top());
                stin.pop();
            }

            return stout.top();
        }
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