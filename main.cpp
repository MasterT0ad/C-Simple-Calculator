#include <iostream>
#include <iomanip>

int main() {
    char operation;
    double number1, number2, result;

    std::cout << "Entre com o operador: (+ - * /) " << '\n';
    std::cin >> operation;

    std::cout << "Digite dois numeros: " << '\n';
    std::cin >> number1 >> number2;

    switch (operation) {

        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if (number1 != 0) {
                result = number1 / number2;
            } else {
                std::cout << "Nao é possivel realizar uma divisao por 0." << '\n';
                return 1;
            }
            break;
        default:
            std::cout << "Erro no operador." << '\n';
            return 1;
    }

    std::cout << "O resultado é: " << result << '\n';
    return 0;
}