#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "OverCoat.h"
using namespace std;
class Store
{
protected:
	vector<OverCoat> shop;
public:
    void addOvercoat(OverCoat coat);
    void removeOvercoat(int index);
    void editSize(int index, int newSize);
    vector<OverCoat> searchByType(const std::string& targetType);
    void sortByPrice();
    void displayShop();
};

