#include<iostream>
#include<vector>
using namespace std;
template<class T>
class stack{
    vector<T> v;
public:
    void push(T val){
        v.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout << "stack is empty\n";
            return;
        }
        v.pop_back();
    }
    T top(){
        int index= v.size()-1;
        return v[index];
    }
    bool isEmpty(){
        return v.size()==0;
    }
};
int main(){
    stack<char> s;
    s.push('1');
    s.push('2');
    s.push('3');
    while(!s.isEmpty()){
        cout << s.top() << " ";
        s.pop();
    }
}