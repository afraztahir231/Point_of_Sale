#include <typeinfo>
#include <fstream>
#include "clothes_node.h"
using namespace std;

class SALE
{
	private:
		sales_node* head;

	public:
		sale()
		{
			head = NULL;
		}
		
		void push(string bn, int pur_p, int s_p, int bar, string c_type, string c_name, int date)
		{
			sales_node* new_node = new sales_node(bn, pur_p, s_p, bar, c_type, c_name, date);
			
			if(head == NULL)
			{
				head = new_node;
			}
			else
			{
				head->set_next_sale(new_node);
				head = new_node;
			}
		}
		
		void pop()
		{
			sales_node* temp = head;
			
			head = head->get_next_sale();
			
			delete temp;
		}
		
		void sort()
		{
			sales_node* temp = head;
			sales_node* replace = NULL;
			
			while(temp->get_next_sale() != NULL)
			{
				sales_node* check = head;
				
				while(check->get_next_sale() != NULL)
				{
					sales_node* TEMP = check;
					sales_node* Temp = temp;
					if(temp->get_purchase_price_sale() > check->get_purchase_price_sale())
					{
						replace->set_brandname_sale(TEMP->get_brandname_sale());
						replace->set_purchase_price_sale(TEMP->get_purchase_price_sale());
						replace->set_sale_price_sale(TEMP->get_sale_price_sale());
						replace->set_bar_code_sale(TEMP->get_bar_code_sale());
						replace->set_cloth_type_sale(TEMP->get_cloth_type_sale());
						replace->set_cloth_name_sale(TEMP->get_cloth_name_sale());
						replace->set_date_sale(TEMP->get_date_sale());
						replace->set_next_sale(TEMP->get_next_sale());
						TEMP->set_brandname_sale(Temp->get_brandname_sale());
						TEMP->set_purchase_price_sale(Temp->get_purchase_price_sale());
						TEMP->set_sale_price_sale(Temp->get_sale_price_sale());
						TEMP->set_bar_code_sale(Temp->get_bar_code_sale());
						TEMP->set_cloth_type_sale(Temp->get_cloth_type_sale());
						TEMP->set_cloth_name_sale(Temp->get_cloth_name_sale());
						TEMP->set_date_sale(Temp->get_date_sale());
						TEMP->set_next_sale(Temp->get_next_sale());
						Temp->set_brandname_sale(replace->get_brandname_sale());
						Temp->set_purchase_price_sale(replace->get_purchase_price_sale());
						Temp->set_sale_price_sale(replace->get_sale_price_sale());
						Temp->set_bar_code_sale(replace->get_bar_code_sale());
						Temp->set_cloth_type_sale(replace->get_cloth_type_sale());
						Temp->set_cloth_name_sale(replace->get_cloth_name_sale());
						Temp->set_date_sale(replace->get_date_sale());
						Temp->set_next_sale(replace->get_next_sale());
					}
					
					check = check->get_next_sale();
				}
				
				temp = temp->get_next_sale();
			}
		}
		
		void print_sale()
		{
			sales_node* temp = head;
			
			if(temp == NULL)
			{
				cout << "Nothing to print." << endl;
			}
			else
			{
				while(temp != NULL)
				{
					cout << "Brand Name: "<< temp->get_brandname_sale() << endl;
					cout << "Cloth Name: "<< temp->get_cloth_name_sale() << endl;
					cout << "Sale Price: "<< temp->get_sale_price_sale() << endl;
					cout << "Purchase Price: "<< temp->get_purchase_price_sale() << endl;
					cout << "Cloth Type: "<< temp->get_cloth_type_sale() << endl;
					cout << "Bar Code: "<< temp->get_bar_code_sale() << endl;
					cout << "Purchase Date: "<< temp->get_date_sale() << endl;
					cout << "\n-------------------------------------------------------------\n";
					
					temp = temp->get_next_sale();
				}
			}
		}
		
		sales_node* get_node()
		{
			return head;
		}
};

class clothes
{
	private:
		clothes_node* root;
		clothes_node *x, *y;
		SALE s;
		
	public:
		clothes()
		{
			root = NULL;
		}
		
		void insert_node (string bn, int pur_p, int s_p, int bar, string c_type, string c_name, int date)
		{
			clothes_node *new_node = new clothes_node(bn, pur_p, s_p, bar, c_type, c_name, date);
			clothes_node *x, *y;
			
			
			if(root == NULL)
			{
				root = new_node;
			}
			else
			{
				x = y = root;
				
				while(y != NULL)
				{
					x = y;
					
					if(bar < x->get_bar_code())
					{
						y = x->get_left();
					}
					else
					{
						y = x->get_right();
					}
				}
				
				if(bar < x->get_bar_code())
				{
					x->set_left(new_node);
				}
				else
				{
					x->set_right(new_node);
				}
			}
		}
		
		void pre_order (clothes_node* r)
		{
			clothes_node* temp = r;
			
			if(r != NULL)
			{
				cout << "Brand Name: "<< temp->get_brandname() << endl;
				cout << "Cloth Name: "<< temp->get_cloth_name() << endl;
				cout << "Sale Price: "<< temp->get_sale_price() << endl;
				cout << "Purchase Price: "<< temp->get_purchase_price() << endl;
				cout << "Cloth Type: "<< temp->get_cloth_type() << endl;
				cout << "Bar Code: "<< temp->get_bar_code() << endl;
				cout << "Purchase Date: "<< temp->get_date() << endl;
				cout << "\n-------------------------------------------------------------\n";
				pre_order(temp->get_left());
				pre_order(temp->get_right());
			}
		}
		
		void in_order(clothes_node* r)
		{
			clothes_node* temp = r;
			
			if(temp != NULL)
			{
				in_order(temp->get_left());
				cout << "Brand Name: "<< temp->get_brandname() << endl;
				cout << "Cloth Name: "<< temp->get_cloth_name() << endl;
				cout << "Sale Price: "<< temp->get_sale_price() << endl;
				cout << "Purchase Price: "<< temp->get_purchase_price() << endl;
				cout << "Cloth Type: "<< temp->get_cloth_type() << endl;
				cout << "Bar Code: "<< temp->get_bar_code() << endl;
				cout << "Purchase Date: "<< temp->get_date() << endl;
				cout << "\n-------------------------------------------------------------\n";
				in_order(temp->get_right());
			}
		}
		
		void post_order(clothes_node* r)
		{
			clothes_node* temp = r;
			if(temp != NULL)
			{
				post_order(temp->get_left());
				post_order(temp->get_right());
				cout << "Brand Name: "<< temp->get_brandname() << endl;
				cout << "Cloth Name: "<< temp->get_cloth_name() << endl;
				cout << "Sale Price: "<< temp->get_sale_price() << endl;
				cout << "Purchase Price: "<< temp->get_purchase_price() << endl;
				cout << "Cloth Type: "<< temp->get_cloth_type() << endl;
				cout << "Bar Code: "<< temp->get_bar_code() << endl;
				cout << "Purchase Date: "<< temp->get_date() << endl;
				cout << "\n-------------------------------------------------------------\n";
			}
		}
		
		clothes_node* findmin(clothes_node* t)
		{
			if(t == NULL)
			{
				return NULL;
			}
			else if (t->get_right() == NULL)
			{
				return t;
			}
			else
			{
				return findmin(t->get_right());
			}
		}
		
		clothes_node* remove(clothes_node* x, int bar)
		{
			clothes_node* t;
			
			int diff = bar - x->get_bar_code();
			
			if(diff < 0)
			{
				t = remove(x->get_left(), bar);
				x->set_left(t);
			}
			else if (diff > 0)
			{
				t = remove(x->get_right(), bar);
				x->set_right(t);
			}
			else if(x->get_left() != NULL && x->get_right() != NULL)
			{
				cout << "Brand Name: "<< x->get_brandname() << endl;
				cout << "Cloth Name: "<< x->get_cloth_name() << endl;
				cout << "Sale Price: "<< x->get_sale_price() << endl;
				cout << "Purchase Price: "<< x->get_purchase_price() << endl;
				cout << "Cloth Type: "<< x->get_cloth_type() << endl;
				cout << "Bar Code: "<< x->get_bar_code() << endl;
				cout << "Purchase Date: "<< x->get_date() << endl;
				cout << "\n-------------------------------------------------------------\n";
				
				clothes_node* minNode;
				
				minNode = findmin(x->get_right());
				x->set_bar_code(minNode->get_info()->get_bar_code());
				t = remove(x->get_right(), minNode->get_bar_code());
				t->set_right(t);
			}
			else
			{	
				ofstream file;
				file.open("sales_record.txt", ios::app);
				
				stringstream bar;
				stringstream pur_p;
				stringstream s_p;
				stringstream date;
				int BAR;
				int PUR_P;
				int S_P;
				int DATE;
				
				bar << x->get_bar_code();
				pur_p << x->get_purchase_price();
				s_p << x->get_sale_price();
				date << x->get_date();
				bar >> BAR;
				pur_p >> PUR_P;
				s_p >> S_P;
				date >> DATE;
				
				file << x->get_brandname() << endl;
				file << PUR_P << endl;
				file << S_P << endl;
				file << BAR << endl;
				file << x->get_cloth_type() << endl;
				file << x->get_cloth_name() << endl;
				file << DATE << endl;
				
				file.close();
				
				cout << "Brand Name: "<< x->get_brandname() << endl;
				cout << "Cloth Name: "<< x->get_cloth_name() << endl;
				cout << "Sale Price: "<< x->get_sale_price() << endl;
				cout << "Purchase Price: "<< x->get_purchase_price() << endl;
				cout << "Cloth Type: "<< x->get_cloth_type() << endl;
				cout << "Bar Code: "<< x->get_bar_code() << endl;
				cout << "Purchase Date: "<< x->get_date() << endl;
				cout << "\n-------------------------------------------------------------\n";
				
				clothes_node* nodetodelete = x;
				
				if(x->get_left() == NULL)
				{
					x = x->get_right();
				}
				else if (x->get_right() == NULL)
				{
					x = x->get_left();
				}
				else
				{
					x = NULL;
					delete nodetodelete;
				}
				
			}
			return x;
		}
		
		void shift_data(clothes_node* n)
		{
			clothes_node* temp = n;
			
			if(temp != NULL)
			{
				shift_data(temp->get_left());
				
				ofstream file;
				
				file.open("temp.txt", ios::app);
				
				stringstream bar;
				stringstream pur_p;
				stringstream s_p;
				stringstream date;
				int BAR;
				int PUR_P;
				int S_P;
				int DATE;
				
				bar << temp->get_bar_code();
				pur_p << temp->get_purchase_price();
				s_p << temp->get_sale_price();
				date << temp->get_date();
				bar >> BAR;
				pur_p >> PUR_P;
				s_p >> S_P;
				date >> DATE;
				
				file << temp->get_brandname() << endl;
				file << PUR_P << endl;
				file << S_P << endl;
				file << BAR << endl;
				file << temp->get_cloth_type() << endl;
				file << temp->get_cloth_name() << endl;
				file << DATE << endl;
				
				file.close();
				
				shift_data(temp->get_right());
			}
		}
		
		clothes_node* get_root()
		{
			return root;
		}
		
		void make_shift(clothes_node* n)
		{
			clothes_node* temp = n;
			
			if(temp != NULL)
			{
				make_shift(temp->get_left());
				s.push(temp->get_brandname(), temp->get_purchase_price(), temp->get_sale_price(), temp->get_bar_code(), temp->get_cloth_type(), temp->get_cloth_name(), temp->get_date());
				s.print_sale();
				make_shift(temp->get_right());
			}
		}
};
