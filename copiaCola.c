#include <stdio.h>

int 
main(void)

{
	char anyPhrase[41];
	char copiedPhrase[41];
	int i;

    printf("Copia e cola qualquer frase \n");
    printf("Digite uma frase qualquer:  \n");
    scanf("%s", anyPhrase);
         
	for(i=0;i<41;i++)
	{
        copiedPhrase[i] = anyPhrase[i];
	}

    printf("Aqui está a sua frase: \n");
	printf("%s\n", copiedPhrase);

    return 0;
}
