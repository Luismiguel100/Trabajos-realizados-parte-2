/******************************************************************************
Objetivo: Trabajar vectores con menu y modulos
Authores: Todos
Fecha: Abril 24/2021
*******************************************************************************/
#include <iostream>
#define TAM_MAX 45

using namespace std;

 //prototipo de las funciones
int menu();
int leerVector(float vector[]);
void sobrePromedio(float vector[], int n);

int main()
{
    int opcion;
    float vector[TAM_MAX];
    int n;
    
    n = leerVector(vector);
    
    
    do{
        opcion = menu();
        switch(opcion)
        {
            case 1: sobrePromedio(vector, n);
                    break;
            case 0: cout << "Fin programa **** \n";
                    break;
            default: cout << "Opcion invalida **";
        }
    }while(opcion != 0);
    
    return 0;
}

int menu()
{
    int opcion;
    
    system("cls");
    system("Color 4B");
    cout << "\n\n*****Menu de trabajo con vectores *** " << endl<<endl;
    cout << "1. Sobre promedio "<< endl;
    cout << "2. Nota mayor y menor "<< endl;
    cout << "3. Ganaron y Perdieron  "<< endl;
    cout << "4. Mostrar estudiantes "<< endl;
    cout << "0. Salir "<< endl;
    cout << "\n Ingrese una opcion ===>  ";
    cin >> opcion;
    
    return opcion;
    
}

int leerVector(float vector[])
{
int n;
int i;
cout<<"Ingrese total de estudiantes ===>"; cin>>n;
while(n < 1 or n> TAM_MAX)
{
    cout<<"Ingrese total de estudiantes valido ===> "; cin>>n;
}
 for(i = 0; i < n; i++)
 {
     cout<<"\nIngrese nota del estudiante  "<<i + 1<<" ===> ";
     while( vector [i] < 0.0 or vector[i] > 5.0)
     {
         cout<<"\n ** Ingrese nota valida del estudiante "<<i + 1<< " ===> "; cin >> vector[i];
     }
 }
    return n;
}

void sobrePromedio(float vector[], int n)
{   
    int i;
    float suma,promedio;
    suma= 0.0;
    int sobrePromedio =0;
    
    cout <<" Modulo sobre el promedio \n\n";
    for( i = 0; i<n; i++)
    {
        suma = suma + vector[i];
    }
    promedio = suma / n;
    sobrePromedio = 0;
    for( i = 0; i<n; i++)
    {
        if(vector[i] > promedio)
        {
            sobrePromedio = sobrePromedio + 1;
        }
    }
    cout << "El promedio es: " << promedio <<endl;
    cout << sobrePromedio<< "estudiantes sacaron notas superior al ppromedio "<< endl;
    
    system("pause");
}



