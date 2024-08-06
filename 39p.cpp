#include <stdio.h>

class OrangeBox {
public:
	void Add(int addorange);
	void Del(int delorange);
	void Empty();
	int GetTotal() {
		return total;
	}
private:
	int total;
};

void OrangeBox::Add(int addorange)
{
	total += addorange;
}

void OrangeBox::Del(int delorange)
{
	total -= delorange;
	if (total < 0) Empty();
}

void OrangeBox::Empty()
{
	total = 0;
}

int main()
{
	OrangeBox myOrangeBox;

	myOrangeBox.Empty();
	myOrangeBox.Add(5);
	myOrangeBox.Del(2);
	printf("상자 속의 오렌지: %d개\n", myOrangeBox.GetTotal());
	return 0;
}

