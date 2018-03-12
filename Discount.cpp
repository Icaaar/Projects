#include <iostream>
using namespace std;
int main()
{
    int cost;
    int sum = 0;
        cout << "How many products do you want?\nQuantity products: ";
        cin >> sum;
    char prod[sum];
        cout << "Products that we are ready to present to you: \nA, B, C, D, E, F, G, H, I, J, K, L, M.\n";
    for (int x = 0; x < sum; x++)
    {
        cout << "Enter the product: ";
        cin >> prod[sum];
    }
	//ну вот получилось у меня засунуть товары в массив, а как их оттуда вытащить и использовать в If'ах?
	//и свё же. как вывод сделать на английском, а то эльфийский не понятен немного
    cout << "Your chose: ";
    for (int i = 0; i < sum; i++) {
        cout << prod[i] << ", ";
    }
}
