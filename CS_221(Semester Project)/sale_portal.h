#include "show.h"
using namespace std;

void portal::remove_item()
{
	int bar_code;
	cout << "Enter Bar Code: ";
	cin >> bar_code;
	
	clothes_node* removed_item = NULL;
	removed_item = C->remove(C->get_root(), bar_code);
}

void portal::sales_record()
{
	string brandname;
	string purchase_price;
	string sale_price;
	string bar_code;
	string date;
	string cloth_type;
	string cloth_name;
	
	ifstream file;
	
	file.open("sales_record.txt");
	
	while(getline(file, brandname), getline(file, purchase_price), getline(file, sale_price), getline(file, bar_code), getline(file, date), getline(file, cloth_type), getline(file, cloth_name))
	{
		cout << "Brand Name: "<< brandname << endl;
		cout << "Cloth Name: "<< cloth_name << endl;
		cout << "Sale Price: "<< sale_price << endl;
		cout << "Purchase Price: "<< purchase_price << endl;
		cout << "Cloth Type: "<< cloth_type << endl;
		cout << "Bar Code: "<< bar_code << endl;
		cout << "Purchase Date: "<< date << endl;
		cout << "\n-------------------------------------------------------------\n";
	}
	
	file.close();
}
