#include<iostream>
using namespace std;
template<class T>
class node{
public:
    T data;
    node* next;
    node(T val){
        data =val;
        next = NULL;
    }
};
template<class T>
class Stack{
    node<T>* head;
public:
    Stack(){
        head = NULL;
    }
    void push(T val){
        node<T>* newnode = new node<T>(val);
        if(isEmpty()){
            head = newnode;
        }else{
            newnode->next = head;
            head = newnode;
        }
    }
    void pop(){
        node<T>* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    T top(){
        return head->data;
    }
    bool isEmpty(){
        return head == NULL;
    }
};
int main(){
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.isEmpty()){
        cout << s.top() << " ";
        s.pop();
    }
}