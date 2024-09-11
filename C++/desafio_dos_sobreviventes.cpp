#include <iostream>

int main(){
    char escolha;
std::cout << "O que você deseja \nP- abrir uma  porta misteriosa ou \nT- adentrar um tunel escuro: ";
std::cin >> escolha;
switch (escolha){
    case 'P':
        std::cout <<"Você abriu a porta tem duas cadeiras uma com um bolo e outra com uma surpresa !"<<std::endl;
        break;
    case 'T':
        std::cout <<"Você entrou no tunel e encotra uma tribo de canibais, mas consegue fugir ileso."<<std::endl;
        break;
              
    default:
        std::cout <<"Você não tem escolha"<<std::endl;
        break;     
}
    return 0;
}    