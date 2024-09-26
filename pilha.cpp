#include <iostream>
#include <stack>

int main()
{
    std::stack<int> pilha;
    pilha.push(5);
    pilha.push(10);
    pilha.push(15);

    std::cout << "Topo da pilha: " << pilha.top() << std::endl;

    while (!pilha.empty())
    {
        std::cout << "Desempilhando: " << pilha.top() << std::endl;
        pilha.pop();
    }

    return 0;
}