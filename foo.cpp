#include<iostream>

template<auto value> void foo(){
	std::cout<< value << std::endl;
	return;
}

int main(int argc, char* argv[]){
	foo<10>();
}
