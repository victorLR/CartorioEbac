#include <stdio.h> //biblioteca de comunica��o com usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //bilioteca de aloca��es de texto por regi�o
#include <string.h> // biblioteca respons�vel por cuidar das strings

int registro()
{
   char arquivo[40];
   char cpf[40];
   char nome[40];
   char sobrenome[40];
   char cargo[40];
   
   printf("digite o cpf a ser cadastrado: ");
   scanf("%s", cpf);
   
   strcpy(arquivo, cpf); // respons�vel por copiar os valores das string
   
   FILE *file; // cria o arquivo
   file = fopen(arquivo, "w"); // cria o arquivo
   fprintf(file, "%s", cpf); // salvo valor da vari�vel
   fclose(file); // fecha o arquivo
   
   file = fopen(arquivo, "a");
   fprintf(file, ",");
   fclose(file);
   
   printf("digite o nome a ser cadastrado: ");
   scanf("%s", nome);
   
   file = fopen(arquivo, "a");
   fprintf(file, "%s", nome);
   fclose(file);
   
   file = fopen(arquivo, "a");
   fprintf(file, ",");
   fclose(file);
      
   printf("digite o sobrenome a ser cadastrado: ");
   scanf("%s", sobrenome);
   
   file = fopen(arquivo, "a");
   fprintf(file, "%s", sobrenome);
   fclose(file);
   
   file = fopen(arquivo, "a");
   fprintf(file, ",");
   fclose(file);
   
   printf("digite o cargo a ser cadastrado: ");
   scanf("%s", cargo);
   
   file = fopen(arquivo, "a");
   fprintf(file, "%s", cargo);
   fclose(file);
   
   return 0;
}

   int consulta()
{
   setlocale(LC_ALL, "portuguese"); // definindo linguagem
   char cpf[40];
   char conteudo[200];
   
   printf("digite o cpf a ser consultado: ");
   scanf("%s", cpf);
   
   FILE *file;
   file = fopen(cpf, "r");
   
   if (file == NULL)
{
   printf("N�o foi poss�vel abrir o arquivo, n�o localizado.\n");    	
}
   else
{
   while (fgets(conteudo, 200, file) != NULL)
{
   printf("\nEssas s�o as informa��es do usu�rio: ");
   printf("%s", conteudo);
   printf("\n\n");
}

   fclose(file);
}
   
   return 0;
}

int deletar()
{
   char cpf[40];
   
   printf("Digite o CPF do usu�rio a ser cancelado: ");
   scanf("%s", cpf);
   
   if (remove(cpf) == 0)
   
{
   printf("CPF cancelado com sucesso!\n");
}
   else
   
{
   printf("O usu�rio n�o se encontra no sistema!\n");
}
   
   return 0;
}

   int main()
{
   int opcao = 0;
   
   while (1)
{
   system("cls");
   setlocale(LC_ALL, "portuguese"); // definindo linguagem

   printf ("\tCart�rio da EBAC\n\n"); // in�cio do menu
   printf ("Escolha a op��o desejada do menu:\n\n");
   printf ("\t1 - Registrar nomes\n");
   printf ("\t2 - Consultar nomes\n");
   printf ("\t3 - Deletar nomes\n\n");
   printf ("\t4 - sair do sistema\n\n");
   printf ("Op��o: "); // fim do menu
   
   scanf("%d", &opcao); // armazenando a escolha do usu�rio
   
   system("cls");
   
   switch(opcao)
{
   case 1:
   registro();
   break;
   
   case 2:
   consulta();
   break;
   
   case 3:
   deletar();
   break;
   
   case 4:
   	printf("Obrigado por utilizar o sistema!");
   return 0;
   break;
   
   default:
   printf("Esta op��o n�o est� dispon�vel!\n");
   break;
}
      
   system("pause");
}

   return 0;
}

