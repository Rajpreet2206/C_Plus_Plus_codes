#include<iostream>
#include<memory>

class CruiseControl{
	public:
		CruiseControl(){
			std::cout<<"Cruise Control Object created " << std::endl;
		};
		~CruiseControl(){
			std::cout<<"Cruise Control Object destroyed "<< std::endl;
		};
		void increaseSpeed(int speed){
			std::cout<< "Speed at " << speed << std::endl;
		};	
};

int main(int argc, char* argv[]){
	std::cout<<"Unique_Pointer Test Started "<< std::endl;
	std::unique_ptr<CruiseControl> cruiseControl= std::make_unique<CruiseControl>();
	cruiseControl -> increaseSpeed(12);
	std::cout<< "Unique_Pointer Test Finished " <<std::endl;
	return 0;
}
