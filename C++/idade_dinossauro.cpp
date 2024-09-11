#include <iostream>
#include <string>

using namespace std;

int main() {
string nomeDinossauro;
int anoDescoberta, idadeDinossauro;

cout << "Digite o nome do dinossauro: ";
getline(cin, nomeDinossauro);

cout << "Digite o ano de descoberta do dinossauro: ";
cin >> anoDescoberta;

idadeDinossauro = 2024 - anoDescoberta;

cout << "O dinossauro" << nomeDinossauro << "tem" << idadeDinossauro << "anos." << endl;

return 0;
}