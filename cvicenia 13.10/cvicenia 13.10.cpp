// cvicenia 13.10.cpp : Defines the entry point for the application.
//

#include "cvicenia 13.10.h"

using namespace std;

int jePrestupny(int rok);


int main()
{

	cout << "1000\t" << jePrestupny(1000) <<endl;
	cout << "2000\t" << jePrestupny(2000) << endl;
	cout << "2002\t" << jePrestupny(2002) << endl;
	cout << "2004\t" << jePrestupny(2004) << endl;
	cout << "2014\t" << jePrestupny(2014) << endl;

	return 0;
}

int jePrestupny(int rok)
{
	if ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
