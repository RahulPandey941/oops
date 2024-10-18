#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float a=0;
	float b=1;
	float fa= a * pow(2.718282 ,a) - cos(a);
	float fb= b * pow(2.718282 ,b) - cos(b);
	float c,fc;


	for(int i = 0;i<10;i++){
		c = ((a*fb)-(b*fa))/(fb-fa);
		fc = c * pow(2.718282 ,c) - cos(c);

		cout<<" c :"<<c<<endl;
		cout<<" fc :"<<fc<<endl;

		if(fc > 0){
			b=c;
			fb=fc;
		}
		else{
			a=c;
			fa=fc;
		}
		
	}
	 return 0;
}