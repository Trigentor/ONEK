#include "iostream"
#include "cmath"

using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");
	//��������� ������������ 
	//���������� 
	int a, b, c;
	float D, x1,x2;
	cout << "����� ��������� ������������ �������"<<endl<<"a:";
	cin >> a;

	cout << "b:" ;
	cin >> b;

	cout << "c:" ;
	cin >> c;
	D = (b * b) - (4 * a * c);
	if (D > 0)
	{
		x1 = (-b - sqrt(D)) / (2 * a);
		x2 = (-b + sqrt(D)) / (2 * a);
		cout << "������������ �����" << D << endl;
		cout << "x1=" << x1 << endl << "x2=" << x2 << endl;
	}
	else
	{
		cout << "������������ ����� 0"<<endl;
	}

	return 0;
}
