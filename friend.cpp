#include<iostream>

class Base {
		int x;
	public:
		Base(){}
		Base(int x): x{x} {}
		friend void func(Base&);
};

void func(Base& obj){
	std::cout<<obj.x<<std::endl;
	obj.x= 20;
	std::cout<<obj.x<<std::endl;
}

int main(){
	Base b(10);
	func(b);
	return 0;
}
