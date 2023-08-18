#include <iostream>
using namespace std;
int main(){
    int anoatual, anodenascimento, idade;
    cout<<"Digite o ano atual:";
    cin>>anoatual;
    cout<<"Digite seu ano de nascimento:";
    cin>>anodenascimento;
    idade=(anoatual-anodenascimento);
    if(idade<16){
        cout<<"Não poderá votar esse ano"<<endl;
        }else{
            cout<<"Poderá votar esse ano"<<endl;
            }
            return 0;
            }