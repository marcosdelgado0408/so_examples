#include <iostream>
#include <unistd.h>


int main(int argc, char *argv[]){

	int pid;

	pid = fork();	
	
	std::cout << "Novo processo foi criado" << std::endl;

	if(pid > 0){
		cout << "Fodase" << endl;
	
	}

	return 0;
}
