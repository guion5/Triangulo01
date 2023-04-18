#include <iostream>
#include <cmath>

//
class Triangulo {
    private:
    double a, b, c;
    public:
    Triangulo(double lado1, double lado2, double lado3) {
        a = lado1;
        b = lado2;
        c = lado3;
    }
    
    //
    double calculaArea() {
        double p = (a + b +c) / 2.0;
        double area = std::sqrt(p * (p - a) * (p - b) * (p - c));
        return area;
        }
        //
        double getlado1() { return a; }
        double getlado2() { return b; }
        double getlado3() { return c; }
};

int main() {
    double a, b, c;
    
    //
    std::cout << "Digite as medidas dos lados do Triângulo X: ";
    std::cin >> a >> b >> c;
    Triangulo X(a, b , c);
    
    //
    std::cout << "Digite as medidas dos lados do Triângulo Y: ";
    std::cin >> a >> b >> c;
    Triangulo Y(a, b, c);
    
    //
    double areaX = X.calculaArea();
    double areaY = Y.calculaArea();
    
    //
    std::cout << "Área do Triângulo X: " << areaX << std::endl;
    std::cout << "Área do Triângulo Y: " << areaY << std::endl;
    
    //
    if (areaX > areaY){
        std::cout << "Triângulo X tem a maior área." << std::endl;
    }
    else if (areaY > areaX){
        std::cout << "Triângulo Y tem a maior área." << std::endl;
    }
    else {
        std::cout << "Ambos  os triângulos tem a mesma área." << std::endl;
    }

    return 0;
}
