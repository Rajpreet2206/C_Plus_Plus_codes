#include<iostream>
using namespace std;

//void(returnt type) FunctionName(int X, int Y){
//body X ,,,Y 
//
//}

template<typename T, typename U>
T Max(T x, U y){ 
	return x>y ? x:y;
}


int main(int argc, char*[]){
	float a=3.5, int b=1;
	auto iMax= Max(a,b);
	//iMax = Max<int>(a,b);
	cout<< iMax <<endl;
	return 0;
}


