class MyQueue {
private:
    stack<int> s1, s2; // s2: input s1: output
    int front = -1;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        if(s2.size()==0)
            front = x;
        s2.push(x);
    }
    
    int pop() {
        if(s1.empty()){
            while(!s2.empty()){
                int i = s2.top();
                s1.push(i);
                s2.pop();
            }
        }
        int pop_elem = s1.top();
        s1.pop();
        return pop_elem;
    }
    
    int peek() {
        return (s1.empty()) ? front : s1.top();
    }
    
    bool empty() {
        return s1.size() == 0 && s2.size() == 0;
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
