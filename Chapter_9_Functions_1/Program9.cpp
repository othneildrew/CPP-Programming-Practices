// Chapter 9: Program 9

/***
Write a C++ menu driven program to simulate a vending machine using functions. The vending machine has the following items: (1) Coke $0.95, (2) Doritos $0.75, (3) Snickers $0.55, (4) Chex Mix $0.60, (5) Pepsi $0.90. Maximum capacity for each item is 30.

Further Instructions:
The machine accepts quarters, dimes, and nickels, and $1 or $5 bills. There are there different containers for each coin. There should be at least 20 nickels, 20 dimes, and 20 quaters in each container. If each container has more than 100 coins, then remove coins from container and leave only 20 coins. If amount of $1 bills exceeds $100, then remove the $1 bills and leave twenty $1 bills in the container. If amount of $bills exceed $300, then remove $5 bills and leave twenty $5 bills in the container. 

The cost of the items is 35% of the selling price.

Labor cost is 25% of the selling price.

Overhead is 5% of the selling price.

Your program must run for six hours per day.

Your program must have at least the following functions: (1) main function; (2) menu function; (3) check if the machine is ON or OFF; (4) turn the machine ON if it is OFF; (5) refill vending machine; (6) refill coins containers; (7) remove coins from any one of the container if it exceeds 100 coins; (8) select item from vending machine; (9) accept coins; (10) check for coin validity. If it is a foreign coin, then reject it; (11) check the price. If the amount received is less than the item's price, then ask for more money. If the amount received is more than the item's price, then return change; (12) return change; (13) calculate the sales for each item per hour; (14) calculate the total sales for each item per day; (15) calculate the total sales for all items; (16) compute total cost of all items; (17) compute labor cost; (18) compute overhead; (19) compute profit; (20) display.

**/

# include <iostream>;
# include <string>;
# include <math.h>;
using namespace std;


int Selected_Item, Quarts_Qty, Dimes_Qty, Nickels_Qty;
bool Machine_State = false, Coin_Valid(double);
double Read_Data(void), Return_Change(double), Check_Price(int);
void Machine_ON(void), Machine_OFF(void), Display_Menu(void), Refill_Snacks(void), Refill_Coins(void), Remove_Coins(void), Display_Info(string, double);

int main(void) {

	int Max_Capacity = 30;
	double Dollar_Amt = 20.00, FiveDollars_Amt = 100.00, Item_Price, Payment, Removed_Money = 0;

	// Check if machine is ON, turn ON if it is not
	if (!Machine_State) {
		Machine_ON();
		// TODO: set a timer for 6 hours -> 21600 seconds
			// if timer is finished and not vending a snack, call Machine_OFF()
	}

	// Show if the machine is ON/OFF
	cout << "\n\t The machine is now ->" << Machine_State << endl;

	while (Machine_State) {
		Payment = 0;
		
		if (Quarts_Qty + Dimes_Qty + Nickels_Qty < 60) {
			Refill_Coins();
		}
		else if (Quarts_Qty + Dimes_Qty + Nickels_Qty > 100) {
			Remove_Coins();
		}

		// Display menu and get user selection
		Display_Menu();
		cin >> Selected_Item;

		if (Selected_Item == 0) {
			Machine_OFF();
			cout << "\n\t The machine is now -> " << Machine_State << endl;
		}
		else if (Selected_Item > 5) {
			cout << "\t Invalid selection \n";
			Display_Menu();
			cin >> Selected_Item;
		}
		else {
			// Ask for payment
			Item_Price = Check_Price(Selected_Item);

			do {
				cout << "\n Enter payment amount: $";
				double Coin = Read_Data();
				
				if (Coin_Valid(Coin)) {
					Payment += Coin;
				}
			} while (Payment < Item_Price);

			// Process payment and issue if change if necessary
			double change = Item_Price - Payment;

			if (change > 0) {
				Return_Change(change);
			}




			cout << "********************************************************************************************" << endl;
			Display_Info("Selected Item", Selected_Item);
			Display_Info("Item price", Item_Price);
			Display_Info("Payment", Payment);






















		}
	}


	system("pause");
	return 0;
}

// FUNCTIONS

// Gets and sets the value given by the user
double Read_Data(void) {
	double data;
	cin >> data;
	return data;
}

// Turns the vending machine ON
void Machine_ON(void) {
	Machine_State = true;
}

// Turns the vending machine OFF
void Machine_OFF(void) {
	Machine_State = false;
}

double Return_Change(double change) {
	return 0;
}

void Display_Menu(void) {
	cout << "\n\t Drew's Vending Machine (MENU):";
	cout << "\n\t (0) CANCEL SELECTION";
	cout << "\n\t (1) Coke $0.95";
	cout << "\n\t (2) Doritos $0.75";
	cout << "\n\t (3) Snickers $0.55";
	cout << "\n\t (4) Chex Mix $0.60";
	cout << "\n\t (5) Pepsi $0.90";
	cout << "\n\t Enter snack selection: ";
}

void Refill_Snacks(void) {
	
}

void Refill_Coins(void) {
	Quarts_Qty = 20;
	Dimes_Qty = 20;
	Nickels_Qty = 20;
}

// Checks if coin entered is at least a nickel
bool Coin_Valid(double coin) {
	if ((coin - 0.05) < 1) {
		return true;
	}
	return false;
}

void Remove_Coins(void) {

}


double Check_Price(int item) {
		// compare the price of the selected item	
			// return either positive or negative number based on money given
				// if postive, change must be given
				// if negative, ask for more money
	double price = 0;

	switch (item) {
		case 1:
			price = 0.95; // Coke
			break;
		case 2:
			price = 0.75; // Doritos
			break;
		case 3:
			price = 0.55; // Snickers
			break;
		case 4:
			price = 0.60; // Chex Mix
			break;
		case 5:
			price = 0.90; // Pepsi
			break;
	}

	return price;
}







































void Display_Info(string text, double data) {
	cout << "\t " << text << " = " << data << endl;
}

// Code written by: Othneil Drew
// https://github.com/othneildrew/CPP-Programming-Practices
