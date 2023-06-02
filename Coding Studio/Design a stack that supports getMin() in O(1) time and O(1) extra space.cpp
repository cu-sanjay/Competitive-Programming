#include <bits/stdc++.h>
class SpecialStack {
    private:
    stack<int> s;
    int mini;
    public:
        
    void push(int data) {
        if(s.empty()){
           mini = data; 
           s.push(data);
        }
        else{
            if(mini > data){
                mini = 2*data - mini;
                s.push(mini);
                mini = data;
            }
            else{
                s.push(data);
            }
        }
    }

    int pop() {
        if(s.empty()) return -1;
        int data = s.top();
        s.pop();
        int preMini = mini;
        if(data < mini){
            mini = 2*mini - data;
            return preMini;
        }
        return data;
    }

    int top() {
        if(s.empty()) return -1;
        int data = s.top();
        if(data < mini){
            return mini;
        }
        return data;
    }

    bool isEmpty() {
        return s.empty();
    }
 
    int getMin() {
        if(s.empty()) return -1;
        return mini;
    }  
};