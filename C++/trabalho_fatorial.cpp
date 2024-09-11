#include <iostream> // Inclui a biblioteca para entrada e saída padrão
using namespace std;
// Função para calcular o fatorial de um número n
int fatorial(int num_fatorial)
{
    // Retorna 0 para números negativos, pois o fatorial não é definido para negativos
    if (num_fatorial < 0)
        return 0;

    int resultado = 1; // Inicializa o resultado do fatorial como 1

    // Calcula o fatorial multiplicando os números de 2 até n
    for (int i = 2; i <= num_fatorial; ++i)
    {
        resultado *= i; // Corrigido para multiplicar o resultado por i
    }
    return resultado; // Retorna o resultado do fatorial
}

// Função para calcular o arranjo simples (P(n, k))
int arranjoSimples(int num_fatorial, int r)
{
    // Verifica se os valores são válidos
    if (r > num_fatorial || num_fatorial < 0 || r < 0)
        return 0;

    // Calcula o arranjo simples dividindo o fatorial de n pelo fatorial de (n-k)
    return fatorial(num_fatorial) / fatorial(num_fatorial - r);
}

// Função para calcular a combinação simples (C(n, k))
int combinacaoSimples(int num_fatorial, int r)
{
    // Verifica se os valores são válidos
    if (r > num_fatorial || num_fatorial < 0 || r < 0)
        return 0;

    // Calcula a combinação simples dividindo o fatorial de n pelo produto dos fatoriais de k e (n-k)
    return fatorial(num_fatorial) / (fatorial(r) * fatorial(num_fatorial - r));
}

int main()
{
    int num_fatorial, r, opcao;
    do
    {
        // Exibe o menu de opções
        cout << "__________________________________________________________\n";
        cout << "Calculadora Fatorial / Arranjo simples / Combinação Simples\n";
        cout << "__________________________________________________________\n";
        cout << "1. Calcular Fatorial / 2. Calcular Arranjo Simples \n";
        cout << "3. Calcular Combinação Simples";
        cout << " 4. Sair\n ";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            // Calcula o fatorial de um número
            cout << "Digite um número para calcular o fatorial: ";
            cin >> num_fatorial;
            if (num_fatorial < 0)
            {
                cout << "Número inválido. O fatorial é definido apenas para números não-negativos.\n";
            }
            else
            {
                cout << "Fatorial de " << num_fatorial << " é " << fatorial(num_fatorial) << endl;
            }
            break;
        case 2:
            // Calcula o arranjo simples
            cout << "Digite o total de elementos (n): ";
            cin >> num_fatorial;
            cout << "Digite o número de elementos escolhidos (k): ";
            cin >> r;
            if (r > num_fatorial)
            {
                cout << "Número inválido. r não pode ser maior que n.\n";
            }
            else
            {
                cout << "Arranjo Simples 1(" << num_fatorial << ", " << r << ") é " << arranjoSimples(num_fatorial, r) << endl;
            }
            break;
        case 3:
            // Calcula a combinação simples
            cout << "Digite o total de elementos (n): ";
            cin >> num_fatorial;
            cout << "Digite o número de elementos escolhidos (k): ";
            cin >> r;
            if (r > num_fatorial)
            {
                cout << "Número inválido. k não pode ser maior que n.\n";
            }
            else
            {
                cout << "Combinação Simples 2(" << num_fatorial << ", " << r << ") é " << combinacaoSimples(num_fatorial, r) << endl;
            }
            break;
        case 4:
            // Encerra o programa
            cout << "Saindo...\n";
            break;
        default:
            // Trata opções inválidas
            cout << "Opção inválida. Tente novamente.\n";
            break;
        }
        cout << endl; // Adiciona uma linha em branco para clareza
    } while (opcao != 4); // Continua o loop até o usuário escolher a opção 4 para sair

    return 0; // Encerra o programa
}
