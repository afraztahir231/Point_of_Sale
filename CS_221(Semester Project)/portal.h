#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include <time.h>
#include "clothes.h"
using namespace std;

class portal
{	
	public:
		clothes* C;
		SALE s;
		
		portal()
		{
			C = new clothes();
		}
		
		bool check()
		{
			ifstream file;
			file.open("inventory.txt");
			
			if(!file)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		
		void add_inventory();
		
		void shift_data_ftt();
		
		void show();
		
		void remove_item();
		
		void shift_data_ttf();
		
		void sales_record();
		
		void make_sale();
};


