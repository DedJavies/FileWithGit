#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

struct Shoes {
	string brand;
	string material;
	string type;
	string colour;
	string size;
	float price;

	Shoes(string b = "", string m = "", string t = "", string c = "", string s = "", float p = 0) {
		brand = b;
		material = m;
		type = t;
		colour = c;
		size = s;
		price = p;
	}
};

int main()
{
	Shoes inStock[5];
	Shoes* ptr1 = &inStock[5];

	inStock[0].brand = "Nike";
	inStock[0].material = "Leather and plastic";
	inStock[0].type = "Running shoe";
	inStock[0].colour = "Black";
	inStock[0].size = "44";
	inStock[0].price = 199.99;
}
