#include<iostream>
using namespace std;
class stackusingarray{
	int *arr;
	int nextindex;
	int capacity;
	public:
		stackusingarray(int totalsize ){
			arr=new int[totalsize];
			nextindex=0;
			capacity=totalsize;
		}
		//return the number of elements in the stack
		int size(){
			return nextindex;
		} 
		//check whether my stack is empty or not
		bool isEmpty(){
			if(nextindex==0){
				return true;
			}
			else{
				return false;
			}
		}
		//inset elemenet in the stack
		void push(int element){
			// while inserting element in the stck we need to check whether our stack gets overflow or not
			if(nextindex==capacity){
				cout<<"stack is full"<<endl;
				return;
			}
			arr[nextindex]=element;
			nextindex++;
		}
		int pop(){
			if(isEmpty()){
			 cout<<"stack is empty"<<endl;
			 return INT_MIN;	
			}
			nextindex--;
			return arr[nextindex];
			
		}
		int top(){
			if(isEmpty()){
				cout<<"stack is empty"<<endl;
				return INT_MIN;
			}
			return arr[nextindex-1];
			
		}
		
};
int main(){
	stackusingarray s(4);
	s.push(10);
	s.push(20);
	s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    
    
	
}
