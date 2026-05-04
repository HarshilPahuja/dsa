class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    int use=1;
    MyStack() {
        
    }
    
    void push(int x) {
        if(use==1){
        q1.push(x);
        }
        else{
            q2.push(x);
        }
    }
    
    int pop() {
        if(use==1){
            use=2;
        int size=q1.size();
        for(int i=1; i<=size; i++){
            if(i!=size){
                q2.push(q1.front());
                q1.pop();
            }
            else{
                break;
            }
        }
        int elem=q1.front();
        q1.pop();
        return elem;
        }
        else{
             use=1;
        int size=q2.size();
        for(int i=1; i<=size; i++){
            if(i!=size){
                q1.push(q2.front());
                q2.pop();
            }
            else{
                break;
            }
        }
        int elem=q2.front();
        q2.pop();
        return elem;

        }
        
    }
    
    int top() {
        if(use==1){
            use=2;
        int size=q1.size();
        for(int i=1; i<=size; i++){
            if(i!=size){
                q2.push(q1.front());
                q1.pop();
            }
            else{
                break;
            }
        }
        int elem=q1.front();
        q2.push(q1.front());
        q1.pop();
        return elem;
        }
        else{
             use=1;
        int size=q2.size();
        for(int i=1; i<=size; i++){
            if(i!=size){
                q1.push(q2.front());
                q2.pop();
            }
            else{
                break;
            }
        }
        int elem=q2.front();
        q1.push(q2.front());
        q2.pop();
        return elem;

        }
        
    }
    
    bool empty() {
           if(use==1){
       if(q1.size()==0){
        return true;
       }
        }
        else{
            if(q2.size()==0){
                return true;
            }
        }
        return false;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */