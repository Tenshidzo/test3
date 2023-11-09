#include "OverCoat.h"

OverCoat::OverCoat::OverCoat()
{
	name = "Undefine";
	type = "Undefine";
	size = 0;
	price = 0.0;
}

OverCoat::OverCoat::OverCoat(string n, string t, int s, double p)
{
	name = n;
	type = t;
	size = s;
	price = p;
}

void OverCoat::OverCoat::setName(string n)
{
	name = n;
}

void OverCoat::OverCoat::setType(string t)
{
	type = t;
}

void OverCoat::OverCoat::setSize(int s)
{
	size = s;
}

void OverCoat::OverCoat::setPrice(double p)
{
	price = p;
}
string OverCoat::OverCoat::getName() const
{
	return name;
}

string OverCoat::OverCoat::getType() const
{
	return type;
}

int OverCoat::OverCoat::getSize() const
{
	return size;
}

double OverCoat::OverCoat::getPrice() const
{
	return price;
}



bool OverCoat::OverCoat::operator==(const OverCoat& other) const
{
	return name == other.name && type == other.type && size == other.size && price == other.price;
}

bool OverCoat::OverCoat::operator!=(const OverCoat& other) const
{
	return !(*this == other);
}

OverCoat& OverCoat::OverCoat::operator++()
{
	size++;
	return *this;
}

OverCoat& OverCoat::OverCoat::operator--()
{
	size--;
	return *this;

}

bool OverCoat::OverCoat::operator>(const OverCoat& other) const
{
	 return price > other.price;;
}

bool OverCoat::OverCoat::operator>=(const OverCoat& other) const
{
	return price >= other.price;
}

bool OverCoat::OverCoat::operator<(const OverCoat& other) const
{
	return price < other.price;
}

bool OverCoat::OverCoat::operator<=(const OverCoat& other) const
{
	return price <= other.price;
}

istream& operator>>(istream& in, OverCoat& coat)
{
	cout << "Enter name: ";
	in >> coat.name;
	cout << "Enter type: ";
	in >> coat.type;
	cout << "Enter size: ";
	in >> coat.size;
	cout << "Enter price: ";
	in >> coat.price;
	return in;
}

ostream& operator<<(ostream& out, const OverCoat& coat)
{
	out << "Name: " << coat.name << ", Type: " << coat.type << ", Size: " << coat.size << ", Price: " << coat.price;
	return out;
}
