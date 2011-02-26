/*
 * main.cpp
 *
 *  Created on: Feb 22, 2011
 *      Author: looterguf,Fuzzy,RCheuTheDiamondLeagueProtoss
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
int numberSet [7];
int i=0;

using namespace std;

//Function factor//

void factor (int y)
{
	int z=2;

	while (1==1)
	{
		if ((y%z) != 0)
		{
			z++;
		}
		else
		{
			numberSet[i]=(y/z);
			//Prime factor condition//
			if (y==z && numberSet[0]==1)
			{
				numberSet[0]=z;
				numberSet[1]=1;
				cout<< "The value of z is:";
				cout<<z<<endl;
				z++;

			}
			else
			{
				i++;
				z++;
			}
		}
		if (z>y)
		{
			if ((y%z) != 0)
			{
				z++;
			}
			else
			{
				numberSet[i]=(y/z);
				//Prime factor condition//
				if (y==z && numberSet[0]==1)
				{
					numberSet[0]=z;
					numberSet[1]=1;
					cout<< "The value of z is:";
					cout<<z<<endl;
					z++;
				}
				else
				{
					i++;
					z++;
				}
			}
			if (z>y)
			{
				break;
			}

			break;
		}
	}
}


int main(void)
{
	cout << "Welcome to the Numbers Game. It does nothing yet."<< endl;

	int a;
	int b;
	int c;
	int d;
	int x;
	int q;

	cout << "Type a number in"<< endl;

	cin >> x;

	factor(x);

	//Generating the numbers to be used//

	srand(time(NULL));
	q = rand()%10;
	i = 0;

	//Giving a value to a//

	a = numberSet[0];

	//NOT NEEDED
	//Giving a value for b and c//
	//b = 90;
	//c = 15;

	while (1==1)
	{
		b = rand()%10;
		c = rand()%10;

		if (a%2==0&&(b-c)==2)
		{
			break;
		}

		//If x is odd, and is not prime//
		if (a%2!=0&&(a*(b+c))==(x))
		{
			cout<<"This is odd shit bro."<<endl;
			break;
		}
	}


	//Getting D//
	if (a%2==0)
	{
		d=0;
	}
	else
	{
		d=1;
	}




	while (i<7)
	{
		cout<< numberSet [i]<<endl;
		i++;
	}

	cout << "Here are your numbers:"<<endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;

	//User tries to solve for his number//
	cout << "Solve for:";
	cout << x << endl;

	//Condition for winning game//
	int p=0;
	int e; //User input variable//
	int f; //User input variable//
	int g; //Number 2//
	while (p!=x)
	{
		cout<< "Pick a number"<<endl;
		cin>> e;
		if (e!=a&&e!=b&&e!=c&&e!=d)
		{
			cout<<"Wrong number faggot. Try again n00b."<<endl;
		}
		else
		{
		cout<<"Select an operation"<<endl;
		cout<<"1= Multiplication"<<endl;
		cout<<"2=Division"<<endl;
		cout<<"3=Addition"<<endl;
		cout<<"4=Subtraction"<<endl;
		cin>> f;

		if (f==1)
		{
			g=e*f;
		}

		if (f==2)
		{
			g=e/f;
		}

		if (f==3)
		{
			g=e+f;

		}

		if (f==4)
		{
			g=e-f;

		}
		}
		cout<< "Result:";
		cout<< g<<endl;
		cout<<"Next number"<<endl;


	}




	cout<< "End Program"<<endl;
	cout<< q<<endl;

	return 0;

}
