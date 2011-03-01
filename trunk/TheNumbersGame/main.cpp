/*
 * main.cpp
 *
 *  Created on: Feb 22, 2011
 *  Updated March 1st 2011.
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

	//cout << "Here are your numbers:"<<endl;
	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;
	//cout << d << endl;

	//User tries to solve for his number//
	cout << "Solve for:";
	cout << x << endl;

	//Condition for winning game//
	int p=0;
	int j=0; //Filter checker
	int l=0; //Filter checker//
	int w=0; //Condition for loop. Ignore otherwise//
	int input1; //User input variable//
	int input2; //User input variable//
	int input3;
	int placeHolder2; //Number 2//

	//Base number sets//
		//Change 4 to n and n/2 once scalable difficulty is created//
		int base [4];
		int baseFilter [4];

		base [0]=a;
		base [1]=b;
		base [2]=c;
		base[3]=d;

		baseFilter[0]=1;
		baseFilter[1]=1;
		baseFilter[2]=1;
		baseFilter[3]=1;

		//Intermediate//
		int intermediate[4];
		int intermediateFilter[4];
		intermediateFilter[0]=0;
		intermediateFilter[1]=0;
		intermediateFilter[2]=0;
		intermediateFilter[3]=0;

	while (p!=x)
	{

		while (w==0)
		{


		cout<< "Here are your numbers"<<endl;

		while (j<4&&l<4)
		{

		if (baseFilter[j]!=0)
		{
			cout<< base[j]<<endl;
			j++;
			//if (j==1)
			{
				//cout<<endl;
			}
		}

		if (intermediateFilter[l]!=0)
		{
			cout<< intermediate[l]<<endl;
			l++;
			//if (l==1)
			{
				//cout <<endl;

			}
		}
		}



		cout<< endl;
		cout<<"Pick a number"<<endl;

		cin>>input1;

		if (input1!=a&&input1!=b&&input1!=c&&input1!=d)
		{
			cout<<"Wrong number faggot, try again"<<endl;
		}

		if (input1==a||input1==b||input1==c||input1==d)
		{
			w=1;
			cout<<"Select an operation"<<endl;
		}
		}

		//User picks an operation//
				cout<<"1=Multiplication"<<endl;
				cout<<"2=Division"<<endl;
				cout<<"3=Addition"<<endl;
				cout<<"4=Subtraction"<<endl;

				cin>> input2;


				//Picking a second number//
				cout<<"Select a second number"<<endl;
				w=0;
				cin>> input3;
				if (input3!=a&&input3!=b&&input3!=c&&input3!=d)
						{
							cout<<"Wrong number faggot, try again"<<endl;
						}

						if (input3==a||input3==b||input3==c||input3==d)
						{
							w=1;

						}
					//Operation is applied to input 1 and input3//





	}




	cout<< "End Program"<<endl;
	cout<< q<<endl;

	return 0;

}
