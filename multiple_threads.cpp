#include<iostream>
#include<thread>
#include<vector>

int main(int argc, char* argv[]){
	auto lambda=[](int x){
		std::cout<<"Hello from thread with id "<< std::this_thread.get_id()<<std::endl;
		std::cout<<"Argument passed is " << x <<std::endl;
	};

	std::vector<std::thread> threads;
	for(int i=0; i<10; i++){
		threads.push_back(std::thread(lambda, i));
	}
	for(int i=0; i<10; i++){
		threads[i].join();
	}

	std::cout<<"Hello From Main Thread: " <<std::endl;
	return 0;
}
