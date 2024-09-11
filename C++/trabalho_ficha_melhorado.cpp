#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    // Dados do Personagem:

    // Variáveis para armazenar as informações do personagem
    string nome, apelido, origem, data_nascimento, aparencia;
    string sexo, classe_social, ocupacao, historia, motivacao;

    // Leitura das informações do personagem
    cout << "Digite o seu nome completo: ";
    getline(cin, nome);

    cout << "Digite seu apelido: ";
    getline(cin, apelido);

    cout << "Qual a sua origem, nacionalidade, etnia e local de nascimento? ";
    getline(cin, origem);

    cout << "Data de nascimento: ";
    getline(cin, data_nascimento);

    cout << "Sexo (Masculino, Feminino ou Outro): ";
    getline(cin, sexo);

    cout << "Classe social (Alta, Média ou Baixa): ";
    getline(cin, classe_social);

    cout << "Ocupação: ";
    getline(cin, ocupacao);

    cout << "História: ";
    getline(cin, historia);

    cout << "Motivação: ";
    getline(cin, motivacao);

    cout << "Aparência: ";
    getline(cin, aparencia);

    // Imprime os dados do personagem
    cout << "\n_________________________DADOS DO PERSONAGEM_________________________\n";
    cout << "Nome: " << nome << "\nApelido: " << apelido << "\nOrigem: " << origem << "\n";
    cout << "Data de Nascimento: " << data_nascimento << "\nSexo: " << sexo << "\n";
    cout << "Classe Social: " << classe_social << "\nHistória: " << historia << "\n";
    cout << "Motivação: " << motivacao << "\nAparência: " << aparencia << "\n";
    cout << "______________________________________________________________________\n";

    // Atributos:
    int forca, destreza, constituicao, inteligencia, sabedoria, carisma;

    cout << "Digite sua força: ";
    cin >> forca;

    cout << "Digite sua agilidade e coordenação: ";
    cin >> destreza;

    cout << "Digite sua resistência e saúde: ";
    cin >> constituicao;

    cout << "Digite sua capacidade de raciocínio e aprendizado: ";
    cin >> inteligencia;

    cout << "Digite sua percepção e intuição: ";
    cin >> sabedoria;

    cout << "Digite sua força de vontade e persuasão: ";
    cin >> carisma;

    cout << "\n_________________________ATRIBUTOS_________________________\n";
    cout << "Força: " << forca << "\nDestreza: " << destreza << "\nConstituição: " << constituicao << "\n";
    cout << "Inteligência: " << inteligencia << "\nSabedoria: " << sabedoria << "\nCarisma: " << carisma << "\n";
    cout << "____________________________________________________________\n";

    // Habilidades:
    int armas_de_fogo, armas_brancas, atletismo, furtividade, infiltracao, lutar;
    int medicina, persuasao, tecnologia, conducao, etiqueta, linguas;

    cout << "Digite sua habilidade com armas de fogo: ";
    cin >> armas_de_fogo;

    cout << "Digite sua habilidade com armas brancas: ";
    cin >> armas_brancas;

    cout << "Digite sua capacidade de realizar feitos físicos: ";
    cin >> atletismo;

    cout << "Digite sua habilidade de se mover sem ser detectado: ";
    cin >> furtividade;

    cout << "Digite sua habilidade de entrar em lugares seguros: ";
    cin >> infiltracao;

    cout << "Digite sua habilidade de lutar corpo a corpo: ";
    cin >> lutar;

    cout << "Digite sua habilidade de tratar ferimentos: ";
    cin >> medicina;

    cout << "Digite sua habilidade de convencer outras pessoas: ";
    cin >> persuasao;

    cout << "Digite sua habilidade de usar e consertar tecnologia: ";
    cin >> tecnologia;

    cout << "Digite sua habilidade de dirigir veículos: ";
    cin >> conducao;

    cout << "Digite sua familiaridade com as regras sociais: ";
    cin >> etiqueta;

    cout << "Quantos idiomas você fala: ";
    cin >> linguas;

    cout << "\n_________________________HABILIDADES_________________________\n";
    cout << "Armas de fogo: " << armas_de_fogo << "\nArmas brancas: " << armas_brancas << "\n";
    cout << "Atletismo: " << atletismo << "\nFurtividade: " << furtividade << "\n";
    cout << "Infiltração: " << infiltracao << "\nLutar: " << lutar << "\n";
    cout << "Medicina: " << medicina << "\nPersuasão: " << persuasao << "\n";
    cout << "Tecnologia: " << tecnologia << "\nCondução: " << conducao << "\n";
    cout << "Etiqueta: " << etiqueta << "\nLínguas: " << linguas << "\n";
    cout << "____________________________________________________________\n";

    // Implante Cibernético:
    string nome_implante, localizacao, funcao;
    int custo;

    cout << "Digite o implante cibernético: ";
    getline(cin >> ws, nome_implante); // `ws` para limpar o buffer antes de `getline`

    cout << "Qual a localização: ";
    getline(cin, localizacao);

    cout << "Qual a função: ";
    getline(cin, funcao);

    cout << "Custos: ";
    cin >> custo;

    cout << "\n_________________________IMPLANTE CIBERNÉTICO_________________________\n";
    cout << "Nome do implante cibernético: " << nome_implante << "\nLocalização: " << localizacao << "\n";
    cout << "Função: " << funcao << "\nCustos: " << custo << "\n";
    cout << "______________________________________________________________________\n";

    // Equipamentos:
    string armas, armaduras, equipamentos;
    double creditos;

    cout << "Digite as armas que você possui: ";
    getline(cin >> ws, armas);

    cout << "Digite as armaduras que você possui: ";
    getline(cin, armaduras);

    cout << "Digite os outros equipamentos que você possui (granadas, kits médicos, etc): ";
    getline(cin, equipamentos);

    cout << "Digite a quantidade de créditos que você possui: ";
    cin >> creditos;

    cout << "\n_________________________EQUIPAMENTOS_________________________\n";
    cout << "Armas que você possui: " << armas << "\nArmaduras que você possui: " << armaduras << "\n";
    cout << "Outros equipamentos: " << equipamentos << "\nQuantidade de créditos: " << creditos << "\n";
    cout << "____________________________________________________________\n";

    // Dinheiro e Outras Informações:
    int reputacao;
    string gangue, conexoes;

    cout << "Digite sua reputação nas ruas: ";
    cin >> reputacao;

    cout << "Se você faz parte de uma gangue, qual é o nome da gangue? ";
    getline(cin >> ws, gangue);

    cout << "Quais são seus contatos e aliados? ";
    getline(cin, conexoes);

    cout << "\n_________________________OUTRAS INFORMAÇÕES_________________________\n";
    cout << "Reputação: " << reputacao << "\nGangue: " << gangue << "\nAliados: " << conexoes << "\n";
    cout << "______________________________________________________________________\n";

    return 0;
}
