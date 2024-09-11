#include <iostream>
//biblioteca para ler string como por exemplo nome

using namespace std;
int main()
{
    //Dados do Personagem:

    //variáveis utilizadas que recebe nome
    string nome, apelido, origem, data_nascimento, aparencia;
    string sexo, classe_social, ocupacao, historia, motivacao;

    std::cout << "Digite o seu nome completo: \n";
    std::cin >> nome; //ler string

    std::cout << "Digite seu apelido: \n";
    std::cin >> apelido;

    std::cout << "Qual a sua Origem, Nacionalidade, etnia e local de nascimento?\n";
    std::cin >> origem;

    std::cout << "Data de nascimento: \n";
    std::cin >> data_nascimento;

    std::cout << "Sexo Masculino, feminino ou outro: \n";
    std::cin >> sexo;

    std::cout << "Classe social (Alta, média ou baixa): \n";
    std::cin >> classe_social;

    std::cout << "Ocupação: \n";
    std::cin >> ocupacao;

    std::cout << "História: \n";
    std::cin >> historia;

    std::cout << "Motivação: \n";
    std::cin >> motivacao;

    std::cout << "Aparência: \n";
    std::cin >> aparencia;

    //imprimir resultados que o usuario digitou
    std::cout << "_________________________DADOS DO PERSONAGEM _________________________ " << "\n"<< std::endl;
    std::cout << "Seu nome: " <<  "\n" << nome << "\nSeu apelido: " << "\n" << apelido << "\nSua origem: " << "\n" << origem << std::endl;
    std::cout << "\nData de Nascimento: " << "\n" << data_nascimento << "\nSeu sexo: " <<  "\n" << sexo << std::endl;
    std::cout << "\nSua classe social: " << "\n" << classe_social << "\nSua História: " << "\n" << historia << std::endl;
    std::cout << "\nSua Motivação: " <<  "\n" << motivacao << "\nSua aparência: " << "\n" << aparencia << std::endl;
    std::cout << "_________//________________//_________________________ "<< std::endl;
    
    // Atributos:
    //variável que recebe números inteiros
    int forca, destreza, constituicao, inteligencia, sabedoria, carisma;

    std::cout << "Digite sua força: \n";
    std::cin >> forca;

    std::cout << "Digite sua agilidade e coordenação: \n";
    std::cin >> destreza;

    std::cout << "Digite sua resistência e saúde: \n";
    std::cin >> constituicao;

    std::cout << "Digite sua capacidade de raciocínio e aprendizado: \n";
    std::cin >> inteligencia;

    std::cout << "Digite sua percepção e intuição: \n";
    std::cin >> sabedoria;

    std::cout << "Digite sua força de vontade e persuasão: \n";
    std::cin >> carisma;

    std::cout << "_________________________ATRIBUTOS _________________________ " << "\n"<< std::endl;
    std::cout << "Força: " << "\n" << forca << std::endl;
    std::cout << "Destreza: " << "\n" << destreza << std::endl;
    std::cout << "Constituição: " << "\n" << constituicao << std::endl;
    std::cout << "Inteligencia: " << "\n" << inteligencia << std::endl;
    std::cout << "Sabedoria: " << "\n" << sabedoria << std::endl;
    std::cout << "Carisma: " << "\n" << carisma << std::endl;
    std::cout << "_________//_______________//__________________________ " << "\n"<< std::endl;

    //Habilidades:

    int armas_de_fogo, armas_brancas, atletismo, furtividade, infiltracao, lutar;
    int medicina, persuasao, tecnologia, conducao, etiqueta, linguas;

    std::cout << "Digite Sua habilidade com armas de fogo: \n";
    std::cin >> armas_de_fogo;

    std::cout << "Digite Sua habilidade com armas brancas: \n";
    std::cin >> armas_brancas;

    std::cout << "Digite Sua capacidade de realizar feitos físicos: \n";
    std::cin >> atletismo;

    std::cout << "Digite Sua habilidade de se mover sem ser detectado: \n";
    std::cin >> furtividade;

    std::cout << "Digite Sua habilidade de entrar em lugares seguros: \n";
    std::cin >> infiltracao;

    std::cout << "Digite Sua habilidade de lutar corpo a corpo: \n";
    std::cin >> lutar;

    std::cout << "Digite Sua habilidade de tratar ferimentos: \n";
    std::cin >> medicina;

    std::cout << "Digite Sua habilidade de convencer outras pessoas: \n";
    std::cin >> persuasao;

    std::cout << "Digite Sua habilidade de usar e consertar tecnologia: \n";
    std::cin >> tecnologia;

    std::cout << "Digite Sua habilidade de dirigir veículos: \n";
    std::cin >> conducao;

    std::cout << "Digite Sua familiaridade com as regras sociais: \n";
    std::cin >> etiqueta;

    std::cout << "Quantos idiomas você fala: \n";
    std::cin >> linguas;

    std::cout << "_________________________HABILIDADES_________________________ " << "\n"<< std::endl;
    std::cout << "Armas de fogo: \n" <<armas_de_fogo << "\nArmas brancas: \n" << armas_brancas << std::endl;
    std::cout << "\nAtletismo: \n"  << atletismo << "\nFurtividade: \n" << furtividade << std::endl;
    std::cout << "\nInfiltração: \n" << infiltracao << "\nLutar: \n" << lutar << std::endl;
    std::cout << "\nMedicina: \n" << medicina << "\nPersuasão: \n" << persuasao << std::endl;
    std::cout << "\nTecnologia: \n" << tecnologia << "\nCondução: \n" << conducao << std::endl;
    std::cout << "\nEtiqueta: \n" << etiqueta << "\nLinguas: \n" << linguas << std::endl;
    std::cout << "__________//_______________//_________________________ " << "\n"<< std::endl;
    //Implante Cibernético:

    string nome_implante, localizacao,funcao;
    int custo;

    std::cout << "Digite o implante cibernetico: \n";
    std::cin >> nome_implante;

    std::cout << "Qual a localização: \n";
    std::cin >> localizacao;

    std::cout << "Qual a função: \n";
    std::cin >> funcao;

    std::cout << "Custos: \n";
    std::cin >> custo;

    std::cout << "_________________________INPLANTE CIBERNÉTICO_________________________ " << "\n"<< std::endl;
    std::cout << "Nome do implante cibernético: \n" << nome_implante << std::endl;
    std::cout << "Localização: \n" << localizacao << std::endl;
    std::cout << "Função: \n" << funcao << std::endl;
    std::cout << "Custos: \n" << custo << std::endl;
    std::cout << "__________//_______________//_________________________ " << "\n"<< std::endl;

    //Equipamentos:

    string armas, armaduras, equipamentos;
    //variável para receber números quebrados
    double creditos;

    std::cout << "Digite as armas que você possui: \n";
    std::cin >> armas;

    std::cout << "Digite as armaduras que você possui: \n";
    std::cin >> armaduras;

    std::cout << "Digite os outros equipamentos que você possui, como granadas, kits médicos, etc: \n";
    std::cin >> equipamentos;

    std::cout << "Digite a quantidade de créditos que você possui: \n";
    std::cin >> creditos;

    std::cout << "Armas que você possui: \n" << armas<< std::endl;
    std::cout << "Armaduras que você possui: \n" << armaduras << std::endl;
    std::cout << "Outros equipamentos: \n" << equipamentos << std::endl;
    std::cout << "Quantidade de créditos que você possui: \n" << creditos << std::endl;

    //Dinheiro:
    //Outras Informações:

    int reputacao;
    string gangue, conexoes;

    std::cout << "Digite sua reputação nas ruas: \n";
    std::cin >> reputacao;

    std::cout << "Se você faz parte de uma gangue, qual é o nome da gangue? \n";
    std::cin >> gangue;

    std::cout << "Quais são seus contatos e aliados? \n";
    std::cin >> conexoes;

    std::cout << "_________________________DINHEIRO_________________________ " << "\n"<< std::endl;
    std::cout << "Reputação: \n" << reputacao<< std::endl;
    std::cout << "Gangue: \n" << gangue << std::endl;
    std::cout << "Aliados: \n" <<conexoes << std::endl;
    std::cout << "__________//_______________//_________________________ " << "\n"<< std::endl;
    return 0;
}