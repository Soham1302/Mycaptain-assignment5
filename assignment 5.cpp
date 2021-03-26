#include<iostream>
#include<iomanip>

using namespace std;
class time
{
	private:
		int seconds;
		int hh,mm,ss;
	public:
		void getTime(void);
		void convertintoseconds(void)
		{
			seconds= hh*3600 + mm*60 + ss;
		}
		void displaytime(void);
};
void time ::getTime(void)
{
	cout<<"Enter Time :\n";
	cout<<"Hours? ";
	cin>>hh;
	cout<<"Minutes? ";
	cin>>mm;
	cout<<"Seconds? ";
	cin>>ss;
}

void time ::displaytime(void)
{
	cout<<"The time is = "<<setw(2)<<setfill('0')<<hh<<":"
						<<setw(2)<<setfill('0')<<mm<<":"
						<<setw(2)<<setfill('0')<<ss<<endl;
	cout<<"Total time in seconds : "<<seconds;
}

int main()
{
	time t;
	t.getTime();
	t.convertintoseconds();
	t.displaytime();
	
	return 0;
}

