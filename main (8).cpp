/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    

int l;
int c;
int matriz[3][3];
int conta;
int conta2;

  for(int l = 0; l<3; l++){
    for(int c = 0; c<3; c++){
                 cin >> matriz[l][c];
    }
  }
         
        for(int l = 0; l<3;l++){
            int conta = 0; // declarar acima das colunas 
            for(int c=0; c<3;c++){
                conta = matriz[l][0] + matriz [l][1] + matriz[l][2];


            }
            
            cout << "Linha " << l+0 << ": " << conta;
            
            
            


            

            cout << endl << endl;
        }
    

    return 0;
}