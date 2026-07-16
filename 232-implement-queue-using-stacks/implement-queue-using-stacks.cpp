class MyQueue {

private:
       stack<int> instack, outstack;
       void transfer(){
        if(outstack.empty()){
            while(!instack.empty()){
                outstack.push(instack.top());
                instack.pop();
            }
        }
       }
public:
    MyQueue() {
       
    }
    
    void push(int x) {
        instack.push(x);
    }
    
    int pop() {
        transfer();
        int top=outstack.top();
        outstack.pop();
        return top;
    }
    
    int peek() {
        transfer();
        return outstack.top();
    }
    
    bool empty() {
        return outstack.empty()&&instack.empty();
            
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