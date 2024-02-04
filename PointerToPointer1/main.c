#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

void print_names1(char **pa, size_t size)
{
	for(size_t i = 0; i < size; ++i)
	{
		printf("%s ", pa[i]);
	}
	printf("\n\n");
}

void print_names2(char **pa, size_t size)
{
	while(size--)
	{
		printf("%s ", *pa++);// adresi gelen pointer dizisinin elemanlari
	}
}

void sort_names(char **pa, size_t size)
{
	for(size_t i = 0; i < size - 1; ++i)
	{
		// printf("i: %d\n", i);
		for(size_t k = 0; k < size - 1 - i; ++k)
		{
			// printf("k: %d\n", k);
			if(strcmp(pa[k], pa[k + 1]) > 0)
			{
				char *ptemp = pa[k];
				pa[k] = pa[k + 1];
				pa[k + 1] = ptemp;
			}
		}
	}
}

int main()
{
	char *p[SIZE] = {
		"eren","eda","yavuz","onur","dilara","berna","ismet","ufuk","ogun","selin"
	};
	
	sort_names(p, SIZE);
	print_names1(p, SIZE);
	// print_names2(p, SIZE);
}

// elemanları pointer olan dizinin adresini alan fonksiyonların parametre degiskeni
// pointer to pointer olur.

