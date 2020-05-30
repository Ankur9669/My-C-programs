#include<ankur.h>
class happynumber
{
	public:
	void giveanswer(int input);
};

void happynumber :: giveanswer(int input)
{
	int temp;
	int square = 0;
	int total = 0;
	int i;
	int flag = 0;
	for (i = 0; i < 10; i++)
	{
		total = 0;
		while (input != 0)
		{
			square = 0;
			temp = input % 10;
			square = square + (temp * temp);
			total = total + square;
			input = input / 10;
		}
		if(total == 1)
		{
			cout << "The Number Is A Happy Number";
			flag = 1;
			break;
		}
		else
		{
			input = total;
		}
	}
	if(flag == 0)
	{
		cout << "Not A Happy Number";
	}
}

void main()
{
	happynumber find;
	title();
	int input;
	cout << "Enter the number";
	cin >> input;
	find.giveanswer(input);
	getch();
}
