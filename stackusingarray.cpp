#include<iostream>
using namespace std;
class stackusingarray{
	int *arr;
	int nextindex;
	int capacity;
	public:
		stackusingarray(){
			arr=new int[4];
			nextindex=0;
			capacity=4;
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
			int *newarr=new int[2*capacity];
			for(int i=0;i<capacity;i++){
				newarr[i]=arr[i];
			}
			capacity*=2;
			delete[] arr;
			arr=newarr;
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
	stackusingarray s;
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
