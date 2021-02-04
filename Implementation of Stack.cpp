#include<iostream>
#define n 10
using namespace std;

class stack{
    private:
    int top;
    int* arr;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"Stack is Full"<<endl;
            return ;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
            return ;
        }
        top--;
    }
    int  Top(){
        if(top==-1){
            return -1 ;
        }
        return arr[top];
        
    }
};



int main(){
    stack s;
    
    s.push(1);
    cout<<s.Top();
    return 0;
}