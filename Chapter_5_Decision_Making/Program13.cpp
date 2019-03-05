// Chapter 5: Program 13

/***
Project: Write program to choose from five options for summer vacation.
Choose an airline from a list of options, read airfare for round trip,
and number of passengers.
**/ 

# include <iostream>
# include <iomanip>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    const double airline_fare = 115;
    int destination_select, airline_select, passenger_select, is_under18;
    string destination, airline_name;
    double under_18, adult_cost, total_cost;
    
    cout << "Let's get you started on planning your vacation \n";
    
    // Get destination location from user
    cout << "Please select from the Destination options \n";
    cout << "1. Hawaii \n";
    cout << "2. Bahamas \n";
    cout << "3. Cancun \n";
    cout << "4. Las Vegas \n";
    cout << "5. Europe \n";
    cin >> destination_select;
    
    if (destination_select == 1)
        destination = "Hawaii";
    else if (destination_select == 2)
        destination = "Bahamas";
    else if (destination_select == 3)
        destination = "Cancun";
    else if (destination_select == 4)
        destination = "Las Vegas";
    else if (destination_select == 5)
        destination = "Europe";

        
    // Get airline from users
    cout << "Please select from the Airline options \n";
    cout << "1. US Air \n";
    cout << "2. Delta \n";
    cout << "3. South West \n";
    cout << "4. Continental \n";
    cout << "5. American Airline \n";
    cin >> airline_select;
    
    switch(airline_select)
    {
        case 1: airline_name = "US Air";
            break;
        case 2: airline_name = "Delta";
            break;
        case 3: airline_name = "South West";
            break;
        case 4: airline_name = "Continental";
            break;
        case 5: airline_name = "American Airline";
            break;
    }
  
    
    // Get passenger count
    cout << "Please select how many passengers are traveling \n";
    cout << "1. One person \n";
    cout << "2. Two persons \n";
    cout << "3. Three persons \n";
    cout << "4. Four persons \n";
    cout << "5. Five persons \n";
    cin >> passenger_select;
    
    switch(passenger_select)
    {
        case 1: airline_name = "One person";
            break;
        case 2: airline_name = "Two persons";
            break;
        case 3: airline_name = "Three persons";
            break;
        case 4: airline_name = "Four persons";
            break;
        case 5: airline_name = "Five persons";
            break;
    }
    
    
    // Get passengers under 18
    cout << "How many passengers under the age of 18? ";
    cin >> is_under18;
    
   
    // Calculate cost of trip
    under_18 = airline_fare - (airline_fare * 0.25);
    under_18 = under_18 * is_under18;
    
    adult_cost = airline_fare * (passenger_select - is_under18);
    
    total_cost = adult_cost + under_18;
    
    cout << "Round-trip ticket price for adult(s) = $" << adult_cost << endl;
    cout << "Round-trip ticket price for person(s) under 18 = $" << under_18 << endl;
    cout << "Airline: " << airline_name << endl;
    cout << "Destination: " << destination << endl;
    cout << "Total cost of Round-trip: $" << fixed << setprecision(2) << total_cost << endl;
    
    
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
