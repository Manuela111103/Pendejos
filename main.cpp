#include <iostream>
#include <cmath>

class Triangulos{
 
private:

float Lado11;
float Lado2;
float Lado3;
float Angulo1;
float Angulo2;
float Angulo3;

public:

Triangulos(float LadoA, float LadoB, float AnguloC){
  Lado1 = LadoA;
  Lado2 = LadoB;
  Angulo3 = AnguloC;

  Lado3 = sqrt(Lado1* Lado1+ Lado2* Lado2 - 2* Lado1 * Lado2+ cos(Angulo3));
Angulo1 = asin (Lado1* sin (Angulo3) / Lado3);
  Angulo2 = asin (Lado2 * sin (Angulo3) / Lado3);
}
 float CalcularArea(){
   return 0.5* Lado1 * Lado2 * sin (Angulo3);
 }
float CalcularPerimetro(){
  return Lado1 + Lado2 + Lado3;
}

std::string TipoTriangulos(){
  if (Lado1 == Lado2 && Lado2 == Lado3)
    return "Equilatero";
  else if (Lado1 == Lado2 || Lado2 == Lado3 || Lado1 == Lado3)
    return "Isoceles";
  else
    return "Escaleno";
  
}
};


int main(){
  std::cout<<"Bienvenid@s A La calculadora De Triangulos" << "\n";
  
  std::cout<<"________________________________________"<<"\n";

  
  float LadoA, LadoB, AnguloC;
  std::cout<<"Digite Por favor El Largo Del Lado 1: ";
  std::cin>> LadoA;
  std::cout<<"Digite Por Favor El Largo Del Lado 2: ";
  std::cin>> LadoB;
  std::cout<<"Ingrese El Angulo Entre ELlos En Radiantes";
    std::cin>> AnguloC;

  Triangulos miTriangulos(LadoA, LadoB, AnguloC);

  std::cout<<"El Area Del Triangulo:"<< miTriangulos.CalcularArea()<< "\n";
  std::cout<<"El PErimetro Del Triangulo " << miTriangulos.CalcularPerimetro() <<"\n";

  std::cout<<"El Triangulo Es:"<< miTriangulos.TipoTriangulos()<<"\n";
  return 0;
}
