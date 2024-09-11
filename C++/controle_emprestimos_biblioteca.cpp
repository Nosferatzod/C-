#include <iostream>
#include <stack>

int main()
{
    std::stack<std::string> emprestimoLivros;

    emprestimoLivros.push("Capturar o Lex Luthor");
    emprestimoLivros.push("Impedir um assalto a banco");
    emprestimoLivros.push("Salvar um gato de uma árvore");

    std::cout << "Lista de empréstimos:\n";
    std::stack<std::string> listaCopia = emprestimoLivros;
    while (!listaCopia.empty())
    {
        std::cout << listaCopia.top() << std::endl;
        listaCopia.pop();
    }

    if (!emprestimoLivros.empty())
    {
        std::cout << "\nLivro Entregue: " << emprestimoLivros.top() << std::endl;
        emprestimoLivros.pop();
    }
    else
    {
        std::cout << "Lista de empréstimos vazia!\n";
    }

    emprestimoLivros.push("Capturar o Lex Luthor");
    emprestimoLivros.push("Impedir um assalto a banco");
    emprestimoLivros.push("Salvar um gato de uma árvore");

    if (!emprestimoLivros.empty())
    {
        std::cout << "Livro Entregue: " << emprestimoLivros.top() << std::endl;
        emprestimoLivros.pop();
    }
    else
    {
        std::cout << "Lista de empréstimos vazia!\n";
    }

    std::cout << "\nLista de livros emprestados após algumas entregas:\n";
    listaCopia = emprestimoLivros;
    while (!listaCopia.empty())
    {
        std::cout << listaCopia.top() << std::endl;
        listaCopia.pop();
    }

    return 0;
}