#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int numero_secreto = rand()%100 +1;

    int tentativas = 8;

    do{

        cout <<"Tentativa" << tentativas <<": Digite um número :";
        int palpite;
        cin >> palpite;

        if (palpite < numero_secreto){
            cout <<"Muito baixo!" << endl; 
        }else if (palpite > numero_secreto){
            cout << "Mito alto!" << endl;
        }

        tentativas--;
    }while (palpite != numero_secreto && tentativas > 0);

    if(palpite == numero_secreto){
        cout << "Parabéns! Você acertou o número em " << " tentativas!" << endl;
    }else{
        cout << "Você não conseguiu advinhar o número. O numero secreto era " << numero_secreto << endl;
    }
    return 0;
    
}