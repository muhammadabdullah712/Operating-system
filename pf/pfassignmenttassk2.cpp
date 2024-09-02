#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream in;
    ofstream out;
	char a[1000];
	out.open("sampleIn.txt");
	
	{
		out << "Ahsan Khan, 50000, IT" << endl;
		out << "Alia Shams, 60000, Management" << endl;
		out << "Najam ul Saqib, 30000, Sales" << endl;
		out << " Ahmer Javed, 50000, HR" << endl;

	}
	sampleIn.getline(line," ");
	//in.open("sampleIn.txt", ios::in);
	
	in.close();
	
	if (out.is_open())
	{
		out.open("sampleIn.txt", ios::out);
		
	}
	out.close();
	return 0;
}