using namespace std;

void display_admin()
{
	cout << "\n\n\n\n\n\n\t\t\t\t\t\t1. Sales Portal.\n";
	cout << "\t\t\t\t\t\t2. Purchase History.\n";
	cout << "\t\t\t\t\t\t3. Sales History.\n";
	cout << "\t\t\t\t\t\t4. Inventory.\n";
	cout << "\t\t\t\t\t\t5. Upcoming Sale.\n";
	cout << "\t\t\t\t\t\t6. Log Out.\n";
}

void display_employee()
{
	cout << "\n\n\n\n\n\n\t\t\t\t\t\t1. Sales Portal.\n";
	cout << "\t\t\t\t\t\t2. Inventory.\n";
	cout << "\t\t\t\t\t\t3. Upcoming Sale.\n";
	cout << "\t\t\t\t\t\t4. Log Out.\n";
}

void display_inventory()
{
	cout << "\n\n\n\n\n\n\t\t\t\t\t\t1.Show Current Inventory.\n";
	cout << "\t\t\t\t\t\t2.Add Items."; 
}

void display_welcome()
{
	cout << "\n\n\n";
	cout << "*****   ***   *****" <<   " ************"  <<   " *****      "  <<  "    ********** "   <<  "     ***********    "   <<   " ******          ******"  <<   " ************"  << endl;
	cout << "*****   ***   *****" <<   " ************"  <<   " *****      "  <<  "   ************ "  <<   "   *****   *****   "   <<   " *******        *******"  <<   " ************"  << endl;
	cout << "*****   ***   *****" <<   " ****        "  <<   " *****      "  <<  "  *****         "  <<   "  *****     *****  "   <<   " ***** ***     ** *****"  <<   " ****        "  << endl;
	cout << "*****   ***   *****" <<   " ****        "  <<   " *****      "  <<  " *****          "  <<   " *****       ***** "   <<   " *****  ***   *** *****"  <<   " ****        "  << endl;
	cout << "*****   ***   *****" <<   " ************"  <<   " *****      "  <<  " *****          "  <<   "*****         *****"  <<    " *****   *** ***  *****"  <<   " ************"  << endl;
	cout << "****** ***** ******" <<   " ****        "  <<   " *****      "  <<  " *****          "  <<   " *****       ***** " <<     " *****    *****   *****"  <<   " ****        "  << endl;
	cout << " ***************** "  <<  " ****        "  <<   " *****      "  <<  "  *****         "  <<   "  *****     *****  " <<     " *****            *****"  <<   " ****        "  << endl;
	cout << "  ***************  "   << " ************"  <<   " ************" <<   "  *********** "  <<   "    *****   *****   " <<     " *****            *****"  <<   " ************"  << endl;
	cout << "   *****   *****   "   << " ************"  <<   " ************" <<   "   *********  "  <<   "     ***********    "  <<    " *****            *****"  <<   " ************"  << endl;
	cout << "\n\n\n";
}

void log_out()
{
	cout << "\n\n\n";
	cout << "  **********" <<  "  ****    ****" << "    ********  " << "  ****     ****" << "  ****   ****" << "  ****     ****" << "    ********  " << "  ****     ****" << endl;
	cout << "  **********" <<  "  ****    ****" << "   ****  **** " << "  *****    ****" << "  ****  **** " << "   ****   **** " << "   ****  **** " << "  ****     ****" << endl;
	cout << "     ****   " <<  "  ************" << "  ****    ****" << "  **** *   ****" << "  **** ****  " << "    **** ****  " << "  ****    ****" << "  ****     ****" << endl;
	cout << "     ****   " <<  "  ************" << "  ************" << "  ****  *  ****" << "  **** ****  " << "      ****     " << "  ****    ****" << "  *****   *****" << endl;
	cout << "     ****   " <<  "  ****    ****" << "  ****    ****" << "  ****   * ****" << "  ****  **** " << "      ****     " << "   ****  **** " << "   *********** " << endl;
	cout << "     ****   " <<  "  ****    ****" << "  ****    ****" << "  ****    *****" << "  ****   ****" << "      ****     " << "    ********  " << "    *********  " << endl;
	cout << "\n\n\n";
}