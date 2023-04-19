#include "portal.h"
using namespace std;

void portal::add_inventory()
{
	ofstream file;
	
	file.open("inventory.txt", ios::app);
	
	string brandname;
	string purchase_price;
	string sale_price;
	string bar_code;
	string date;
	string cloth_type;
	string cloth_name;
	int elements;
	
	cout << "Enter Total Number of items you want to enter: ";
	cin >> elements;
	cin.get();
	
	for (int i = 0; i < elements; i++)
	{
		cout << "Brand Name: ";
		getline(cin, brandname);
		file << brandname << "\n";
		
		cout << "\nPurchase Price: ";
		cin >> purchase_price;
		cin.get();
		file << purchase_price << "\n";
		
		cout << "\nSale Price: ";
		cin >> sale_price;
		cin.get();
		file << sale_price << "\n";
		
		srand(time(NULL));
		bar_code = rand()%elements + 2021000;
		cout << "\nBar Code: " << bar_code;
		file << bar_code << "\n";
		
		cout << "\nCloth Type: ";
		getline(cin, cloth_type);
		file << cloth_type << "\n";
		
		cout << "\nCloth Name: ";
		getline(cin, cloth_name);
		file << cloth_name << "\n";
		
		cout << "Purchase Date: ";
		cin >> date;
		cin.get();
		file << date << "\n";
		
		cout << "\n-------------------------------------------------------------\n";
	}
	
	file.close();
}
