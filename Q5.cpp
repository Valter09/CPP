#include <iostream>
using namespace std;
int main(){
    float nota1, nota2, media;
    cout<<"Digite a primeira nota:";
    cin>> nota1;
    cout<<"Digite a segunda nota:";
    cin>> nota2;
    media = (nota1+nota2)/2;
    cout<<"A média que o aluno tirou:" << media <<endl;
    if(media>=7){
        cout<<"Aluno aprovado"<<endl;
        }else{
            cout<<"Aluno reprovado"<<endl;
            }
            return 0;

        }