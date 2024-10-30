# Ordenação de Vetores em C++

Este projeto implementa três algoritmos de ordenação em C++: Insertion Sort, Bubble Sort e Selection Sort. O usuário pode inserir um vetor de inteiros e o programa escolherá automaticamente o algoritmo de ordenação apropriado com base no tamanho do vetor.

## Funcionalidades

- **Insertion Sort**: Utilizado para vetores de até 20 elementos.
- **Bubble Sort**: Utilizado para vetores entre 21 e 30 elementos.
- **Selection Sort**: Utilizado para vetores com mais de 30 elementos.
- Entrada de dados interativa onde o usuário pode definir o número de elementos e seus valores.

## Como Usar

1. Compile o código em um ambiente que suporte C++ (por exemplo, g++ ou um IDE como Code::Blocks ou Visual Studio).
2. Execute o programa.
3. Insira a quantidade de elementos que você deseja ordenar.
4. Insira os elementos do vetor, um por um.
5. O programa irá ordenar o vetor e exibir a lista ordenada.

## Requisitos

- Compilador C++ (g++ recomendado)
- C++11 ou superior

## Estrutura do Código

### Funções de Ordenação

- **`void insertionSort(std::vector<int>& arr)`**: Ordena um vetor usando o algoritmo Insertion Sort.
- **`void bubbleSort(std::vector<int>& arr)`**: Ordena um vetor usando o algoritmo Bubble Sort.
- **`void selectionSort(std::vector<int>& arr)`**: Ordena um vetor usando o algoritmo Selection Sort.

### Função Principal

A função `main()` gerencia a entrada do usuário e a seleção do algoritmo de ordenação adequado com base no tamanho do vetor.

## Exemplo de Uso

```plaintext
Quantos elementos você deseja ordenar? 5
Digite os elementos:
34
7
23
32
5
Usando Insertion Sort.
Lista ordenada: 5 7 23 32 34
