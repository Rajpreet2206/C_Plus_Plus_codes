#include<iostream>

template<typename T0>
void printf1(T0 value){
	std::cout<< value << std::endl;
}

template<typename T, typename... Ts>
void printf1(T value, Ts... args){
	std::cout<< value << std::endl;
	printf1(args...);
}

int main(int argc, char* argv[]){
	printf1(1,2, "1234", 1.1);
	return 0;
}
