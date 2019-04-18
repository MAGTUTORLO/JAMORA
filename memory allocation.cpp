#include <iostream>
#include <new>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

struct mor{
	int x;
}num;

void sit(int);

int main(int argc, char** argv) {

	struct mor *ptr;
	int n,c;
	
	ptr = &num;
	
	cout << "Input: ";
	cin >> (*ptr).x;
	
	n=(*ptr).x;
	
	sit((*ptr).x);
	
	c=1;
	
	for (; ;)
	{
		ptr = new struct mor;
		cout << "Input: ";
		cin >> (*ptr).x;
		
		if ((*ptr).x==n)
		{
			cout << "Output: Your already inputed " << (*ptr).x << endl;
			c=1;
		}
		else
		{
			sit((*ptr).x);
			c=123;
			n=(*ptr).x;
		}	
	}
	return 0;
}

void sit(int n)
{
		switch(n) {
		
		case 1:
			cout << "Output: One" << endl;
			break;
		case 2:
			cout << "Output: Two" << endl;
			break;
		case 3:
			cout << "Output: Three" << endl;
			break;			
		case 4:
			cout << "Output: Four" << endl;
			break;
		case 5:
			cout << "Output: Five" << endl;
			break;
		case 6:
			cout << "Output: Six" << endl;
			break;
		case 7:
			cout << "Output: Seven" << endl;
			break;
		case 8:
			cout << "Output: Eight" << endl;
			break;
		case 9:
			cout << "Output: Nine" << endl;	
			break;			
}
}
