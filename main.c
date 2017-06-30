#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void RellenarArreglo(int a[]);
void ImprimirArreglo( int a[] );
int Mayor( int a[] );
int Menor( int a[] );

int main(int argc, char *argv[]) {
	int a[20];
	int mayor;
	int menor;
	RellenarArreglo(a);
	ImprimirArreglo(a);
	mayor=Mayor(a);
	printf("El numero mayor es %d\n", mayor);
	menor=Menor(a);
	printf("El numero menor es %d\n", menor);
	return 0;
}

void RellenarArreglo(int a[])
{
	int c = 0;
	srand (time(NULL));
	for(c=0; c<20; c++)
	{
		a[c]=rand() ;
	}
}

void ImprimirArreglo( int a[] )
{
	int c = 0;
	
	for(c=0; c<20; c++)
	{
		printf("%d\n",a[c]) ;
		
	}	
}

int Mayor( int a[] )
{
	int mayor=0;
	int c = 0;

	mayor=a[0];
	for(c=1; c<20; c++)
	{
		if(a[c]>mayor)
		{
			mayor=a[c];
		}
	}	
	return mayor;
}


int Menor( int a[] )
{
	int menor=0;
	int c = 0;
	menor=a[0];
	for(c=1;c<20; c++)
	{
		if(menor>a[c])
		{
			menor=a[c];
		}
	}	
	return menor;	
}
