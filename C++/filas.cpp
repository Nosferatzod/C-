#include <iostream>
#include <queue>

int main()
{
    std::queue<int> fila;

    fila.push(5);
    fila.push(8);
    fila.push(3);

    int valor1 = fila.front();
    fila.pop();
    int valor2 = fila.front();
    fila.pop();

    std::cout << "Valores retirados da fila: " << valor1 << ", " << valor2 << std::endl;

    return 0;
}