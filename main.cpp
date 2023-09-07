#include <iostream>
using namespace std;



int main(int argc, char** argv) 
{  

    int pisos;
    int i;
    int j;
    int k;
    

    printf("Ingrese la cantidad de pisos del arbol de Navidad: ");
    scanf("%d", &pisos);

    for (int i = 1; i <= pisos; i++) 
	{
        for (int j = 0; j < pisos - i; j++) 
		{
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++) 
		{
            printf("*");
        }
        printf("\n");
    }

    // Tronco del árbol
    for (int i = 0; i < pisos - 1; i++) {
        printf(" ");
    }
    printf("***\n");
	
	
	return 0;
}
