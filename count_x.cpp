#include<iostream>

using namespace std;

int count_x(const char* p, char X){
	if(p == nullptr)
		return 0;
	
	auto count = 0;
	while(*p){
		if(*p == X)
			++count;
		++p;	
	}	
	return count;
	cout<<"The character " << X<< "in the given string occurs "<< count<< "times" <<"\n";	

}

int main(){
	char W;
	count_x("HELLOWOWOSCINAOB", W);
	return 0;
}

