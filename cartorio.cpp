#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int registro()
{
   // código da função de registro
   // ...
}

int consulta()
{
   // código da função de consulta
   // ...
}

int deletar()
{
   // código da função de deletar
   // ...
}

int main()
{
   int opcao = 0;
   while (1)
   {
      char senhadigitada[10] = "a";
      printf("Cartório da Ebac\n\n");
      printf("Login de Administrador!\n\ndigite a sua senha:");
      scanf("%s", senhadigitada);

      if (strcmp(senhadigitada, "admin") == 0)
      {
         system("cls");
         setlocale(LC_ALL, "portuguese");
         printf("\tCartório da EBAC\n\n");
         printf("Escolha a opção desejada do menu:\n\n");
         printf("\t1 - Registrar nomes\n");
         printf("\t2 - Consultar nomes\n");
         printf("\t3 - Deletar nomes\n\n");
         printf("\t4 - Sair do sistema\n\n");
         printf("Opção: ");
         scanf("%d", &opcao);
         system("cls");

         switch (opcao)
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
               printf("Esta opção não está disponível!\n");
               break;
         }
      }
      
      else
      printf("\tsenha incorreta!\n\n");
   }

   return 0;
}
