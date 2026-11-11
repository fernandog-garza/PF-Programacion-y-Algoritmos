#include <iostream>
using namespace std;
void dibujarEspacio(){
    cout<<" ";
}
void dibujarPunto(){
    cout<<"*";
}
void dibujarLinea(int n){
    for(int i=0;i<n;i++){
        dibujarPunto();
    }
}
void dibujarCuadrado(int n){
    for(int i=0;i<n;i++){
        dibujarLinea(n);
        cout<<endl;

    }
}
void dibujarRectangulo(int n, int m){
    for(int i=1;i<=m;i++){
        dibujarLinea(n);
        cout<<endl;
    }
}
void dibujarPiramide(int n){
    int m=(n+1)/2;
    for(int i=0;i<=m;i++){
        int puntos=(2*i)+1;
        int espacios=(n-puntos+3)/2;
        for(int j=0;j<espacios;j++){
            dibujarEspacio();
        }
        dibujarLinea(puntos);
        cout<<endl;
    }
}
void dibujarPiramideInvertida(int n){
    int m=(n+1)/2;
    for(int i=0;i<=m;i++){
        int puntos=(n-2*i);
        int espacios=(n-puntos)/2;
        for(int j=0;j<espacios;j++){
            dibujarEspacio();
        }
        dibujarLinea(puntos);
        cout<<endl;
    }
}
int main(){
    int n, m, x;
    string a;
    do{
        cout<<"Selecciona una figura que quieras dibujar"<<endl;
        cout<<"1) Cuadrado"<<endl;
        cout<<"2) Rectangulo"<<endl;
        cout<<"3) Piramide"<<endl;
        cout<<"4) Piramide invertida"<<endl;
        cout<<"Introduce aqui el numero de la figura: ";
        cin>>x;
        switch (x){
            case 1:
                cout<<"Introduce el valor del lado que quieres que tenga tu cuadrado: ";
                cin>>n;
                dibujarCuadrado(n);
                break;
            case 2:
                cout<<"Introduce el valor de la base del rectangulo: ";
                cin>>n;
                cout<<"Introduce el valor de la altura del rectangulo: ";
                cin>>m;
                dibujarRectangulo(n,m);
                break;
            case 3:
                cout<<"Introduce el valor del lado que quieres que tenga tu piramide (un numero impar): ";
                cin>>n;
                dibujarPiramide(n);
                break;
            case 4:
                cout<<"Introduce el valor del lado que quieres que tenga tu piramide invertida (un numero impar): ";
                cin>>n;
                dibujarPiramideInvertida(n);
                break;
            default:
                cout<<"Esa figura no esta disponible"<<endl;
                break;
        }
        cout<<"¿Quieres probar otra figura? ";
        cin>>a;
    } while(a=="si"||a=="Si"||a=="ok"||a=="okay"||a=="Ok"||a=="OK"||a=="OKAY"||a=="SI");
    cout<<"Gracias por probar este codigo";
    return 0;
}