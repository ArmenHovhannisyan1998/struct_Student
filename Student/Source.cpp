#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct Student
{
private:
	string fname;
	string lname;
	int rating;
public:
	void Setter(string fname1, string lname1, int rating1)
	{
		fname = fname1;
		lname = lname1;
		rating = rating1;
	}

	string Get_fname()
	{
		return fname;
	}
	string Get_lname()
	{
		return lname;
	}
	int Get_rating()
	{
		return rating;
	}
};
int main()
{
	cout << "How many students will your list     ";
	int n; cin >> n;
	string anun, azganun; int gnahatakan;
	Student *arr = new Student[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Type   " << i + 1 << "  name, surname and rating" << endl;
		cin >> anun;
		cin >> azganun;
		cin >> gnahatakan;
		arr[i].Setter(anun, azganun, gnahatakan);

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			const int a = arr[j].Get_rating();
			const int b = arr[j + 1].Get_rating();


			if (a < b)
			{
				Student temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;


			}

		}
	}

	cout << endl;

	for (int j = 0; j < n; j++)
	{



		cout << j + 1 << " " << arr[j].Get_fname() << " ";
		cout << arr[j].Get_lname() << " ";
		cout << arr[j].Get_rating() << endl;
	}

	system("PAUSE");
	return 0;
}