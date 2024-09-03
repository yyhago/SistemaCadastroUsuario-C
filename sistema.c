#include <stdio.h>  // Biblioteca padrão de entrada e saída
#include <string.h> // Biblioteca para manipulação de strings

#define MAX_USERS 100   // Define o número máximo de usuários
#define LENGTH_NAME 50  // Define o tamanho máximo do nome de usuário
#define LENGTH_EMAIL 50 // Define o tamanho máximo do e-mail do usuário

// Define a estrutura Usuario com nome e e-mail
typedef struct {
  char nome[LENGTH_NAME];   // Define o nome do usuário
  char email[LENGTH_EMAIL]; // Define o e-mail do usuário
} Usuario;

// Função para adicionar um novo usuário ao array
void addUser(Usuario usuarios[], int *total) {
  // Verifica se o número máximo de usuários foi atingido
  if (*total >= MAX_USERS) {
    printf("Número máximo de usuários atingido.\n");
    return;
  }

  // Lê o nome do usuário
  printf("Digite o nome do usuário: ");
  fgets(usuarios[*total].nome, LENGTH_NAME, stdin);
  usuarios[*total].nome[strcspn(usuarios[*total].nome, "\n")] =
      '\0'; // Remove o caractere de nova linha

  // Lê o e-mail do usuário
  printf("Digite o e-mail do usuário: ");
  fgets(usuarios[*total].email, LENGTH_EMAIL, stdin);
  usuarios[*total].email[strcspn(usuarios[*total].email, "\n")] =
      '\0'; // Remove o caractere de nova linha

  (*total)++; // Incrementa o total de usuários
}

// Função para listar todos os usuários
void listUsers(Usuario usuarios[], int total) {
  for (int i = 0; i < total; i++) { // Itera sobre todos os usuários
    printf("Usuário %d:\n", i + 1);
    printf("Nome: %s\n", usuarios[i].nome);
    printf("E-mail: %s\n", usuarios[i].email);
  }
}

// Função para buscar um usuário pelo nome
void searchUsers(Usuario usuarios[], int total) {
  char nome[LENGTH_NAME]; // Variável para armazenar o nome a ser buscado
  printf("Digite o nome do usuário a buscar: ");
  fgets(nome, LENGTH_NAME, stdin);
  nome[strcspn(nome, "\n")] = '\0'; // Remove o caractere de nova linha

  // Buscar usuário no array
  for (int i = 0; i < total; i++) {
    if (strcmp(usuarios[i].nome, nome) == 0) { // Compara o nome do usuário
      printf("Usuário encontrado:\n");
      printf("Nome: %s\n", usuarios[i].nome);
      printf("E-mail: %s\n", usuarios[i].email);
      return; // Sai da função após encontrar o usuário
    }
  }

  printf("Usuário não encontrado.\n"); // Mensagem caso o usuário não seja
                                       // encontrado
}

// Função principal
int main() {
  Usuario usuarios[MAX_USERS]; // Array para armazenar os usuários
  int total = 0;               // Contador de usuários
  int opcao; // Variável para armazenar a opção escolhida pelo usuário

  do {
    // Exibe o menu de opções
    printf("\nMenu:\n");
    printf("1. Adicionar usuário\n");
    printf("2. Listar usuários\n");
    printf("3. Buscar usuário\n");
    printf("4. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    getchar(); // Consome o caractere '\n' deixado pelo scanf

    // Executa a ação de acordo com a opção escolhida
    switch (opcao) {
    case 1:
      addUser(usuarios, &total); // Adiciona um novo usuário
      break;
    case 2:
      listUsers(usuarios, total); // Lista todos os usuários
      break;
    case 3:
      searchUsers(usuarios, total); // Busca um usuário específico
      break;
    case 4:
      printf("Saindo...\n"); // Mensagem de saída
      break;
    default:
      printf("Opção inválida.\n"); // Mensagem para opções inválidas
      break;
    }
  } while (opcao != 4); // Continua o loop até que a opção 4 seja escolhida

  return 0; // Retorna 0 indicando que o programa terminou com sucesso
}
