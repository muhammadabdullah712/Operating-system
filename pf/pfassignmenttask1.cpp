#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream in;
    ofstream out;
	char a[1000];
	out.open("employee.txt");
	if (out.is_open())
	{
		out << "Aamir akbar@\t12000" << endl;
		out << "Amara butt@\\t15000" << endl;
		
		out << "Adnan Afzal@\t13000" << endl;
		out << "Ali ahmad@\t11500" << endl;
	}
	out.close();
	in.open("employee.txt", ios::in);
	

	in.close();
	out.open("statistics.txt", ios::out);
	if (out.is_open())
	{
        
		int sum=0;
        sum= sum+12000+15000+13000+11500;
		out << "the total salary = "<<sum << endl;
	
	}
	out.close();
	return 0;
}