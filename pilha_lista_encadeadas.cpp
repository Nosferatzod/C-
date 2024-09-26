#include <iostream>
#include <stack>

int main() {

std::stack<char> pilha;
pilha.push('a');
pilha.push('b');
pilha.push('c');
pilha.push('d');

std::cout << "Topo da pilha: " << pilha.top() <<std::endl;

while (!pilha.empty())
{
    std::cout << "Desempilhando: " << pilha.top() << std::endl;
    pilha.pop();
    std::cout << "Desempilhando: " << pilha.top() << std::endl;
    pilha.pop();
}

pilha.push('a');
pilha.push('b');
pilha.push('c');
pilha.push('d');

std::cout << "\nTopo da pilha: " << pilha.top() <<std::endl;

while (!pilha.empty())
{
    std::cout << "Desempilhando: " << pilha.top() << std::endl;
    pilha.pop();
}


pilha.push('e');

    std::cout << "\nTopo da pilha: " << pilha.top() << std::endl;

    while (!pilha.empty())
    {
        std::cout << "Desempilhando: " << pilha.top() << std::endl;
        pilha.pop();
    }

return 0;
}