#include <iostream>
using namespace std;

int main() {
    int numMissões;
    int totalExperiencia = 0;
    const int pontosPorNível = 1000;

    cout << "Informe o número de missões completadas: ";
    cin >> numMissões;

    for (int i = 0; i < numMissões; ++i) {
        int experienciaGanha;

        cout << "Informe a quantidade de experiência ganha na missão " << (i + 1) << ": ";
        cin >> experienciaGanha;

        totalExperiencia += experienciaGanha;

        int nivelAtual = totalExperiencia / pontosPorNível;
        int experienciaParaProximoNivel = pontosPorNível - (totalExperiencia % pontosPorNível);

        cout << "Nível atual: " << (nivelAtual + 1) << endl;
        cout << "Experiência restante para o próximo nível: " << experienciaParaProximoNivel << endl;
    }

    return 0;
}
