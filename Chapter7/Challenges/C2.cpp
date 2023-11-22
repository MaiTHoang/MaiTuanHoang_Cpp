#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MONTHS = 12;
    double rainfall[MONTHS];
    string monthName[MONTHS] = {"mot","hai","ba","tu","nam","sau",
                                "bay","tam","chin","muoi","muoi mot","muoi hai"};

    double totalRainfall = 0.0,
           averageMonthlyRainfall = 0.0;

    for (int index = 0; index < MONTHS; index++)
    {
        cout << "Nhap luong mua thang " << monthName[index] << " : " ;
        cin >> rainfall[index];
    }
    for (int index = 0; index < MONTHS; index++)
    {
        totalRainfall += rainfall[index];
    }

    averageMonthlyRainfall = totalRainfall / MONTHS;
    double highestAmounts = rainfall[0];
    string highestMonths;
    double lowestAmounts = rainfall[0];
    string lowestMonth;
    
    for (int index = 0; index < MONTHS; index++)
    {
        if (rainfall[index] > highestAmounts)
        {
            highestAmounts = rainfall[index];
            highestMonths = monthName[index];
        }
        if (rainfall[index] < lowestAmounts)
        {
            lowestAmounts = rainfall[index];
            lowestMonth = monthName[index];
        }
    }

    cout << "tong luong mua trong nam: " << totalRainfall << endl;
    cout << "trung binh luong mua trong thang: " << averageMonthlyRainfall << endl;
    cout << "thang co luong mua nhieu nhat: " << highestAmounts << endl;
    cout << "thang co luong mua it nhat: " << lowestAmounts << endl;
    
    return 0;
}