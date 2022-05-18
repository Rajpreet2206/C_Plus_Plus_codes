#include<iostream>

using namespace std;

void print(int T){
	cout<<T<<"\n";
	cout<<"Size of the argument type is "<<sizeof(T)<<"\n";
}

void print(double D){
	cout<<D<<"\n";
	cout<<"Size of the argument type is "<<sizeof(D)<<"\n";
}

void print(string S){
	cout<<S<<"\n";
	cout<<"Size of the argument type is "<<sizeof(S)<<"\n";
}

void user(){
	print(3);
	print(3.14);
	print("RAJA");

}

int main(){
	user();
}


