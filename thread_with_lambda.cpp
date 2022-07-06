#include<iostream>
#include<thread>

int main(int argc, char* argv[]){
	auto lambda=[](int x){
		std::cout<<"Thread Created "<<std::endl;
		std::cout<<"ARgument x passed is " << x << std::endl;
	};

	std::thread myThread(lambda, 110);
	myThread.join();
	std::cout<<"The Main Thread" << std::endl;
	return 0;
}
