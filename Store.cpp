#include "Store.h"

void Store::addOvercoat(OverCoat coat)
{
    shop.push_back(coat);
}

void Store::removeOvercoat(int index)

{
    if (index >= 0 && index < shop.size()) {
        shop.erase(shop.begin() + index);
    }
}

void Store::editSize(int index, int newSize)
{
    if (index >= 0 && index < shop.size()) {
        shop[index].setSize(newSize);
    }
}

vector<OverCoat> Store::searchByType(const string& targetType)
{
    vector<OverCoat> result;
    for (const OverCoat& coat : shop) {
        if (coat.getType() == targetType) {
            result.push_back(coat);
        }
    }
    return result;
}

void Store::sortByPrice()
{
    sort(shop.begin(), shop.end(), [](const OverCoat& a, const OverCoat& b) {
        return a.getPrice() < b.getPrice();
        });
}

void Store::displayShop()
{
    for (int i = 0; i < shop.size(); i++) {
        cout << "Item " << (i + 1) << ": " << shop[i] << endl;
    }
}
