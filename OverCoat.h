#pragma once
#include <iostream>
#include <string>
using namespace std;
class OverCoat
{
protected:
    string name;
    string type;
    int size;
    double price;

public:
    // Конструктор по умолчанию
    OverCoat();

    // Конструктор с параметрами
    OverCoat(string n, string t, int s, double p);

    // Аксессоры (геттеры и сеттеры)
    void setName(string n);
    void setType(string t);
    void setSize(int s);
    void setPrice(double p);

    string getName() const;
    string getType() const;
    int getSize() const;
    double getPrice() const;



    // Перегрузка операторов сравнения ==
    bool operator==(const OverCoat& other) const;

    // Перегрузка операторов сравнения !=
    bool operator!=(const OverCoat& other) const;

    // Перегрузка оператора ++
    OverCoat& operator++();

    // Перегрузка оператора --
    OverCoat& operator--();

    // Перегрузка операторов сравнения >, >=, <, <=
    bool operator>(const OverCoat& other) const;

    bool operator>=(const OverCoat& other) const;

    bool operator<(const OverCoat& other) const;

    bool operator<=(const OverCoat& other) const;

    // Перегрузка оператора ввода
    friend istream& operator>>(istream& in, OverCoat& coat);


    // Перегрузка оператора вывода
    friend ostream& operator<<(ostream& out, const OverCoat& coat);

};

