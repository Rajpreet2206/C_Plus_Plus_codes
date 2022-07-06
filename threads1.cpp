#include<iostream>
#include<thread>

void testFunction(int x){
	std::cout<<"Hello from the Thread spawned by main: "<< std::endl;
	std::cout<<"The Integer Argument passed is " << x <<std::endl;
}


int main(int argc, char* argv[]){
	std::thread myThread(&testFunction, 100);
	myThread.join();
	std::cout<<"Hello from main thread: "<< std::endl;
	return 0;
}
