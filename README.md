# Sistema de Cadastro de Usuários em C

Este projeto é uma aplicação simples em C para gerenciar um cadastro de usuários. O sistema permite adicionar, listar e buscar usuários, demonstrando o uso de arrays, estruturas e manipulação de strings em C.

## Screenshots

![Primeira Tela](/pictureScreen/image.png)

## Funcionalidades

- **Adicionar Usuário**: Permite ao usuário adicionar um novo usuário ao sistema com nome e e-mail.
- **Listar Usuários**: Exibe todos os usuários cadastrados.
- **Buscar Usuário**: Permite buscar um usuário pelo nome.
- **Sair**: Encerra o programa.

## Estrutura do Código

O projeto consiste em um único arquivo fonte:

- `sistema.c`: Contém todas as funções e a lógica principal do programa, incluindo:
  - Estrutura `Usuario` para armazenar nome e e-mail.
  - Função `addUser` para adicionar um novo usuário.
  - Função `listUsers` para listar todos os usuários.
  - Função `searchUsers` para buscar um usuário pelo nome.
  - Função `main` que exibe o menu e gerencia a interação com o usuário.

## Como Compilar e Executar

1. **Compilação**: Utilize um compilador C como `gcc` para compilar o código. No terminal, execute:

   ```sh
   gcc -o sistema sistema.c
   ```

   Isso irá gerar um executável chamado `sistema`.

2. **Execução**: Após a compilação, execute o programa com:

   ```sh
   ./sistema
   ```

## Exemplo de Uso

```
Menu:
1. Adicionar usuário
2. Listar usuários
3. Buscar usuário
4. Sair
Escolha uma opção: 1

Digite o nome do usuário: João Silva
Digite o e-mail do usuário: joao.silva@example.com

Menu:
1. Adicionar usuário
2. Listar usuários
3. Buscar usuário
4. Sair
Escolha uma opção: 2

Usuário 1:
Nome: João Silva
E-mail: joao.silva@example.com

Menu:
1. Adicionar usuário
2. Listar usuários
3. Buscar usuário
4. Sair
Escolha uma opção: 3

Digite o nome do usuário a buscar: João Silva

Usuário encontrado:
Nome: João Silva
E-mail: joao.silva@example.com
```

## Contribuições

Sinta-se à vontade para contribuir para este projeto. Se você encontrar bugs ou tiver sugestões de melhorias, abra um issue ou um pull request.

## Licença

Este projeto é licenciado sob a MIT License.