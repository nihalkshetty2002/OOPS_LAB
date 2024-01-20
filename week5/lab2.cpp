#include <iostream>
using namespace std;

class date
{
public:
        int day, month, year;

        date(int d, int m, int y) : day(d), month(m), year(y)
        {
        }

        void display()
        {
                cout << day << " - " << month << " - " << year << endl;
        }
        void operator++()
        {
                day += 1;
                if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
                {
                        if (day > 31)
                        {
                                day = 1;
                                month += 1;

                                if (month > 12)
                                {
                                        month = 1;
                                        year += 1;
                                }
                        }
                }
                else if (month == 2)
                {
                        if (year % 4 == 0)
                        {
                                if (day > 29)
                                {
                                        day = 1;
                                        month += 1;
                                }
                        }
                        else
                        {
                                if (day > 28)
                                {
                                        day = 1;
                                        month += 1;
                                }
                        }
                }
                else
                {
                        if (day > 30)
                        {
                                day = 1;
                                month += 1;
                        }
                }
        }
};

int main()
{

        system("clear");
        int d, m, y, n;
        cout << "Day :";
        cin >> d;
        cout << "\nMonth: ";
        cin >> m;
        cout << "\nYear: ";
        cin >> y;

        if (d > 31 || m > 12)
        {
                cout << "\nInvalid date.\n";
                return 1;
        }

        date d1(d, m, y);
        cout << "\nNo. of days to increment: ";
        cin >> n;
        cout << "\nBefore increment: ";
        d1.display();

        for (int i = 0; i < n; i++)
        {
                ++d1;
        }

        cout << "\nAfter increment: ";
        d1.display();
        cout << endl;

        return 0;
}