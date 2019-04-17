#include<iostream>
using namespace std;
class Distance
{
	protected:
		int feet,inch;
		public:
			distance()
			{
				this->feet=0;
				this->inch=0;
			}
			Distance(int f,int i)
			{
				this->feet=f;
				this->inch=i;
			}
			 void operator++()
			{
				feet++;
				inch++;
				cout<<"\nFeet & Inches(Increament) ="<<feet<<" "<<inch;
			}
		};
		int main()
		{
			Distance d1(3,9);
			++d1;
			return 0;
		}
