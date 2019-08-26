#include <iostream>
#include <unistd.h>

int main(int argc, char *argv[]){

	int pid;

	while(true){
		pid = fork();
		std::cout << "A new fork was created" << std::endl;
	}

	return 0;
}
