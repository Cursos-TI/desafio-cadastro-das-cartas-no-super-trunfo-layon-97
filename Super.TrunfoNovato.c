#include <stdio.h>

 
 int main() {
    // Variáveis para as cartas

    char estado1[40]; char estado2[40];
    char codigo1[15]; char codigo2[15];
    char cidade1[77]; char cidade2[77];
    float area1; float area2;
    float pib1; float pib2;
    int população1, população2;
    int pontos_turisticos1; int pontos_turisticos2;

     // Função para exibir os dados de uma carta
     // Carta Numero:1
   printf ("A \n"); 
   printf ("Estado:A");
   scanf("%c", &estado1);

   printf("3 \n");
   printf("Numero:3");
   scanf("%2s", codigo1);

   printf("Maceió.\n");
   printf("Nome Da Cidade: Maceió");
   printf("957916 \n");
   printf("População: 957916");
   scanf("%d",&população1);

   printf("50978 \n");
   printf("Área km²: 50978");
   scanf("%f", &area1);

   printf("50000000 \n");
   printf("Pib: 50000000");
   scanf("%f",&pib1);

   printf("15 \n");
   printf("Pontos Turisticos: 15");
   scanf("%d",&pontos_turisticos1);
    
   // Carta Numero:2

   printf("H \n");
   printf("Estado:H");
   Scanf("%c",&estado2);


   printf("1 \n");
   printf("Numero:1");
   scanf("%2s",&codigo2);

   printf("Goiás.\n");
   printf("Nome Da Cidade: Goiás");
   printf("70560 \n");
   printf("População: 70560");
   scanf("%d",&população2);

   printf("340086 \n");
   printf("Área km²: 340086");
   scanf("%f",&area2);

   printf("35000000");
   printf("Pib: 35000000");
   scanf("%f",&pib2);

   printf("7 \n");
   printf("Pontos turisticos: 7");
   scanf("%d",&pontos_turisticos2);

   // Coleta de dados Na tela (primeira carta)

   printf("Maceió\n");

   printf("Estado:'%c' \n",estado1 );
   printf("Codigo: %c%2s \n",codigo1);
   printf("Nome da Cidade: %s",cidade1);
   printf("População: %d \n",população1);
   printf("Área: %f.2f km² \n",area1);
   print("Pib: %,2f bilhões de reais\n",pib1);
   printf("Pontos Turisticos: %d \n",pontos_turisticos1);

    // Coleta de dados Na tela (segunda carta)

    printf("Goias\n");

    printf("Estado: '%c' \n",estado2);
    printf("Codigo: %c%2s \n",codigo2);
    print("Nome da Cidade: %s",cidade2);
    printf("Área: %f.2f km² \n ",area2);
    printf("Pib: %,2f bilhões de reais\n",pib2);
    printf("Pontos Turisticos: %d \n",pontos_turisticos2);






       return 0;

  }













