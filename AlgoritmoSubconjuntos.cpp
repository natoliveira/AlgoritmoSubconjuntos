#include <iostream>
#include <math.h>

using namespace std;

void pintLista(int *lista,  int n){
    int ii;
    cout << "Subconjunto = ";
    int vazio = 1;
    for(ii=0;ii<n;ii++){
        if(lista[ii] == 1){
            cout << ii<<" ";
            vazio = 0;
        }
    }
    if(vazio){
        cout << "Vazio";
    }
    cout << endl;
}

void subConjunto(int numero)
{
    int ii, jj, aux,lista[numero]= {0};
    for (ii = pow(2,numero)-1; ii >= 0; ii--) {
        aux= ii;
        for (jj = numero; jj > 0; jj--){
            if (aux % 2 == 0){
                lista[jj-1] = 0;
            }
            else{
                lista[jj-1] = 1;
            }
            aux = aux / 2;
        }
        pintLista(lista,numero);
    }
}

int main()
{
    subConjunto(5);
    return 0;
}
