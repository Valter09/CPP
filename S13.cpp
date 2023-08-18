#include <iostream>
using namespace std;
int main(){
    float Valor1, Valor2, Valor3;
    cout<<"Digite o primeiro valor:"<<endl;
    cin>>Valor1;
    cout<<"Digite o segundo valor:"<<endl;
    cin>>Valor2;
    cout<<"Digite o terceiro valor:"<<endl;
    cin>>Valor3;
    if (Valor1>Valor2>Valor3){
        cout<<"O maior valor é:"<<Valor1<<endl;
        }
    if (Valor2>Valor1>Valor3){
            cout<<"O maior valor é:"<<Valor2<<endl;
            }else{
            cout<<"O maior valor é:"<<Valor3<<endl;
            } 
            return 0;
            }