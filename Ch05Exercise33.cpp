#include <iostream>
using namespace std;

int main() {
    int a, b, t;
    
    // Prompt user for input
    cout << "Enter time for first dish (a): ";
    cin >> a;
    
    cout << "Enter additional time per dish (b): ";
    cin >> b;
    
    cout << "Enter total available time (t): ";
    cin >> t;
    
    int timeUsed = 0;
    int dishes = 0;
    
    // Loop to calculate how many dishes can be prepared
    while (true) {
        int currentDishTime = a + b * dishes;
        if (timeUsed + currentDishTime > t) {
            break;
        }
        timeUsed += currentDishTime;
        dishes++;
    }
    
    cout << "Bianca can prepare " << dishes << " dishes." << endl;
    
    return 0;
}
