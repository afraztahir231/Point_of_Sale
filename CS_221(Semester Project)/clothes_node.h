#include "clothes_info.h"
class clothes_node
{
	private:
		clothes_info c;
		clothes_node* left;
		clothes_node* right;
	
	public:
		clothes_node()
		{
			c.set_values("",0,0,0,"","",0);
			left = NULL;
			right = NULL;
		}
		
		clothes_node (string bn, int pur_p, int s_p, int bar, string c_type, string c_name, int date)
		{
			c.set_values(bn, pur_p, s_p, bar, c_type, c_name, date);
			left = NULL;
			right = NULL;
		}
		
		string get_brandname()
		{
			return c.get_brandname();
		}
		
		int get_purchase_price()
		{
			return c.get_purchase_price();
		}
		
		int get_sale_price()
		{
			return c.get_sale_price();
		}
		
		int get_bar_code()
		{
			return c.get_bar_code();
		}
		
		int get_date()
		{
			return c.get_date();
		}
		
		string get_cloth_type()
		{
			return c.get_cloth_type();
		}
		
		string get_cloth_name()
		{
			return c.get_cloth_name();
		}
		
		clothes_info* get_info()
		{
			return &c;
		}
		
		void set_left(clothes_node* n)
		{
			left = n;
		}
		
		clothes_node* get_left()
		{
			return left;
		}
		
		void set_right(clothes_node* n)
		{
			right = n;
		}
		
		clothes_node* get_right()
		{
			return right;
		}
		
		void set_bar_code(int bar)
		{
			c.set_bar_code(bar);
		}
};

class sales_node
{
	private:
		clothes_info sale;
		sales_node* next;
		
	public:
		sales_node()
		{
			next = NULL;
		}
		
		sales_node(string bn, int pur_p, int s_p, int bar, string c_type, string c_name, int date)
		{
			sale.set_values(bn, pur_p, s_p, bar, c_type, c_name, date);
			next = NULL;
		}
		
		string get_brandname_sale()
		{
			return sale.get_brandname();
		}
		
		int get_purchase_price_sale()
		{
			return sale.get_purchase_price();
		}
		
		int get_sale_price_sale()
		{
			return sale.get_sale_price();
		}
		
		int get_bar_code_sale()
		{
			return sale.get_bar_code();
		}
		
		int get_date_sale()
		{
			return sale.get_date();
		}
		
		string get_cloth_type_sale()
		{
			return sale.get_cloth_type();
		}
		
		string get_cloth_name_sale()
		{
			return sale.get_cloth_name();
		}
		
		sales_node* get_next_sale()
		{
			return next;
		}
		
		void set_next_sale(sales_node* n)
		{
			next = n;
		}
		
		void set_brandname_sale(string bn)
		{
			sale.set_brandname(bn);
		}
		
		void set_purchase_price_sale(int pur_p)
		{
			sale.set_purchase_price(pur_p);
		}
		
		void set_sale_price_sale(int s_p)
		{
			sale.set_sale_price(s_p);
		}
		
		void set_bar_code_sale(int bar)
		{
			sale.set_bar_code(bar);
		}
		
		void set_date_sale(int date)
		{
			sale.set_date(date);
		}
		
		void set_cloth_type_sale(string c_type)
		{
			sale.set_cloth_type(c_type);
		}
		
		void set_cloth_name_sale(string c_name)
		{
			sale.set_cloth_name(c_name);
		}
};
