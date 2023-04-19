#include <iostream>
#include "display.h"
#include "verify.h"
#include "make_sale.h"
using namespace std;

int main()
{	
	SALE s;
	portal p;
	string check = verify();
	bool empty = p.check();
	int choice = 0;
	
	if (check == "admin")
	{
		display_welcome();
		cout << "\n\t\t\t\t\t\tLoading.";
		for (int i = 0; i < 2; i++)
			{
				cout << ".";
				delay(14);
			}
		system ("CLS");
		if(empty)
		{
			p.shift_data_ftt();
			while (true)
			{
				system("CLS");
				display_admin();
				
				cout << "\nOpen?";
				cin >> choice;
				
				if(choice == 1)
				{
					system("CLS");
					p.remove_item();
					p.shift_data_ttf();
					cout << "Press Enter To Continue." << endl;
					cin.get();
					cin.get();
				}
						
				else if(choice == 2)
				{
					system("CLS");
					p.show();
					cout << "Press Enter To Continue." << endl;
					cin.get();
					cin.get();
				}
					
				else if(choice == 3)
				{
					system("CLS");
					p.sales_record();
					cout << "Press Enter To Continue." << endl;
					cin.get();
					cin.get();
				}
						
				else if(choice == 4)
				{
					system("CLS");
					display_inventory();
					
					cout << "\nOpen?";
					cin >> choice;
					
					while(true)
					{
						if(choice == 1)
						{
							system("CLS");
							p.show();
							break;
						}
						else if(choice == 2)
						{
							system("CLS");
							p.add_inventory();
							break;
						}
						else
						{
							cout << "\nWrong Choice." << endl;
						}
					}
					
					cout << "Press Enter To Continue." << endl;
					cin.get();
					cin.get();
				}
						
				else if(choice == 5)
				{
					system("CLS");
					p.make_sale();
					cout << "Press Enter To Continue." << endl;
					cin.get();
					cin.get();
				}
						
				else if(choice == 6)
				{
					system("CLS");
					log_out();
					break;
				}
						
				else
				{
					cout << "Invalid Choice.";
					for (int i = 0; i < 2; i++)
						{
							cout << ".";
							delay(14);
						}
					system ("CLS");
					continue;
				}
			}
		}
		else
		{
			system("CLS");
			p.add_inventory();
			cout << "Press Enter To Continue." << endl;
			cin.get();
			cin.get();
		}
	}
	else if (check == "employee")
	{
		display_welcome();
		cout << "\n\t\t\t\t\t\tLoading.";
		for (int i = 0; i < 2; i++)
		{
			cout << ".";
			delay(14);
		}
		system ("CLS");
		p.shift_data_ftt();
		while(true)
		{
			system("CLS");
			display_employee();
			cout << "\nOpen?";
			cin >> choice;
			
			if(choice == 1)
			{
					system("CLS");
					p.remove_item();
					p.shift_data_ttf();
					cout << "Press Enter To Continue." << endl;
					cin.get();
					cin.get();
			}
			
			else if(choice == 2)
			{
				system("CLS");
				display_inventory();
				
				cout << "\nOpen?";
				cin >> choice;
				
				while(true)
				{
					if(choice == 1)
					{
						p.show();
						cout << "Press Enter to Continue." << endl;
						cin.get();
						cin.get();
						break;
					}
					else if(choice == 2)
					{
						p.add_inventory();
						cout << "Press Enter to Continue." << endl;
						cin.get();
						break;
					}
					else
					{
						cout << "\nWrong Choice." << endl;
						cin.get();
					}
				}
			}
					
			else if(choice == 3)
			{
					system("CLS");
					p.make_sale();
					cout << "Press Enter To Continue." << endl;
					cin.get();
					cin.get();
			}
				
			else if(choice == 4)
			{
				system("CLS");
				log_out();
				break;
			}
					
			else
			{
				cout << "Invalid Choice.";
				for (int i = 0; i < 2; i++)
					{
						cout << ".";
						delay(14);
					}
				system ("CLS");
				continue;
			}
		}		
	}
	
	return 0;
}
