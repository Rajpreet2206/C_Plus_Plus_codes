#include<iostream>

class Base {
	public:
		virtual void print(){
			std::cout<<"Print base "<< std::endl;
		}
		void show(){
			std::cout<<"Show Base Class "<< std::endl;
		}
};


class Derived {
	public:
		void print(){
			std::cout<<"Print Derived Class "<<std::endl;
		}
		void show(){
			std::cout<<"Show Derived Class "<< std::endl;
		}
};

int main(int argc, char* argv[]){
	Base b;
	Derived d;
	d.print();
	b.print();
	d.show();
	b.print();
	return 0;
}
