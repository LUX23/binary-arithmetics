/*
* �������� ��������� �� ������ ������� ������ (�����), �������� ��������,
* ���������� � ����������. ������ �������� � ������ �� ����� ����: ����� �������� �
* ����������� ����� ������ 1,2 � 4 �����; ������������ ����� � ��������� �������
* ������ 4 � 8 ����.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

void binary(void* num, int size)
{
    auto* a = (unsigned char*)num; // ��������������� ���� ������ ����������� ��������� �� num
    for (int i = size - 1; i >= 0; i--) // ����� ������
    {
        for (int j = 7; j >= 0; j--) // ������� �����
            cout << ((a[i] >> j) % 2); // ��������� ������� ������� � ������ �������

        cout << ' '; // ������ �� �����
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    signed char sc1 = 27, sc2 = -42; // �������� ������ 1 ����
    unsigned char uc1 = 3, uc2 = -33; // ����������� ������ 1 ����

    short int si1 = 67, si2 = -13; // �������� ������ 2 �����
    unsigned short int usi1 = 8, usi2 = -9; // ����������� ������ 2 �����

    int i1 = 99, i2 = -99; // �������� ������ 4 �����
    unsigned int ui1 = 99, ui2 = -99; // ����������� ������ 4 �����

    float f1 = 83.0f, f2 = -83.0f; // � ��������� ������� ������ 4 �����

    double d1 = 11.34f, d2 = -345.44f; // � ��������� ������� ������ 8 ������

    cout << "�������� ������ 1 ���� " << int(sc1) << ":\t";
    binary(&sc1, sizeof(sc1));
    cout << "�������� ������ 1 ���� " << int(sc2) << ":\t";
    binary(&sc2, sizeof(sc2));
    cout << "����������� ������ 1 ���� " << int(uc1) << ":\t";
    binary(&uc1, sizeof(uc1));
    cout << "����������� ������ 1 ���� " << int(uc2) << ":\t";
    binary(&uc2, sizeof(uc2));

    cout << "\n\n�������� ������ 2 ����� " << si1 << ":\t";
    binary(&si1, sizeof(si1));
    cout << "�������� ������ 2 ����� " << si2 << ":\t";
    binary(&si2, sizeof(si2));
    cout << "����������� ������ 2 ����� " << usi1 << ":\t";
    binary(&usi1, sizeof(usi1));
    cout << "����������� ������ 2 ����� " << usi2 << ":\t";
    binary(&usi2, sizeof(usi2));

    cout << "\n\n�������� ������ 4 ����� " << i1 << ":\t";
    binary(&i1, sizeof(i1));
    cout << "�������� ������ 4 ����� " << i2 << ":\t";
    binary(&i2, sizeof(i2));
    cout << "����������� ������ 4 ����� " << ui1 << ":\t";
    binary(&ui1, sizeof(ui1));
    cout << "����������� ������ 4 ����� " << ui2 << ":\t";
    binary(&ui2, sizeof(ui2));

    cout << "\n\n� ��������� ������� ������ 4 ����� " << f1 << ":\t";
    binary(&f1, sizeof(f1));
    cout << "� ��������� ������� ������ 4 ����� " << f2 << ":\t";
    binary(&f2, sizeof(f2));

    cout << "\n\n� ��������� ������� ������ 8 ������ " << d1 << ":\t";
    binary(&d1, sizeof(d1));
    cout << "� ��������� ������� ������ 8 ������ " << d2 << ":\t";
    binary(&d2, sizeof(d2));

    cout << endl;

    system("PAUSE");
    return 0;
}