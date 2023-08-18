#include <iostream>
using namespace std;
int main(){
    int numero;
    cout<<"Digite um número de 1 a 7:";
    cin>>numero;
    switch(numero){ 
        case 1:
        cout<<"O dia selecionado é domingo"<<endl;
        break;

        case 2:
        cout<<"O dia selecionado é segunda"<<endl;
        break;

        case 3:
        cout<<"O dia selecionado é terça"<<endl;
        break;

        case 4:
        cout<<"O dia selecionado é quarta"<<endl;
        break;

        case 5:
        cout<<"O dia selecionado é quinta"<<endl;
        break;

        case 6:
        cout<<"O dia selecionado é sexta"<<endl;
        break;

        case 7:
        cout<<"O dia selecionado é sábado"<<endl;
        break;

        default:
        cout<<"O valor é inválido"<<endl;

        }
        return 0;
        }
