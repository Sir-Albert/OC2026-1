#include <stdio.h>
extern void _imprimir(char*,char*);
extern int _primo(int);

int primoC(int numero);

int main ( void ) 
{
    char* str = "Hola mundo. \n";
    printf("%s", str);
    /*
    asm (
    ".intel_syntax noprefix;"
    "mov ax, '*';"
    "push edx;"
    "push ecx;"
    "push ebx;"
    "push eax;"

    "mov eax, 4;"
    "mov ebx, 1;"
    "mov ecx, esp;"
    "mov edx, 1;"
    "int 0x80;"

    "pop eax;"
    "pop ebx;"
    "pop ecx;"
    "pop edx;"
    ".att_syntax prefix;"     
    );
    
    
    _imprimir("\nABC","\nDEF");
    _imprimir("\nDEF","\nABC");
    _imprimir("\nDEF","\nABC");
    */
    printf("ES PRIMO: %d\n", _primo(3));
    printf("ES PRIMO: %d\n", primoC(21));
    printf("ES PRIMO: %d\n", _primo(13));
    printf("ES PRIMO: %d\n", _primo(11));
    printf("ES PRIMO: %d\n", _primo(21));
    printf("ES PRIMO: %d\n", _primo(21));
    printf("ES PRIMO: %d\n", _primo(21));
    
    printf("\n\n\r");
    return 0;
}


int primoC(int numero)
{
    int div;
    if(numero % 2 == 0)
        return 0;
    div = numero / 2 ;
    while(div>2)
    {
        if(numero % div == 0)
            return 0;
        div--;
    }
    return 1;
}