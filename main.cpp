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

    cout << "area triangolo=" << (a*b)/2 <<  endl;
    cout <<"area quadrato=" << (a*a) << endl;
    cout  << "area rettangolo=" << (a*b)<< endl;
    cout << "area trapezio=" << ((a+b)*c)/2 << endl;

    return 0;
}

