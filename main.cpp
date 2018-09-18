#include <iostream>

using namespace std;

int main() {
    cout << "\n Welcome to my cleaning service. \n The room rates are as follows:\n Small Rooms: $25 per room\n Large Rooms: $35 per room\n All rooms cleaned are subject to additional 6% state sales tax\n Please enter the number of small rooms you would like cleaned: ";
        int small_rooms;
        cin >> small_rooms;
    cout << " Enter the total number of large rooms you would like cleaned: ";
        int large_rooms;
        cin >> large_rooms;
    cout << " Okay. You have entered " << small_rooms << " small rooms to be cleaned, and " << large_rooms << " large rooms to be \n cleaned. \n ";
        const int small_rooms_cost (25);
        const int large_rooms_cost (35);
        int small_rooms_estimate (small_rooms * small_rooms_cost);
        int large_rooms_estimate (large_rooms * large_rooms_cost);
    cout << "Your estimate is: \n Small Rooms: " << small_rooms << " * " << small_rooms_cost << " for " << small_rooms * small_rooms_cost << " $\n";
    cout << " Large Rooms: " << large_rooms << " * " << large_rooms_cost << " for " << large_rooms * large_rooms_cost << " $\n";
        const double sales_tax (.06);
        int total_tax ((large_rooms * large_rooms_cost + small_rooms * small_rooms_cost) * sales_tax);
    cout << " Tax: $" << total_tax << "\n";
        double total_cost (small_rooms_estimate + large_rooms_estimate + total_tax);
        const int estimate_length (30);
    cout << " The total estimate for this cleaning job, given the information \n provided, is $" << total_cost << ". This estimate is valid for " << estimate_length << " days.\n Thank you!\n";
    
    return 0;
}