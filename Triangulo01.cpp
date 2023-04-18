#include <iostream>
#include <cmath>

//definição da classe triangulo e suas variáveis
class Triangulo {
    private:
    double a, b, c;
    public:
    Triangulo(double lado1, double lado2, double lado3) {
        a = lado1;
        b = lado2;
        c = lado3;
    }
    
    //calculo da área do triângulo
    double calculaArea() {
        double p = (a + b +c) / 2.0;
        double area = std::sqrt(p * (p - a) * (p - b) * (p - c));
        return area;
        }
    
        //PROXIMA AULA******
        double getlado1() { return a; }
        double getlado2() { return b; }
        double getlado3() { return c; }
};

int main() {
    double a, b, c;
    
    //interface para o usuário inserir a medida de cada lado do triângulo X
    std::cout << "Digite as medidas dos lados do Triângulo X: ";
    std::cin >> a >> b >> c;
    Triangulo X(a, b , c);
    
    //interface para o usuário inserir a medida de cada lado do triângulo Y
    std::cout << "Digite as medidas dos lados do Triângulo Y: ";
    std::cin >> a >> b >> c;
    Triangulo Y(a, b, c);
    
    //variáveis das áreas de X e Y chamando o cálculo
    double areaX = X.calculaArea();
    double areaY = Y.calculaArea();
    
    //interface do usuário com o valor da área dos triângulos X e Y
    std::cout << "Área do Triângulo X: " << areaX << std::endl;
    std::cout << "Área do Triângulo Y: " << areaY << std::endl;
    
    //condicionais comparando as áreas do triângulo e resultado que será exibido na interface para o usuário 
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
