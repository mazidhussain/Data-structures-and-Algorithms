#include<iostream>
using namespace  std;
#define n 10
class queue{
    private:
    int f;
    int r;
    int *arr;
    public:
    queue(){
        arr=new int[n];
        f=-1;
        r=-1;
    }
    void enque(int x){
        if(r==n-1){
            cout<<"Queue is Full"<<endl;
            return ;
        }
        r++;
        arr[r]=x;
    }
    int dequeue(){
        if(f==r){
            return -1;
        }
        f++;
        return arr[f];
    }
};

int main(){
    queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    cout<<q.dequeue()<<" ";
    cout<<q.dequeue()<<" ";
    cout<<q.dequeue()<<" ";
    cout<<q.dequeue()<<" ";
    cout<<q.dequeue()<<" ";

    return 0;
}