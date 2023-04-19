#include <fstream>
#include <string>
#include "timer.h"
using namespace std;

string verify()
{
	ifstream user;
	user.open("user.txt");
	
	if(!user)
	{
		cout << "\n\n\n\n\n\nNo User Established." << endl;
		user.close();
		for (int i = 0; i < 2; i++)
		{
			delay(14);
		}
		
		system ("CLS");
		
		string username = "", password = "", user_type = "";
		
		ofstream user;
		user.open("user.txt");
		
		cout << "\n\n\n\n\n\n\t\t\t\t\tEnter New User Name: ";
		getline(cin, username);
		
		cout << "\n\t\t\t\t\tEnter Password: ";
		cin >> password;
		
		cout << "\n\t\t\t\t\tAdmin/Employee: ";
		cin >> user_type;
		
		user << username << "\n" << password << "\n" << user_type << "\n";
		
		user.close();
		
		return user_type;
	}
	else
	{
		string username = "", password = "", ver_name = "", ver_password = "", ver_admin = "";
		bool check = true;
		
		while(check == true)
		{
			cout << "\n\n\n\n\n\n\t\t\t\t\tUser Name: ";
			getline(cin, username);
				
			cout << "\t\t\t\t\tPassword: ";
			getline(cin, password);
				
			ifstream user;
			user.open("user.txt");
				
			while(getline(user, ver_name), getline(user, ver_password), getline(user, ver_admin))
			{
				if (ver_name == username && ver_password == password)
				{
					cout << ver_admin << endl;
					check = false;
					break;
				}
			}
			
			if(ver_name != username || ver_password != password)
				{
					cout << "\n\n\n\n\n\n\t\t\t\t\tWrong Credentials.";
					for (int i = 0; i < 2; i++)
					{
						cout << ".";
						delay(14);
					}
					system("CLS");
					continue;
				}
			else
				{
					break;
				}
		}
		
		system("CLS");
		
		cout << "\n\n\n\n\n\nSuccessfully Logged In.";
		for (int i = 0; i < 2; i++)
		{
			cout << ".";
			delay(14);
		}
		
		system("CLS");
		
		return ver_admin;
	}
}
