using namespace std;

void delay (int a)
{
	int add;
	int time;
	int i;
	
	time = a * 10000000;
	
	for (i=0; i<time; i++)
	{
		add*=i;
		add++;
		add++;
	}
}
