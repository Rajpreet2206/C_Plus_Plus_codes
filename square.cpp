#include<iostream>

double square(double x){
	return x*x;
}
void print_square(double x){
	std::cout<<"The Square of "<< x<< "is " << square(x) << std::endl;
}

int main(int argc, char* argv[]){
	print_square(12.52);
	return 0;
}
