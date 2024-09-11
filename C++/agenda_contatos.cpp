#include <iostream> // Biblioteca para entrada e saída de dados em C++

void adicionarUsuario(std::string usuarios[], std::string telefones[], int tamanho, std::string usuario, std::string telefone)
{
    usuarios[tamanho] = usuario;
    telefones[tamanho] = telefone;
}

void exibirUsuario(std::string usuarios[], std::string telefones[], int tamanho, std::string usuario, std::string telefone)
{
    std::cout << "Usuário atual:\n";
    int i = 0;
    while (i < tamanho && usuarios[i] != usuario)
    {
        i++;
    }
    if (i < tamanho)
    {
        std::cout << "Contato: " << usuario << "Telefone:" << telefone << std::endl;
    }
}

int main()
{

    const int maxUsuarios = 100;
    std::string usuarios[maxUsuarios];
    std::string telefones[maxUsuarios];
    int tamanho = 0;

    adicionarUsuario(usuarios, telefones, tamanho, "Coringa", "999-8888");
    tamanho++;
    adicionarUsuario(usuarios, telefones, tamanho, "Duas-Caras", "777-6666");
    tamanho++;
    adicionarUsuario(usuarios, telefones, tamanho, "Pinguim", "555-4444");
    tamanho++;

    exibirUsuario(usuarios, telefones, tamanho, "Coringa", "999-8888");
    exibirUsuario(usuarios, telefones, tamanho, "Duas-Caras", "777-6666");
    exibirUsuario(usuarios, telefones, tamanho, "Pinguim", "555-4444");

    return 0;
}