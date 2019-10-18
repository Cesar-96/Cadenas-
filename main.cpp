#include <iostream>

using namespace std;

int tam_cadena(char cadena[]);
int tam_cadenawhile(char cadena[]);
int tam_cadenarecursiva(char cadena[]);

int tam_recursivap(char *cadena)
{
    int tam=0;
    if(*cadena == '\0')
        return 0;
    return 1+tam_recursivap(++cadena);
}


void invertir_cade (char *cad)
{
    char *fin = cad + tam_cadena(cad) - 1;
    char t;
    while (fin > cad)
    {
        t= *cad;
        *cad = *fin;
        *fin = t;
        fin--;
        cad++;
    }
}

/*
void invertir_recursivo (char *cad)
    {
        int tam = sizeof cad;
        cout<< tam <<endl;
        char *fin= cad+tam_cadena(cad)-1;
        cout <<fin<<endl;
        char *ini= cad;
        if (*fin != cad)
    }


    */

    //Cadena-Palindrome
bool palindrome(char *chain, int tam){
    char *fin = chain+tam-1;
    bool val = true;
    while(--tam && val){
        if(*chain++ != *fin){
            val = false;
        }
        fin--;
    }
    return val;
}


void cambio(char &a, char &b){
    int t = a;
    a = b ;
    b = t ;
}



//InvertirRecursivo

void inverR(char *cadena,int tam){
    char *fin = cadena+--tam;
    if(cadena<fin){
        cambio(*cadena,*fin);
        inverR(++cadena,--tam);
    }
}




int main()
{
    char cadena[]= "oooo";
    char cadena1[]="hola mundo!!!!";
    //char cadena1[] = {'h','o','l','a','\0'};
    //cout << cadena1 <<endl;
    //cout<<cadena <<endl;
    //cout<<tam_cadenawhile(cadena)<<endl;
    //cout<<tam_cadena(cadena1)<<endl;
    //cout<< tam_cadenarecursiva(cadena)<<endl;
    //cout<<tam_recursivap(cadena)<<endl;
    //invertir_recursivo(cadena);
    invertir_cade(cadena);
    cout<<palindrome(cadena,4)<<endl;
    cout <<cadena<<endl;
    cout <<inverR(cadena1,tam_cadena(cadena1)) <<endl;

}

int tam_cadena(char cadena[])
{
    int tam=0;
    for(int i=0; cadena[i] != '\0'; i++)
        tam++;
    return tam;
}


int tam_cadenawhile (char *cadena)
{
    int tam=0;
    while (*cadena++ != '\0')
        {
            tam++;
        }
    return tam;
}

int tam_cadenarecursiva(char *cadena)
{
    if(*cadena == '\0')
        return 0;
    return 1+tam_cadenarecursiva(++cadena);
}

//palindrome iterativo y recursivo falta;
