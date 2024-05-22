#include <iostream>
using namespace std;

/**
 * @api {get} /add Add two numbers
 * @apiGroup Calculator
 * @apiParam {Double} a First number
 * @apiParam {Double} b Second number
 * @apiDescription This function adds two numbers and returns the result.
 * @apiSuccess {Double} result The sum of the two numbers.
 * @apiError {String} error Error message if any.
 * @apiParamExample {json} Request-Example:
 *     {
 *       "a": 5,
 *       "b": 3
 *     }
 * @apiSuccessExample {json} Success-Response:
 *     {
 *       "result": 8
 *     }
 */
double add(double a, double b) {
    return a + b;
}

/**
 * @api {get} /subtract Subtract two numbers
 * @apiGroup Calculator
 * @apiParam {Double} a First number
 * @apiParam {Double} b Second number
 * @apiDescription This function subtracts the second number from the first and returns the result.
 * @apiSuccess {Double} result The difference of the two numbers.
 * @apiError {String} error Error message if any.
 * @apiParamExample {json} Request-Example:
 *     {
 *       "a": 5,
 *       "b": 3
 *     }
 * @apiSuccessExample {json} Success-Response:
 *     {
 *       "result": 2
 *     }
 */
double subtract(double a, double b) {
    return a - b;
}

/**
 * @api {get} /multiply Multiply two numbers
 * @apiGroup Calculator
 * @apiParam {Double} a First number
 * @apiParam {Double} b Second number
 * @apiDescription This function multiplies two numbers and returns the result.
 * @apiSuccess {Double} result The product of the two numbers.
 * @apiError {String} error Error message if any.
 * @apiParamExample {json} Request-Example:
 *     {
 *       "a": 5,
 *       "b": 3
 *     }
 * @apiSuccessExample {json} Success-Response:
 *     {
 *       "result": 15
 *     }
 */
double multiply(double a, double b) {
    return a * b;
}

/**
 * @api {get} /divide Divide two numbers
 * @apiGroup Calculator
 * @apiParam {Double} a First number
 * @apiParam {Double} b Second number
 * @apiDescription This function divides the first number by the second and returns the result. If the divisor is zero, an error message is returned.
 * @apiSuccess {Double} result The quotient of the two numbers.
 * @apiError {String} error Error message if division by zero occurs.
 * @apiParamExample {json} Request-Example:
 *     {
 *       "a": 6,
 *       "b": 3
 *     }
 * @apiSuccessExample {json} Success-Response:
 *     {
 *       "result": 2
 *     }
 * @apiErrorExample {json} Error-Response:
 *     {
 *       "error": "Division by zero!"
 *     }
 */
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        cout << "Ошибка: деление на ноль!" << endl;
        return 0;
    }
}

// Основная функция
int main() {
    double num1, num2;
    char operation;

    setlocale(LC_ALL, "Russian");

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;
    cout << "Введите второе число: ";
    cin >> num2;

    double result;

    switch (operation) {
    case '+':
        result = add(num1, num2);
        break;
    case '-':
        result = subtract(num1, num2);
        break;
    case '*':
        result = multiply(num1, num2);
        break;
    case '/':
        result = divide(num1, num2);
        break;
    default:
        cout << "Ошибка: неизвестная операция!" << endl;
        return 1;
    }

    cout << "Результат: " << result << endl;

    return 0;
}
