#include <iostream>
#include <list>


using namespace std;

int func(int args[4]){ // vai fazer as operações de cada linha da matriz -> e seu retorno será jogado em uma lista results

	int soma = 0;

	for(int i=0;i<4;i++){
		soma += args[i]; // soma de cada elemento da linha e jogdando em soma
	}

	return soma;

}




void unroll(int args[4][4]){

	list<int> results; // armazenar os resultados do retorno de fund()	

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			results.push_back(func(args[i])); // retorno de func sendo jogado em results
		}
	}

}



int main(int argc, char *argv[]){

	int args[4][4];

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			args[i][j] = j;
		}
	}

	unroll(args);

	for(int i=0;i<4;i++){
		cout << "|";
		for(int j=0;j<4;j++){
			cout << "args" << "[" << i+1 << "]" << "[" << j+1 << "]:" << args[i][j] << "  ";			
		}
		cout << "|" << endl;
	}


	return 0;
}
