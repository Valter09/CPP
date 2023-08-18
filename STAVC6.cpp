#include <iostream>
using namespace std;
int main(){
    int numero;
    cout<<"Digite um número de 1 a 12:";
    cin>>numero;
    switch(numero){ 
        case 1:
        cout<<"O dia selecionado é janeiro"<<endl;
        break;AVC7.java
STAVC7.java:12: error: cannot find symbol
        operacao=leia.nextString();
                     ^
  symbol:   method nextString()
  location: variable leia of type Scanner
STAVC7.java:15: error: cannot find symbol
            case soma:
                 ^
  symbol:   variable soma
  location: class S4
STAVC7.java:19: error: cannot find symbol
            case subtração:
                 ^
  symbol:   variable subtração
  location: class S4
STAVC7.java:23: error: cannot find symbol
            case multiplicação:
[valter@fedora Códigos :(]$ java STAVC7.java
STAVC7.java:12: error: cannot find symbol
        operacao=leia.nextString();
                     ^
  symbol:   method nextString()
  location: variable leia of type Scanner
STAVC7.java:15: error: incompatible types: int cannot be converted to String
            case 1:
                 ^
STAVC7.java:19: error: incompatible types: int cannot be converted to String
[valter@fedora Códigos :(]$ java STAVC7.java
Digite o primeiro valor:13
Digite o segundo valor:12
Escolha a operação desejada:subtração
1
[valter@fedora Códigos :(]$ java STAVC8.java
STAVC8.java:10: error: orphaned case
[valter@fedora Códigos :(]$ java STAVC8.java
STAVC8.java:10: error: orphaned case
[valter@fedora Códigos :(]$ java STAVC8.java
STAVC8.java:10: error: orphaned case
            case 10:
            ^
STAVC8.java:12: error: ')' expected
            System.out.println("O valor da compra é:"(quantidadedecopias*1,50));
                                                     ^
STAVC8.java:12: error: not a statement
[valter@fedora Códigos :(]$ java STAVC8.java
STAVC8.java:10: error: orphaned case
            case 10:
            ^
STAVC8.java:12: error: ')' expected
            System.out.println("O valor da compra é:"(quantidadedecopias*1,50));
                                                     ^
STAVC8.java:12: error: not a statement
[valter@fedora Códigos :(]$ java STAVC8.java
STAVC8.java:10: error: orphaned case
            case 10:
            ^
STAVC8.java:12: error: ')' expected
            System.out.println("O valor da compra é:"(quantidadedecopias*1,50));
                                                     ^
STAVC8.java:12: error: not a statement


        case 2:
        cout<<"O dia selecionado é fevereiro"<<endl;
        break;

        case 3:
        cout<<"O dia selecionado é março"<<endl;
        break;

        case 4:
        cout<<"O dia selecionado é abril"<<endl;
        break;

        case 5:
        cout<<"O dia selecionado é maio"<<endl;
        break;

        case 6:
        cout<<"O dia selecionado é junho"<<endl;
        break;

        case 7:
        cout<<"O dia selecionado é julho"<<endl;
        break;

        case 8:
        cout<<"O dia selecionado é agosto"<<endl;
        break;

        case 9:
        cout<<"O dia selecionado é setembro"<<endl;
        break;

        case 10:
        cout<<"O dia selecionado é outubro"<<endl;
        break;

        case 11:
        cout<<"O dia selecionado é novembro"<<endl;
        break;

        case 12:
        cout<<"O dia selecionado é dezembro"<<endl;
        break;

        default:
        cout<<"O valor é inválido"<<endl;

        }
        return 0;
        }