

#include <iostream>
#include "Store.h"
#include "OverCoat.h"
int main()
{
    Store shop;

    OverCoat coat1("Winter Coat", "Men's", 42, 150.0);
    OverCoat coat2("Raincoat", "Women's", 38, 120.0);
    OverCoat coat3("Jacket", "Men's", 40, 80.0);

    shop.addOvercoat(coat1);
    shop.addOvercoat(coat2);
    shop.addOvercoat(coat3);

    cout << "Shop before sorting by price:" << endl;
    shop.displayShop();

    shop.sortByPrice();
    cout << "Shop after sorting by price:" << endl;
    shop.displayShop();

    int searchIndex = 1;
    shop.removeOvercoat(searchIndex - 1);
    cout << "Shop after removing item " << searchIndex << ":" << endl;
    shop.displayShop();

    int editIndex = 2;
    int newSize = 44;
    shop.editSize(editIndex - 1, newSize);
    cout << "Shop after editing size of item " << editIndex << ":" << endl;
    shop.displayShop();

    string searchType = "Men's";
    vector<OverCoat> result = shop.searchByType(searchType);
    cout << "Items of type " << searchType << ":" << endl;
    for (const OverCoat& coat : result) {
        cout << coat << endl;
    }
}

