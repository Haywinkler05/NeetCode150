class MinStack {
private:
    vector<int> data; //Our vector to store data
    vector<int> trace; //Vector to keep track of min value
public:
    MinStack() { //Unecessary for our code
    }
    
    void push(int value) {
      if(!trace.empty()){
        if(value < trace.back()) trace.push_back(value); //If the value we have is smaller than last we push it to trace
        else trace.push_back(trace.back()); //Otherwise we repeat it
        data.push_back(value); //Update our stack
      }else{
         data.push_back(value);
         trace.push_back(value);
      }
     
      return;
    }
    
    void pop() {
        data.pop_back(); //Update stacks
        if(!trace.empty()) trace.pop_back();
        return;
    }
    
    int top() {
        return data.back(); //Return the last element of vector
    }
    
    int getMin() {
      return trace.back(); //Return last element of our trace vector
     
    } //Time complexity O(N)
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
