#include <iostream>
#include <string>

using namespace std;

void primeira_fase();
int segunda_fase();
int menu_principal();
void tutorial(); 

int main() {
  int enqt = 0;
  int opcao;
  int beta;
  while(enqt ==0){ 
  opcao = menu_principal();
if(opcao ==1){ 
  primeira_fase();
  segunda_fase();
  if(segunda_fase() == 2){
    cout << "IHHHHH, TU EH HORRIVEL, VAI FARMAR!!!!";
  }else if(segunda_fase() ==1){
    cout << "PARABENS GANHOU!!!";
  }
  }else if(opcao == 2){
    tutorial();
  }else if(opcao ==3){
  cout << "OBRIGADO POR TER JOGADO COM A GENTE!!!";
  enqt = 1;
  }
  }
  }

void tutorial(){
  string opcoes = " \n W: O jogador movimenta uma unidade para cima\n A: O jogador movimenta uma unidade para esquerda \n S: O jogador movimenta uma unidade para baixo\n D: O jogador movimenta uma unidade para direita \n I: O jogador interage com o objeto que ele estar em cima \n";
  cout << opcoes;
}

int menu_principal(){
  int a;
  
  cout<< "escolha uma opcao\n";
  cout << "1- jogar \n 2- tutorial \n 3- sair";
  cin >> a;
  
  return a;
}


void primeira_fase(){


  
  //-----------------------------------------------------------------------------------
  string opcoes = "escolha uma opcao: \n W: O jogador movimenta uma unidade para cima\n A: O jogador movimenta uma unidade para esquerda \n S: O jogador movimenta uma unidade para baixo\n D: O jogador movimenta uma unidade para direita \n I: O jogador interage com o objeto que ele estar em cima \n";
  char opcao=0;
  int i=0,j = 0;
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

  i=23;
  j=23;
  // imprimindo a matriz
  
  for(int i = 0; i < 25; i++){
    for(int j = 0; j < 25; j++){
      
   cout<< matriz1[i][j];
      if(j==24){
        cout<< "\n"; }
      }
    }
  cout << opcoes;
  while(vitoria ==0){
      cin >> opcao;
    cout << "\033[2J\033[0;0H";
    
  
  
    if(opcao == 'w'){

        if(matriz1[i-1][j]=='*'){
          
        } else if(matriz1[i-1][j]==' '){
          matriz1[i-1][j]=a;
          matriz1[i][j]=' ';
          i = i-1;
          
        }else if(matriz1[i-1][j]=='@'){
          
          cout << "voce encontrou a chave-- APERTE 'i' para interagir";
          char alternativo = matriz1[i-1][j];
          char interagir;
          cin >> interagir;
          if(interagir=='i'){
            matriz1[1][23]='=';
              
          }
        } else if(matriz1[i-1][j]=='='){
          
          cout<< "voce encontrou a porta de saida! parabens!!!!\n primeira fase concluida!";
          
          vitoria = 1;
        }else if(matriz1[i-1][j]=='D'){
          cout << "porta fechada";
        }

      
      
    }else if(opcao == 'a'){
       if(matriz1[i][j-1]=='*'){
          cout<< "i=" << i << "j=" << j;
        
          
        } else if(matriz1[i][j-1]==' '){
         cout<< "entrou";
          matriz1[i][j-1]=a;
          matriz1[i][j]=' ';
          j = j-1;
        }else if(matriz1[i][j-1]=='D'){
          cout << "voce encontrou a porta de saida, mas ela esta fechada! ache a chave!";
        } else if(matriz1[i][j-1]=='@'){
          
          cout << "voce encontrou a chave-- APERTE 'i' para interagir";
          char alternativo = matriz1[i-1][j];
          char interagir;
          cin >> interagir;
          if(interagir=='i'){
            matriz1[1][23]='=';
              
          }
        }
      
      
    }else if(opcao == 's'){
       if(matriz1[i+1][j]=='*'){
          
          cout << "opa! aqui tem uma parede! voce nao é o toguro pra quebrar tudo!";
          
        } else if(matriz1[i+1][j]==' '){
          matriz1[i+1][j]=a;
          matriz1[i][j]=' ';
          i = i+1;
        }else if(matriz1[i+1][j]=='D'){
          cout << "voce encontrou a porta de saida, mas ela esta fechada! ache a chave!";
        } else if(matriz1[i+1][j]=='='){
          cout<< "voce encontrou a porta de saida! parabens!!!!\n primeira fase concluida!";
          vitoria = 1;
        }else if(matriz1[i+1][j]=='@'){
          
          cout << "voce encontrou a chave-- APERTE 'i' para interagir";
          char alternativo = matriz1[i-1][j];
          char interagir;
          cin >> interagir;
          if(interagir=='i'){
            matriz1[1][23]='=';
              
          }
        }
      
    }else if(opcao == 'd'){
       if(matriz1[i][j+1]=='*'){
          
          cout << "opa! aqui tem uma parede! voce nao é o toguro pra quebrar tudo!";
          
        } else if(matriz1[i][j+1]==' '){
          matriz1[i][j+1]=a;
          matriz1[i][j]=' ';
          j = j+1;
        }else if(matriz1[i][j+1]=='D'){
          cout << "voce encontrou a porta de saida, mas ela esta fechada! ache a chave!";
        } else if(matriz1[i][j+1]=='='){
          cout<< "voce encontrou a porta de saida! parabens!!!!\n primeira fase concluida!";
          vitoria = 1;
        }else if(matriz1[i][j+1]=='@'){
          
          cout << "voce encontrou a chave-- APERTE 'i' para interagir";
          char alternativo = matriz1[i-1][j];
          char interagir;
          cin >> interagir;
          if(interagir=='i'){
            matriz1[1][23]='=';
              
          }
        }
      
    }else if (opcao == 'i'){
      

    } else {
            cout << "opcao invalida";

    }
    for(int i = 0; i < 25; i++){
    for(int j = 0; j < 25; j++){
      
   cout<< matriz1[i][j];
      if(j==24){
        cout<< "\n"; }
      }
    }
  }
         
  }





  int segunda_fase(){
    
    cout<<"\n";
    char posicao = '&';
    char botao = 'O';
    char porta_fechada ='D';
    char porta_aberta= '=';
    char espinho = '#';
    char chave = '@';
    char opcao;
    int vida = 3;
    int i = 48;
    int j = 48;
    char matriz[50][50];
      for(int i = 0; i<50;i++){
        for (int j = 0; j<50; j++){
          matriz[i][j]=' ';
      } 
      }

      for(int i = 0; i<50;i++){
      
    
        matriz [i][0] = '*';
        matriz [0][i] = '*';
        matriz[i][49]= '*';
        matriz [49][i] = '*';
        
        matriz[i][6] = '*';
        matriz[45][i]='*';
        matriz[30][i]='*';
        matriz[i][20]='*';
        
        matriz[48][6]=' ';
        matriz[47][6]=' ';
        matriz[46][6]=' ';
        matriz[3][6]=' ';
        matriz[4][6]=' ';
        matriz[5][6]=' ';
        
        matriz[48][20]=' ';
        matriz[47][20]=' ';
        matriz[46][20]=' ';
        matriz[44][20]=' ';
        matriz[43][20]=' ';
        matriz[42][20]=' ';

        matriz[45][1]=' ';
        matriz[45][2]=' ';
        matriz[45][3]=' ';
        matriz[45][4]=' ';
        matriz[45][5]=' ';

        matriz[30][1]=' ';
        matriz[30][2]=' ';
        matriz[30][3]=' ';
        matriz[30][4]=' ';
        matriz[30][5]=' ';
        matriz[30][7]=' ';
        matriz[30][8]=' ';
        matriz[30][9]=' ';
        matriz[30][10]=' ';
        matriz[30][11]=' ';
        matriz[30][12]=' ';
        matriz[30][13]=' ';
        matriz[30][14]=' ';
        matriz[30][15]=' ';
        matriz[30][16]=' ';
        matriz[30][17]=' ';
        matriz[30][18]=' ';
        matriz[30][19]=' ';
        
      
        matriz[30][31]=' ';
        matriz[30][32]=' ';
        
        matriz[48][48]=posicao;
        matriz[2][48]= porta_fechada;
        matriz[31][48]= chave;

        matriz[33][48] =  botao;
        matriz[30][2] = espinho;
        matriz[30][3] = espinho;
        matriz[30][8] = espinho;
        matriz[30][9] = espinho;
        matriz[30][10] = espinho;
        matriz[30][11] = espinho;
        matriz[30][12] = espinho;
        matriz[30][13] = espinho;
        matriz[30][14] = espinho;
        matriz[30][16] = espinho;
        matriz[30][17] = espinho;
        matriz[32][48] = espinho;
        matriz[32][47] = espinho;
        

        }

    
        for(int i = 0; i < 50; i++){
        for(int j = 0; j < 50; j++){
      
         cout<< matriz[i][j];
          if(j==49){
          cout<< "\n"; }
      }
    }
int saida = 0;
    while(saida == 0){
      cout << " digite";
      cin >> opcao;
      cout << "\033[2J\033[0;0H";
      if(opcao == 'w'){
              cout << "entrou no W\n";
            if(matriz[i-1][j]==' '){
              matriz[i-1][j]=posicao;
              matriz[i][j]=' ';
              i =i-1;
              
            }else if (matriz[i-1][j]=='#'){
              
              cout << "voce esbarrou em um espinho e perdeu uma vida";
              vida = vida -1;
            }else if (matriz[i-1][j]=='*'){
              
            }else if (matriz[i-1][j]=='@'){
              cout << "voce encontrou a chave\n" <<"digite 'i' para interagir" ;
              char interacao;
              cin >> interacao;
              if(interacao == 'i'){
                cout << " porta aberta";
                
                matriz[2][48] =  porta_aberta;
              }
        
              
            }else if (matriz[i-1][j]=='='){
              cout<< "voce econtrou a saida";
              saida = 1;
              return 1;
            }else if (matriz[i-1][j]=='D'){
              
            } else if(matriz[i-1][j] == 'O'){
              char enqt='i';
              while(enqt == 'i'){
                cout << "digite\n i - para interagir\n p - para continuar \n ";
                cin >> enqt;
                
              }
            }
  
      }else if( opcao == 's'){
        
            if(matriz[i+1][j]==' '){
               matriz[i+1][j]=posicao;
              matriz[i][j]=' ';
              i =i+1;
            }else if (matriz[i+1][j]=='#'){
               cout << "voce esbarrou em um espinho e perdeu uma vida";
              vida = vida -1;
            }else if (matriz[i+1][j]=='*'){
              
            }else if (matriz[i+1][j]=='@'){
              cout << "voce encontrou a chave\n" <<"digite 'i' para interagir" ;
              char interacao;
              cin >> interacao;
              
              if(interacao == 'i'){
                cout << " porta aberta";
                matriz[2][48] =  porta_aberta;
                }
              
            }else if (matriz[i+1][j]=='='){
               cout<< "voce econtrou a saida";
              saida = 1;
              
            }else if (matriz[i+1][j]=='D'){
              
            }else if(matriz[i-1][j] == 'O'){
              char enqt='i';
              while(enqt == 'i'){
                cout << "digite\n i - para interagir\n p - para continuar \n ";
                cin >> enqt;
                
              }
            }
      }else if( opcao == 'a'){
        
            if(matriz[i][j-1]==' '){
                matriz[i][j-1]=posicao;
              matriz[i][j]=' ';
              j=j-1;
            }else if (matriz[i][j-1]=='#'){
               cout << "voce esbarrou em um espinho e perdeu uma vida";
              vida = vida -1;
            }else if (matriz[i][j-1]=='*'){
              
            }else if (matriz[i][j-1]=='@'){
               cout << "voce encontrou a chave\n" <<"digite 'i' para interagir" ;
              char interacao;
              cin >> interacao;
              if(interacao == 'i'){
                cout << " porta aberta";
               matriz[2][48] =  porta_aberta;
                }
            }else if (matriz[i][j-1]=='='){
               cout<< "voce econtrou a saida";
              saida = 1;
              
            }else if (matriz[i][j-1]=='D'){
              
            }else if(matriz[i-1][j] == 'O'){
              char enqt='i';
              while(enqt == 'i'){
                cout << "digite\n i - para interagir\n p - para continuar \n ";
                cin >> enqt;
                
              }
            }
      }else if( opcao == 'd'){
        
            if(matriz[i][j+1]==' '){
                matriz[i][j+1]=posicao;
              matriz[i][j]=' ';
              j = j+1;
            }else if (matriz[i][j+1]=='#'){
               cout << "voce esbarrou em um espinho e perdeu uma vida";
              vida = vida -1;
            }else if (matriz[i][j+1]=='*'){
              
            }else if (matriz[i][j+1]=='@'){
               cout << "voce encontrou a chave\n" <<"digite 'i' para interagir" ;
              char interacao;
              cin >> interacao;
              if(interacao == 'i'){
                cout << " porta aberta";
                matriz[2][48] =  porta_aberta;
                }
            }else if (matriz[i][j+1]=='='){
               cout<< "voce econtrou a saida";
              saida = 1;
              
            }else if (matriz[i][j+1]=='D'){
              
            }else if(matriz[i-1][j] == 'O'){
              char enqt='i';
              while(enqt == 'i'){
                cout << "digite\n i - para interagir\n p - para continuar \n ";
                cin >> enqt;
                
              }
            }
        
      }
      
      if(vida ==0){
        saida =2;
        
      }
           for(int i = 0; i < 50; i++){
        for(int j = 0; j < 50; j++){
      
         cout<< matriz[i][j];
          if(j==49){
          cout<< "\n"; }
      }
      }
    
    }
    return saida;
    }
      
    
    
    
    
  


  
   


        
      

