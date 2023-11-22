#include<iostream>
using namespace std;
int main()
{
    int membershipFee =2500,
        nam=6;
    for (int i=1;i<=nam;i++)
    {
        membershipFee *=1.06;
        cout << "Membership fee will increase in " << i << " years is "
             << membershipFee  << endl;
    }
    return 0;

}
