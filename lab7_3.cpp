#include<iostream>
#include<string>
using namespace std;
int main()
{
	int age;
	double h,r;
	string status;
	cout << "Enter your age: ";
	cin >> age;
	if(age<20 && age <30 )
	{
		cout << "Enter your hight: ";
		cin>> h;
		if(h<160)
		{
			status = "UNFRIEND";
		}else if(h<175)
		{
			status = "FRIEND";
		}else
		{
			cout << "Enter your money: ";
			cin >> r;
			if(r>69000000)
			{
				status = "MARRIED";
			}else
			{
				status = "ONE-NIGHT-STAND";
			}
		}
    }else
		{
		if(age<30)
		{
		cout << "Enter your money: ";
		cin >> r;
			if(r>10000000)
			{
		status = "BESTFRIEND";			
		}else
			{
			status = "UNFRIEND";
			}	
		}else
		{
				status = "UNFRIEND";
		}
	
		}
	cout << status;
}

//status = "ONE-NIGHT-STAND";
