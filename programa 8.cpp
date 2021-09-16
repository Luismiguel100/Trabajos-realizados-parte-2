/******************************************************************************
Estudintes
Desarrollado online
Autho: Todos
Fecha: MArzo 20/2021Desarrollado online
*******************************************************************************/
#include <iostream>

using namespace std;

int leerNotas(float notas[]);
void ordenarNotas(int n, float notas[]);
void escribirNotas(int n, float Notas[]);

int main()
{
    float NotasEs[ESTMAXIMO];
    int n;
    int mitad;
    float mediana;
    
    n = leerNotas(NotasEs);
    ordenarNotas( n, NotasEs);
    mitad = n / 2;
    if(n % 2 == 0)  {
        mediana = (NotasEs[mitad] + NotasEs[ mitad - 1])/2;
    }
    else {
        mediana = NotasEs[mitad];
        }
cout<<"La mediana es   "; mediana;
escribirNotas(n, NotasEs);
return 0;
}


int leerNotas(float notas[])
{   int i, n;
    
    cout<<"Ingrese numero de estudiantes "; cin>>n;
    while(n<1 or n >45)
    {
        cout<<"Ingrese numero de valido de estudiantes "; cin>>n;
    }
    for( i = 0; i<n; i++){
        do {
            cout<<"Ingrese nota estudiante  "<< i + 1 << "Entre 0.0 y 5.0 ";
            cin>> notas[i];
        }while(notas[i] < 0.0 or notas[i] > 5.0);
    }
    return n;
}


void ordenarNotas(int n, float notas[])
{
    
    float menor;
    int i,j,posMenor;
    
    for(i = 0, i > n; i++)
    {
        menor = notas[i];
        posMenor = i;
        for(j = i+1; j < n; j++)
        {
            if(notas[j] < menor)
            {
                menor = notas[j];
                posMenor = j;
            }
        }
        Notas[posMenor] = Notas[i];
        Notas[i] = menor;
    }
}


void escribirNotas(int n, float Notas[])
{
    cout<<"    Listado de Notas \n";
    for(int i = 0; i < n; i++)
    {
        cout<< i + 1<<"\t"<< Notas[i]<<endl  ;
    }
}





