#include "add_inventory.h"
using namespace std;

void portal::shift_data_ftt()
{	
	string brandname;
	string purchase_price;
	string sale_price;
	string bar_code;
	string date;
	string cloth_type;
	string cloth_name;
	
	ifstream file_;
	
	file_.open("inventory.txt");
	
	if(!file_)
	{
		cout << "I dont Exist." << endl;
	}
	else
	{
		while (getline(file_, brandname), getline(file_, purchase_price), getline(file_, sale_price), getline(file_, bar_code), getline(file_, cloth_type), getline(file_, cloth_name), getline(file_, date))
		{
			stringstream pur_p;
			stringstream s_p;
			stringstream bar;
			stringstream da;
			int PUR_P, S_P, BAR, DATE;
			pur_p << purchase_price;
			s_p << sale_price;
			bar << bar_code;
			da << date;
			pur_p >> PUR_P;
			s_p >> S_P;
			bar >> BAR;
			da >> DATE;
			C->insert_node(brandname, PUR_P, S_P, BAR, cloth_type, cloth_name, DATE);
		}
	}
	
	file_.close();
}
