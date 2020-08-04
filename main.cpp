#include <iostream>
#include <fstream>
void ingresedatos();
void Imprimir();
using namespace std;

int main() {
  
  int dato;
  ingresedatos();
  Imprimir();

}

void ingresedatos()
{
  int edad;
  string Nombre;
  string Apellido;
  ofstream archivodatos;
  archivodatos.open("Datos.txt",ios::out);

  cout << "Ingrese Su Nombre: ";
  getline(cin,Nombre);
  archivodatos<<Nombre << '\n';
  cout << "Ingrese Su Apellido: ";
  getline(cin,Apellido);
  archivodatos<< Apellido << '\n';
  cout << "Ingrese Su Edad: ";
  cin >> edad;
  archivodatos<<edad << '\n';

  archivodatos.close();
  

}

void Imprimir()
{
  string texto;
  ifstream archivodatos;
  archivodatos.open("Datos.txt",ios::in);
  if(archivodatos.fail())
  {
    cout << "No se pudo abrir";
  }else
  {
    while(!archivodatos.eof())
    {
     getline(archivodatos,texto);
      cout << texto << endl;
    }
  }
  archivodatos.close();
}