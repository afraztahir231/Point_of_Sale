#include "sale_portal.h"
using namespace std;

void portal::shift_data_ttf()
{
	C->shift_data(C->get_root());
	//remove ("inventory.txt");
	//rename ("temp.txt", "inventory.txt");
}
