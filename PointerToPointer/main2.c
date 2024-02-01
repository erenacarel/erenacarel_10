#include <stdio.h>
#include <stdint.h>

unsigned char data[] = "Hello, World!";

char readChar(unsigned char** pptr)
{
	char c = **pptr;
	(*pptr)++;
	return c;
}

int main() 
{
    int x = 5;
    int *ptr1 = &x;  // Birinci seviyeli pointer
    int **ptr2 = &ptr1;  // İki seviyeli pointer
    int ***ptr3 = &ptr2; // Bu da üç seviyeli pointer oluyor herhalde

    // Değerlere erişim
    printf("Value of x:          %d\n", x);
    printf("Value of &x:         %d\n", &x);

    printf("Value using *ptr1:   %d\n", *ptr1);
    printf("Value using &ptr1:   %d\n", &ptr1);
    printf("Value using ptr1:    %d\n", ptr1);

    printf("Value using **ptr2:  %d\n", **ptr2);
    printf("Value using ptr2:    %d\n", ptr2);
    printf("Value using &ptr2:   %d\n", &ptr2);

    printf("Value using ***ptr3: %d\n", ***ptr3);
    printf("Value using ptr3:    %d\n", ptr3);
    printf("Value using &ptr3:   %d\n", &ptr3);    
    
}


/*
    Value of x:          5
    Value of &x:         6422300    // x'in adresini temsil eder
    Value using *ptr1:   5          // ptr'nin işaret ettiği yerdeki değeri alır, yani 5'i
    Value using &ptr1:   6422296    // ptr1'in bellekteki adresini temsil eder. 
    Value using ptr1:    6422300    // ptr1'in tuttuğu değeri(point ettiği) temsil eder, yani 5'in adresi
    Value using **ptr2:  5          // ptr2'nin işaret ettiği yerdeki değeri alır, yani 5'i
    Value using ptr2:    6422296    // ptr2'nin tuttuğu değeri(point ettiği) temsil eder, yani ptr1'in adresi
    Value using &ptr2:   6422292    // ptr2'nin bellekteki adresini temsil eder.
    Value using ***ptr3: 5          // ptr3'ün işaret ettiği yerdeki değeri alır, yani 5'i
    Value using ptr3:    6422292    // ptr3'ün tuttuğu değeri(point ettiği) temsil eder, yani ptr2'nin adresi
    Value using &ptr3:   6422288    // ptr3'ün bellekteki adresini temsil eder.
*/


