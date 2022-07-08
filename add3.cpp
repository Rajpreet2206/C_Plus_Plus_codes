#include<iostream>

template<typename T, typename U>
auto add3(T x, U y){
	return x+y;
}

int main(int argc, char* argv[]){
	auto A = add3(1,2);
	std::cout<<"The templated output of the add functions is "<< A << std::endl;
}
