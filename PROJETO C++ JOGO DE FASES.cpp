#include <iostream>
using namespace std;

class jogador1{
	
public:
	float vida;
	float xp;
	char nome[30];
	string tipo;
	
	void ini(float tp);

	
	
};

void jogador1::ini(float tp){//tp = 0 inicio do jogo; tp == 100 vida upada
	
	if(tp == 0){
		
		vida = 100.00;
		xp = 100.00;
		nome = "LUIGI";
		
		
		
	}
		
}

int main()
{
	  jogador1 *j1= new jogador1();
	  
	  cout <<  j1-> vida << endl;	
	
	
	return 0;
}