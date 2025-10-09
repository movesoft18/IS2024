#pragma once


namespace mylib
{
    // результат:
    // 0 - нет корней
    // 1 - 1 корень
    // 2 - бесконечное мн. реш
    int linearEquation(
        double a, // коэф а
        double b, // коэф b
        double& x        // корень
    );

    // Функция определения простого числа
    bool isPrime(int number);

    // Функция отыскания корней квадратного уравнения
    int QuadraticEquation(double a, double b, double c,
        double& x1, double& x2);

}