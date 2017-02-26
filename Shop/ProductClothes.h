#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class ProductClothes
{
	private:
		string type;
		string sex;
		int size;
		double price;
	public:
		ProductClothes()
		{
			type = "T-Shirt";
			sex = "man";
			size = 40;
			price = 100;
		}
		ProductClothes(string typeVal, string sexVal, int sizeVal, double priceVal)
		{
			type = typeVal;
			sex = sexVal;
			size = sizeVal;
			price = priceVal;
		}
		void setType(string newType)
		{
			type = newType;
		}
		void setSize(int sizeVal)
		{
			size = sizeVal;
		}
		void setPrice(double priceVal)
		{
			price = priceVal;
		}
		string getType()
		{
			return type;
		}
		string getSex()
		{
			return sex;
		}
		int getSize()
		{
			return size;
		}
		double getPrice()
		{
			return price;
		}
		friend istream& operator >> (istream&is, ProductClothes&x)
		{
			is >> x.type >> x.sex >> x.size >> x.price;
			return is;
		}
		friend ifstream& operator >> (ifstream&is, ProductClothes&x)
		{
			is >> x.type >> x.sex >> x.size >> x.price;
			return is;
		}
		friend ostream& operator<<(ostream&os, const ProductClothes&x)
		{
			os << x.type << " " << x.sex << " " << x.size << " " << x.price << endl;
			return os;
		}
		friend ofstream& operator<<(ofstream&os, const ProductClothes&x)
		{
			os << x.type << " " << x.sex << " " << x.size << " " << x.price << endl;
			return os;
		}
};