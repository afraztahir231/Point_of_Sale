/*#include "clothes_node.h"
using namespace std;

class sale_info
{
	public:
		string brandname;
		int purchase_price;
		int sale_price;
		int bar_code;
		int date;
		string cloth_type;
		string cloth_name;
		
		void Set_Values (string bn, int pur_p, int s_p, int bar, string c_type, string c_name, int da)
		{
			brandname = bn;
			purchase_price = pur_p;
			sale_price = s_p;
			bar_code = bar;
			cloth_type = c_type;
			cloth_name = c_name;
			date = da;
		}
};

class sale_node
{
	public:
		sale_info* S;
		sale_node* next;
		
		sale_node()
		{
			S = NULL;
			next = NULL;
		}
		
		sale_node(string bn, int pur_p, int s_p, int bar, string c_type, string c_name, int date)
		{
			S->Set_Values(bn, pur_p, s_p, bar, c_type, c_name, date);
			next = NULL;
		}
};*/
