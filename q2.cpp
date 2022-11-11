#include <iostream>
#include <iomanip>
using namespace std;

//initiating the functions
void getInput(int &n1, int &n2, int &n3);
int  findMin(int n1, int n2, int n3);
void printResult(int n1, int n2, int n3, int min);

int main()
{
	//set up to declare the variables & setting up for input and output
	int n1,n2,n3,min;
	getInput(n1,n2,n3);
	min=findMin(n1,n2,n3);
	printResult(n1,n2,n3,min);
}

//setting up the console output
void printResult(int n1, int n2, int n3, int min)
{
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;
}
void getInput(int &n1, int &n2, int &n3)
{
	cout<<"Please Enter Three integer: "<<endl;
	cin>>n1>>n2>>n3;
}
//setting up to find min using if else statements
int  findMin(int n1, int n2, int n3)
{
	int min=n1;
	if(n2<n1)
	{
		min=n2;
		if(n3<n2)
			min=n3;
	}
	else
	{
		if(n3<n1)
			min=n3;
	}
	return min;
}