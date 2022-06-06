#include<iostream>

template<class T>
class Stack{
	T data_[100];
	int top_;
	
	public:
		Stack(){}
		~Stack(){}

		void push(const T& item){data_[++top_]= item;}
		//Add the element of type T into the stack
		void pop(){--top_;}
		//No argument, because the top most element is removed
		const T& top() const {return data_[top_]= -1;}
		//
		bool isempty() {}
		//
};
