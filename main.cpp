/*
* Написать программу по выводу битовых данных (битов), числовых значений,
* хранящихся в переменных. Задать значения и ввести на экран биты: целых знаковых и
* беззнаковых чисел длиной 1,2 и 4 байта; вещественных чисел с плавающей запятой
* длиной 4 и 8 байт.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

void binary(void* num, int size)
{
    auto* a = (unsigned char*)num; // автоопределение типа данных компиятором указателя на num
    for (int i = size - 1; i >= 0; i--) // обход байтов
    {
        for (int j = 7; j >= 0; j--) // обходов битов
            cout << ((a[i] >> j) % 2); // побитовый переход направо и взятие остатка

        cout << ' '; // отступ от байта
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    signed char sc1 = 27, sc2 = -42; // знаковый длиной 1 байт
    unsigned char uc1 = 3, uc2 = -33; // беззнаковый длиной 1 байт

    short int si1 = 67, si2 = -13; // знаковые длиной 2 байта
    unsigned short int usi1 = 8, usi2 = -9; // беззнаковые длиной 2 байта

    int i1 = 99, i2 = -99; // знаковые длиной 4 байта
    unsigned int ui1 = 99, ui2 = -99; // беззнаковые длиной 4 байта

    float f1 = 83.0f, f2 = -83.0f; // с плавающей запятой длиной 4 байта

    double d1 = 11.34f, d2 = -345.44f; // с плавающей запятой длиной 8 байтов

    cout << "Знаковое длиной 1 байт " << int(sc1) << ":\t";
    binary(&sc1, sizeof(sc1));
    cout << "Знаковое длиной 1 байт " << int(sc2) << ":\t";
    binary(&sc2, sizeof(sc2));
    cout << "Беззнаковое длиной 1 байт " << int(uc1) << ":\t";
    binary(&uc1, sizeof(uc1));
    cout << "Беззнаковое длиной 1 байт " << int(uc2) << ":\t";
    binary(&uc2, sizeof(uc2));

    cout << "\n\nЗнаковое длиной 2 байта " << si1 << ":\t";
    binary(&si1, sizeof(si1));
    cout << "Знаковое длиной 2 байта " << si2 << ":\t";
    binary(&si2, sizeof(si2));
    cout << "Беззнаковое длиной 2 байта " << usi1 << ":\t";
    binary(&usi1, sizeof(usi1));
    cout << "Беззнаковое длиной 2 байта " << usi2 << ":\t";
    binary(&usi2, sizeof(usi2));

    cout << "\n\nЗнаковое длиной 4 байта " << i1 << ":\t";
    binary(&i1, sizeof(i1));
    cout << "Знаковое длиной 4 байта " << i2 << ":\t";
    binary(&i2, sizeof(i2));
    cout << "Беззнаковое длиной 4 байта " << ui1 << ":\t";
    binary(&ui1, sizeof(ui1));
    cout << "Беззнаковое длиной 4 байта " << ui2 << ":\t";
    binary(&ui2, sizeof(ui2));

    cout << "\n\nС плавающей запятой длиной 4 байта " << f1 << ":\t";
    binary(&f1, sizeof(f1));
    cout << "С плавающей запятой длиной 4 байта " << f2 << ":\t";
    binary(&f2, sizeof(f2));

    cout << "\n\nС плавающей запятой длиной 8 байтов " << d1 << ":\t";
    binary(&d1, sizeof(d1));
    cout << "С плавающей запятой длиной 8 байтов " << d2 << ":\t";
    binary(&d2, sizeof(d2));

    cout << endl;

    system("PAUSE");
    return 0;
}