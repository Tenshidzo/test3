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
    // ����������� �� ���������
    OverCoat();

    // ����������� � �����������
    OverCoat(string n, string t, int s, double p);

    // ��������� (������� � �������)
    void setName(string n);
    void setType(string t);
    void setSize(int s);
    void setPrice(double p);

    string getName() const;
    string getType() const;
    int getSize() const;
    double getPrice() const;



    // ���������� ���������� ��������� ==
    bool operator==(const OverCoat& other) const;

    // ���������� ���������� ��������� !=
    bool operator!=(const OverCoat& other) const;

    // ���������� ��������� ++
    OverCoat& operator++();

    // ���������� ��������� --
    OverCoat& operator--();

    // ���������� ���������� ��������� >, >=, <, <=
    bool operator>(const OverCoat& other) const;

    bool operator>=(const OverCoat& other) const;

    bool operator<(const OverCoat& other) const;

    bool operator<=(const OverCoat& other) const;

    // ���������� ��������� �����
    friend istream& operator>>(istream& in, OverCoat& coat);


    // ���������� ��������� ������
    friend ostream& operator<<(ostream& out, const OverCoat& coat);

};

