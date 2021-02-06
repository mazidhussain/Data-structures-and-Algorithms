#include<iostream>
#include<stack>
using namespace std;


void insertAtbottom(stack<int> &s,  int ele ){
	if(s.empty()){
		s.push(ele);
		return;
	}
	int topele=s.top();
	s.pop();
	insertAtbottom(s,ele);
	s.push(topele);
}


void reverseStack(stack<int> &s){
	if(s.empty()){
		return ;
	}
	int ele=s.top();
	s.pop();
	reverseStack(s);
	insertAtbottom(s,ele);
}





int main(){


	ios_base::sync_with_stdio(false);cin.tie(NULL); 
   
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr); 
    freopen("output.txt", "w", stdout); 
    #endif 
	
	stack<int> s;
	int count=0;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);

	reverseStack(s);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
		count++;
	}
	return 0;


}