#include <bits/stdc++.h> 
class Stack {
    private:
        queue<int> q1;
        queue<int> q2;
        int length;
    public:
    Stack() {
        length = 0;
    }
    int getSize() {
        return length;
    }

    bool isEmpty() {
        return length == 0;
    }

    void push(int element) {
        q2.push(element);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
        length++;
}

    int pop() {
        if(!q1.empty()){
            int value = q1.front();
            q1.pop();
            length--;
            return value;
        }
        return -1;
    }

    int top() {
        if(!q1.empty()){
            return q1.front();
        }
        return -1;
    }
};