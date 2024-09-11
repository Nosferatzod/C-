#include <iostream>
#include <stack>

int main () {
    std::stack<int> pilha;

    pilha.push(5);
    pilha.push(8);
    pilha.push(3);

    int valor1 = pilha.top();
    pilha.pop();
    int valor2 = pilha.top();
    pilha.pop();

    std::cout << "Valores retirados da pilha: " << valor1 << ", " << valor2 << std::endl;

    return 0;
}