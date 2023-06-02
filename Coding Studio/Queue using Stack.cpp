#include <bits/stdc++.h>
using namespace std;
class Queue {
  stack<int> x;
public:
  Queue() {}

  void enQueue(int val) {
    x.push(val);
  }

  int deQueue() {
    if (x.empty()) {
      return -1;
    } else {
      int bottom = -1;
      FindBottom(x, bottom, 0);
      return bottom;
    }
  }
  void FindBottom(stack<int> &x, int &y, int see) {
    if (x.size() == 1) {
      y = x.top();
      if (see == 0) {
        x.pop();
      }
      return;
    }
    int val = x.top();
    x.pop();
    FindBottom(x, y, see);
    x.push(val);
  }

  int peek() {
    if (x.empty()) {
      return -1;
    } else {
      int bottom = -1;
      FindBottom(x, bottom, 1);
      return bottom;
    }
  }

  bool isEmpty() {
    return x.empty();
    }
};