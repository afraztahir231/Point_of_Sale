using namespace std;

class clothes_info
{
	private:
		string brandname;
		int purchase_price;
		int sale_price;
		int bar_code;
		int date;
		string cloth_type;
		string cloth_name;
		
	public:
		
		void set_values(string bn, int pur_p, int s_p, int bar, string c_type, string c_name, int da)
		{
			bar_code = bar;
			brandname = bn;
			cloth_name = c_name;
			cloth_type = c_type;
			date = da;
			purchase_price = pur_p;
			sale_price = s_p;
		}
		
		void set_bar_code(int bar)
		{
			bar_code = bar;
		}
		
		string get_brandname()
		{
			return brandname;
		}
		
		int get_purchase_price()
		{
			return purchase_price;
		}
		
		int get_sale_price()
		{
			return sale_price;
		}
		
		int get_bar_code()
		{
			return bar_code;
		}
		
		int get_date()
		{
			return date;
		}
		
		string get_cloth_type()
		{
			return cloth_type;
		}
		
		string get_cloth_name()
		{
			return cloth_name;
		}
		
		void set_brandname(string bn)
		{
			brandname = bn;
		}
		
		void set_purchase_price(int pur_p)
		{
			purchase_price = pur_p;
		}
		
		void set_sale_price(int s_p)
		{
			sale_price = s_p;
		}
		
		void set_date(int da)
		{
			date = da;
		}
		
		void set_cloth_type(string c_type)
		{
			cloth_type = c_type;
		}
		
		void set_cloth_name(string c_name)
		{
			cloth_name = c_name;
		}
};
