#include<iostream>
using namespace std;
int main()
{
	
	int initial_stock, threshold = 15, current_stock, choice, sale_quantity, restock_quantity;
	cout << "Enter the initial quantity of the stock = ";
	cin >> initial_stock;
	current_stock = initial_stock;
	
	while (true)
	{
	        cout << "*****options*****\n1.sale \n2.restock\n3.Exit \n Enter Your choice = ";
			cin >> choice;
			if (choice == 1)
			{
				if (current_stock > threshold)
				{
					cout << "Enter Quantity of stock that you are selling = ";
					cin >> sale_quantity;
					if (sale_quantity > current_stock)
					{
						cout << "sale quantity of stock is greater that current stock.You cannot sale that much stock " << endl;
					}
					else if (current_stock >= sale_quantity)
					{
						current_stock = current_stock - sale_quantity;
					}
				}
				else
				{
						cout << "Your stock is less then threshold . Restock" << endl;
				}
				
			}
			else if (choice == 2)
			{
				cout << "Enter Quantity of Restock = ";
				cin >> restock_quantity;
				current_stock = current_stock + restock_quantity;
			}

			else if (choice == 3)
			{
				cout << "Your current stock quantity is " << current_stock << endl;
				return 0;
			}
		cout << "Your current stock quantity is " << current_stock << endl;
	}
	return 0;
}