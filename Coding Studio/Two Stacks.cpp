#include <bits/stdc++.h> 
class TwoStack {
private:
    int top_1;
    int top_2;
    int *arr;
    int max_size;
public:
    TwoStack(int s) {
        arr = new int[s];
        top_1 = 0;
        top_2 = s - 1;
        max_size = s;
    }
    void push1(int num) {
        if(top_1 <= top_2){
            arr[top_1] = num;
            top_1++;
        }
    }
    void push2(int num) {
        if(top_1 <= top_2){
            arr[top_2] = num;
            top_2--;
        }
    }
    int pop1() {
        int ans = -1;
        if(top_1 > 0){
            ans = arr[top_1-1];
            arr[top_1-1] = 0;
            top_1--;
        }
        return ans;
    }
    int pop2() {
        int ans = -1;
        if(top_2 < max_size - 1){
            ans = arr[top_2+1];
            arr[top_2+1] = 0;
            top_2++;
        }
        return ans;
    }
};