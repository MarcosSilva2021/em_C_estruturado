    #include <stdio.h>
    #include <stdlib.h>
    int main(void)
    {
      FILE *pont_arq; // cria vari�vel ponteiro para o arquivo
      char palavra[20]; // vari�vel do tipo string
      int i;
      
      //abrindo o arquivo com tipo de abertura w
      pont_arq = fopen("arquivo_palavra.txt", "w");
      
      //testando se o arquivo foi realmente criado
      if(pont_arq == NULL)
      {
      printf("Erro na abertura do arquivo!");
      return 1;
      }
      
      for(i=0;i<=5;i++){
	  
	  printf("Escreva uma palavra para testar gravacao de arquivo: ");
      scanf("%s", palavra[i]);
      
      //usando fprintf para armazenar a string no arquivo
      fprintf(pont_arq, "%s", palavra[i]);
	  }
      
      //usando fclose para fechar o arquivo
      fclose(pont_arq);
      
      printf("Dados gravados com sucesso!");
      
      
      return(0);
    }
