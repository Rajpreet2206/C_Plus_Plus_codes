#include<iostream>
#include<thread>
#include<vector>

static int shared_value= 0;

void shared_value_increment(){
	shared_value = shared_value + 1;
}

int main(int argc, char* argv[]){
	std::vector<thread> threads;
	for(int i=0; i<10; i++){
		threads.push_back(std::thread(shared_value_increment));
	}

	for(int i=0; i<10; i++){
		threads[i].join();
	}

	std::cout<<"Shared Value "<<shared_value<< std::endl;
	return 0;

}
