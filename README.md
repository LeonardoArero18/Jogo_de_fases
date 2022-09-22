# Jogo_de_fases
PROJETO DE PROGRAMAÇÃO - MENU


#include <iostream>
#include <string>
using namespace std;
void menu();
void primeira_fase();
int main() {
menu();
primeira_fase();
  
  }

void menu(){
  cout << "----------------------------------------------------\n bem vindo ao menu PRINCIPAL:\n ************ escolha uma opcao******\n 1- jogar \n 2- tutorial\n 3- sair \n------------------------------------------------" << endl;
}


void primeira_fase(){


  
  //-----------------------------------------------------------------------------------
  string opcoes = "escolha uma opcao: \n W: O jogador movimenta uma unidade para cima\n A: O jogador movimenta uma unidade para esquerda \n S: O jogador movimenta uma unidade para baixo\n D: O jogador movimenta uma unidade para direita \n I: O jogador interage com o objeto que ele estar em cima \n";
  char opcao=0,i=0,j = 0;
 char a = '&';
 int cont = 0;
 char matriz1 [25][25];
 int vitoria = 0;
  //----------------------------------------------------------------------------------


  
  // incializando a matriz com vazio
  
  for(int i = 0; i < 25; i++){
    for(int j = 0; j < 25; j++){
      
      matriz1[i][j] = ' ';
      
      } 
    }

  
  //colocando parede nas bordas
  
for(int i = 0; i < 25; i++){

  matriz1 [i][0] = '*';
  matriz1 [0][i] = '*';
  matriz1[i][24]= '*';
  matriz1 [24][i] = '*';
  matriz1[23][23] = a;
  matriz1[22][i] = '*';
  matriz1[22][1]= ' ';
  matriz1[i-3][2] = '*';
  matriz1[1][2] = ' ';
  matriz1 [i][7] = '*';
  matriz1[23][7] = ' ';
  matriz1[21][7] = ' ';
  matriz1[20][i] = '*';
  matriz1[20][1] = ' ';
  matriz1[20][3] = ' ';
  matriz1[20][4] = ' ';
  matriz1[20][5] = ' ';
  matriz1[20][6] = ' ';
  matriz1[20][16] = ' ';
  matriz1[21][15] = ' ';
  matriz1[21][23] = '@';
  matriz1[1][23] = 'D';
    }

  i=24;
  j=24;
  // imprimindo a matriz
  
  for(int i = 0; i < 25; i++){
    for(int j = 0; j < 25; j++){
      
   cout<< matriz1[i][j];
      if(j==24){
        cout<< "\n"; }
      }
    }
  
  while(vitoria ==0){
    cout << opcoes;
    cin >> opcao;

    if(opcao == 'w'){

        if(matriz1[i-1][j]=='*'){
          
          cout << "opa! aqui tem uma parede! voce nao é o toguro pra quebrar tudo!";
          
        } else if(matriz1[i-1][j]==' '){
          matriz1[i-1][j]=a;
          matriz1[i][j]=' ';
          i = i-1;
        }else if(matriz1[i-1][j]=='D'){
          cout << "voce encontrou a porta de saida, mas ela esta fechada! ache a chave!";
        } else if(matriz1[i-1][j]=='='){
          cout<< "voce encontrou a porta de saida! parabens!!!!\n primeira fase concluida!";
          vitoria = 1;
        }

      
      
    }else if(opcao == 's'){
      
    }else if(opcao == 'a'){
      
    }else if(opcao == 'd'){
      
    }else if (opcao == 'i'){

    } else {
            cout << "opcao invalida";

    }
  }



  
   }


