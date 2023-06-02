class Stack {
  // Write your code here
   Node *top;
   int size;
public:
  Stack() {
    // Write your code here
    top = NULL;
    size = 0;
  }

  int getSize() {
    // Write your code here
    return size;
  }

  bool isEmpty() {
    // Write your code here
    return size == 0;
  }

  void push(int x) {
    // Write your code here

    Node *newnode = new Node(x);
    newnode->next = top;
    top = newnode;
    size++;
  }

  void pop() {
    // Write your code here
    // if (top == nullptr)
    if(size == 0)  return ;
     

    Node *temp = top;
    // int ans = top->data;
    top = top->next;
    delete temp;
    size--;
    // return ans;
  }

  int getTop() {
    // Write your code here
    if(top == nullptr) return -1;
    return top->data;
  }
};