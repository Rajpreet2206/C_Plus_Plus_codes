#include<iostream>

using namespace std;

void print(int M){
	int v[]= {0,1,2,3,4,5,6,7,8,9};
	for(auto x:v){
		x = x+M;
		cout<< x <<"\n";
	}
	
}
int main(){
	print(1);
	return 0;
}
