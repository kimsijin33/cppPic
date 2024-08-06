#include <stdio.h>


class orangebox {

private:
	int total = 0;
};

int main()
{
	orangebox myOrangeBox;

	myOrangeBox.Empty();
	myOrangeBox.Add(5);

	return 0;
}