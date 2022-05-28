#include<iostream>

template <typename T, typename U>
void f(T x, U y){
	//Some functionality
}

template <typename T>
void g(T x, T y){
	//...Some functionality
}

int main(){
	f(1,2);//void f(T,U) [T=int, U=int]
	f(1,2u);//void f(T,U) [T=int, U=unsigned int]
	g(1,2);//void g(T,T) [T=int]
	g(1,2u);//Error: no matching function call to g(int, unsigned int)
	return 0;
}
