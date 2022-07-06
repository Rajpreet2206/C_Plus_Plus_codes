#include<iostream>

int square(int x){
	int X;
	X = x*x;
	return X;
}

int main(int argc, char* argv[]){
	std::cout<< square(3) << std::endl;
	return 0;
}
