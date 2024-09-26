#include <iostream>
#include <queue>
int main()
{
    std::queue<int> fila; // Criando uma fila de inteiros

    // Adicionano elementos na fila
    fila.push(5);
    fila.push(10);
    fila.push(15);

    std::cout << "Primeiro da fila:" << fila.front() << std::endl;
    // Removendo elementos da fila e mostrando-os
    while (!fila.empty())
    {
        std::cout << "Removendo:" << fila.front() << std::endl;
        fila.pop();
    }
    return 0;
}