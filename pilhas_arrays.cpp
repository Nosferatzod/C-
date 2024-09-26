#include <iostream>
#include <stack>

int main() {

std::stack<int> pilha;
pilha.push(10);
pilha.push(20);
pilha.push(30);
pilha.push(40);

std::cout << "Topo da pilha: " << pilha.top() << std::endl;

while (!pilha.empty())
{
    std::cout << "Desempilhando: " << pilha.top() << std::endl;
    pilha.pop();
    std::cout << "Desempilhando: " << pilha.top() << std::endl;
    pilha.pop();
}

pilha.push(10);
pilha.push(20);
pilha.push(30);
pilha.push(40);

std::cout << "Topo da pilha: " << pilha.top() << std::endl;

while (!pilha.empty())
{
    std::cout << "Desempilhando: " << pilha.top() << std::endl;
    pilha.pop();
}


pilha.push(50);

    std::cout << "Topo da pilha: " << pilha.top() << std::endl;

    while (!pilha.empty())
    {
        std::cout << "Desempilhando: " << pilha.top() << std::endl;
        pilha.pop();
    }

return 0;
}