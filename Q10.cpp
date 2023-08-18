#include <iostream>
using namespace std;
int main(){
    int horas, salario, salarioTotal, salarioBonus;
    cout<<"Quantas horas você trabalhou no mês:"<<endl;
    cin>>horas;
    cout<<"Quanto você ganha por hora:"<<endl;
    cin>>salario;
    salarioTotal=horas*salario;
    salarioBonus=salarioTotal*0.5+salarioTotal;
    if(horas>40){
    cout<<"Seu sálario é:"<<salarioBonus<<endl;
    }else{
        cout<<"Seu sálario é:"<<salarioTotal<<endl;
        }

            return 0;
        }