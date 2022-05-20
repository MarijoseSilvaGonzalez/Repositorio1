// Example program
#include <iostream>
#include <string>
#include<stdlib.h>
#include<math.h>
#include <fstream>
using namespace std;

struct Persona{
string nombre;
string apellido;
string hora;
int cantidad;
float iva;
float subtotal;
int precio;
float total;
};

int main(){
Persona personas[3];
int n=1;
int i;
int decision;
int opcion;


while(n==1){
 
cout << "Bienvenid@ a la Clinica White Smiles"<<endl<<endl;
cout<<"¿En que lo podemos ayudar?"<<endl;
cout<<"1. Agendar cita"<<endl;
cout<<"2. Modificar cita"<<endl;
cout<<"3. Eliminar cita"<<endl;
cout<<"4. Lista de citas vigentes"<<endl;
cout<<"5. Limpiar pantalla"<<endl;
cout<<"6. Salir de la pagina"<<endl;
cin>>opcion;

switch (opcion) {
  case 1:
    do{
for(int i=0;i<3;i++){
cout<<"Numero de paciente:"<<i+1<<"\n";
cout<<"Ingrese el nombre (solo nombre) del paciente:"<<endl;
cin>>personas[i].nombre;
cout<<"Ingrese el primer apellido del paciente:"<<endl;
cin>>personas[i].apellido;
cout<<"Ingrese hora para cita:"<<endl;
cin>>personas[i].hora;
cout<<"Ingrese cantidad:"<<endl;
cin>>personas[i].cantidad;
    int numero;
    cout<<"Elija que tratamiento desea:"<<endl;
    cout<<"7. Blanqueamiento"<<endl;
    cout<<"8. Ortodoncia"<<endl;
    cout<<"9. Protesis dentales"<<endl;
    cout<<"10. Implantes"<<endl;
    cout<<"11. Cirugía oral"<<endl;
    cout<<"12. Carillas dentales"<<endl;
    cout<<"Ingrese el numero de la opcion deseada:";
    cin>>numero;

  if (numero==7) {
cout<<"Consiste en eliminar del esmalte por medio de sustancias químicas, todo aquello que altere su color original. Pesos: $5,000."<<endl;
int b;
b=1;
while(b==1){
cout<<"Ingrese el precio dado (sin el simbolo ni coma):"<<endl;
cin>>personas[i].precio;
if(personas[i].precio == 5000){
b=2;  
}
else{
  cout<<"Precio incorrecto. Intente de nuevo."<<endl;
}
}
}
    else if (numero==8) {
      cout<<"Es el tratamiento odontológico que implica el uso de aparatos removibles o brackets para enderezar los dientes, cerrar espacios entre ellos, alinearlos o corregir la mordida irregular. Precio: $4,000."<<endl;
int b;
b=1;
while(b==1){
cout<<"Ingrese el precio dado (sin el simbolo ni coma):"<<endl;
cin>>personas[i].precio;
if(personas[i].precio == 4000){
b=2;  
}
else{
  cout<<"Precio incorrecto. Porfavor, intente de nuevo."<<endl;
}
}
}
    else if (numero==9) {
      cout<<"Son dispositivos protésicos construidos para reemplazar los dientes perdidos, y están soportadas por los tejidos blandos y duros de la cavidad bucal. Precio:$5,000."<<endl;
int b;
b=1;
while(b==1){
cout<<"Ingrese el precio dado (sin el simbolo ni coma):"<<endl;
cin>>personas[i].precio;
if(personas[i].precio == 5000){
b=2;  
}
else{
  cout<<"Precio incorrecto. Intente de nuevo."<<endl;
}
}
  }
    else if (numero==10) {
      cout<<"Es como una raíz artificial, en forma de tornillo hecho con un material inocuo como es el titanio, y que tiene la capacidad de unirse al hueso (osteointegración) y fijar ese implante, una pieza de imitación, que hace las funciones de esta pieza sin ninguna molestia. Precio:$9,000."<<endl;
int b;
b=1;
while(b==1){
cout<<"Ingrese el precio dado (sin el simbolo ni coma):"<<endl;
cin>>personas[i].precio;
if(personas[i].precio == 9000){
b=2;  
}
else{
  cout<<"Precio incorrecto. Intente de nuevo."<<endl;
}
}
  }  
    else if (numero==11) {
      cout<<"Es una especialidad de la Odontología que trata del diagnóstico y tratamiento quirúrgico de enfermedades, heridas y defectos de la boca y la estructura dental. Precio:$5,000."<<endl;
int b;
b=1;
while(b==1){
cout<<"Ingrese el precio dado (sin el simbolo ni coma):"<<endl;
cin>>personas[i].precio;
if(personas[i].precio == 5000){
b=2;  
}
else{
  cout<<"Precio incorrecto. Intente de nuevo."<<endl;
}
}
  }
    else if (numero==12) {
      cout<<"Son procedimientos odontológicos restaurativos encaminados al “enmascaramiento” de la superficie visible (o frente) del diente, con el fin de corregir problemas estéticos o patológicos de los dientes ocasionados por caries dental, restauraciones previas, fracturas, cambios de color o alteraciones de la forma dental.Precio:$1,000"<<endl;
int b;
b=1;
while(b==1){
cout<<"Ingrese el precio dado (sin el simbolo ni coma):"<<endl;
cin>>personas[i].precio;
if(personas[i].precio == 1000){
b=2;  
}
else{
  cout<<"Precio incorrecto. Intente de nuevo."<<endl;
}
}
    }
  }
    }while (decision==1);
break;
//////////////////////////
  case 2:{
int j, opcion;
cout<<"Elija que numero de cita quisiera modificar:"<<endl;
cin>>j;
j=j-1;
cout<<"¿Que le gustaría modificar? Ingrese el numero con la opcion deseada:"<<endl;
cout<<"13. Nombre del paciente"<<endl;
cout<<"14. Apellido del paciente"<<endl;
cout<<"15. Hora"<<endl;
cout<<"16. Cantidad"<<endl;
cin>>opcion;
switch (opcion){    
  case 13:
      for(int i=j;i==j;i++){
        while(getchar()!='\n');
        cout<<"Ingrese nombre nuevo"<<endl;
       cin>>personas[i].nombre;
      }
    break;
    case 14:      
      for(int i=j;i==j;i++){
        while(getchar()!='\n');
        cout<<"Ingrese apellido nuevo"<<endl;
       cin>>personas[i].apellido;
      }
    break;
    case 15:
      for(int i=j;i==j;i++){
        while(getchar()!='\n');
        cout<<"Ingrese hora nueva"<<endl;
       cin>>personas[i].hora;
      }
    break;
    case 16:
      for(int i=j;i==j;i++){
        while(getchar()!='\n');
        cout<<"Ingrese cantidad nueva"<<endl;
       cin>>personas[i].cantidad;
      }}

      break;
  }//case 2
//////////////////////////////
  case 3:{
int j;
    cout<<"Ingrese el numero de cita que desea eliminar:";
    cin>>j;
    j=j-1;
    for(int i=j;i==j;i++){
      cout<<"Eliminando registro"<<j+1<<endl;
      personas[i].nombre="";
      personas[i].apellido="";
      personas[i].hora="";
      personas[i].cantidad=0;
      personas[i].precio=0;
    }
    }//case 3
/////////////////////////////
  case 4:{
      cout<<"Sus citas son las siguientes:"<<endl;
for(int i=0;i<3;i++){
personas[i].total=personas[i].precio * personas[i].cantidad;
cout<<"\nPersona#"<<i+1<<":"<<endl;
cout<<"Nombre:"<<personas[i].nombre<<endl;
cout<<"Apellido:"<<personas[i].apellido<<endl;
cout<<"Hora:"<<personas[i].hora<<endl;
cout<<"Cantidad:"<<personas[i].cantidad<<endl;
cout<<"Precio:"<<personas[i].precio<<endl;
cout<<"Total:"<<personas[i].total<<endl<<endl;
personas[i].subtotal=personas[i].cantidad*personas[i].precio;
personas[i].iva= 0.16 * personas[i].subtotal;
personas[i].total= personas[i].subtotal + personas[i].iva;

  
ofstream archivo;
  archivo.open("registro.txt");

  for(int i=0;i<3;i++){
    if(archivo.is_open()){
archivo<<"Nombre:"<<personas[i].nombre<<endl;
archivo<<"Apellido:"<<personas[i].apellido<<endl;
archivo<<"Hora:"<<personas[i].hora<<endl;
archivo<<"Cantidad:"<<personas[i].cantidad<<endl;
archivo<<"Precio:"<<personas[i].precio<<endl;
archivo<<"Total:"<<personas[i].total<<endl<<endl;
  } 
    else {
    cout << "Oops! Hubo un problema. Lo sentimos";
  }
    }
}
  }//case 4
////////////////////////////
  case 5:{
    system("cls");
    break;
    }//case 5
///////////////////////////
  case 6:{
    n = 0;
    cout<<"\nGracias por visitarnos ¡Vuelva pronto!"<<endl;
    break;
    }//switch
  default:
  cout<<"\nOpcion no valida.";
  }//main
  }
system("cls");
  }
