#include<bits/stdc++.h>

class LRUCache
{
public:
class node{
 public:
 int key;
 int data;
 node* prev;
 node* next;
 node(int keyy,int dataa){
     key=keyy;
     data=dataa;
 }
};
node* head=new node(-1,-1);
node* tail=new node(-1,-1);
int cap;
unordered_map<int,node*> m;
    LRUCache(int capacity)
    {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
        // Write your code here
    }
void deletee(node* temp){
    node* p=temp->prev;
    node* n=temp->next;
    p->next=n;
    n->prev=p;
}
void add(node* temp){
  node* p=head->next;
  head->next=temp;
  temp->next=p;
  p->prev=temp;
  temp->prev=head;
}
    int get(int key)
    {  if(m.find(key)!=m.end()){
        node* temp=m[key];
        int vl=temp->data;
      m.erase(key);
        deletee(temp);
        add(temp);
        m[key]=head->next;
        return vl;
    }
  return -1;
    }
    void put(int key, int value)
    {    if(m.find(key)!=m.end()){
        node *temp=m[key];
        m.erase(key);
        deletee(temp);
    }
     if(m.size()==cap){
        m.erase(tail->prev->key);
        deletee(tail->prev);
    }
    add(new node(key,value));
    m[key]=head->next;
    }
};