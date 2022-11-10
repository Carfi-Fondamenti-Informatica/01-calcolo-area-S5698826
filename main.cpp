#include <iostream>
using namespace std;
int main()
{
    float a=0;
    float b=0;
    float c=0;

    cout << "inseisci i dati per a=";
    cin>>a;
    cout << "inserisci i dati per b=";
    cin>>b;
    cout << "insrisci i dati per c=";
    cin>>c;

    float areatriangolo= (a*b)/2;
    float areaquadrato= (a*a);
    float areareattangolo= (a*b);
    float areatrapezio= ((a+b)*c)/2;

    cout << "area triangolo=" << areatriangolo <<  endl;
    cout <<"area quadrato=" << areaquadrato << endl;
    cout  << "area rettangolo=" << areareattangolo << endl;
    cout << "area trapezio=" << areatrapezio << endl;

    return 0;
}
