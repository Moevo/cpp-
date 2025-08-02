#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <ctime>

using namespace std;    
class SimCard {
private:
     string phoneNumber;
    double balance;
    bool active;
     vector< string> callHistory;

public:
    SimCard( string number, double initialBalance = 0.0) : 
        phoneNumber(number), balance(initialBalance), active(true) {}

     string getPhoneNumber() const { return phoneNumber; }
    double getBalance() const { return balance; }
    bool isActive() const { return active; }

    void recharge(double amount) {
        if (amount > 0) {
            balance += amount;
             cout << "Successfully recharged $" << amount << ". New balance: $" << balance <<  endl;
        }
    }

    bool makeCall(const  string& recipient, int duration) {
        double callCost = duration * 0.1; // $0.1 per minute
        if (balance >= callCost) {
            balance -= callCost;
            time_t now = time(0);
             string callRecord = "Call to " + recipient + " - Duration: " + 
                                    to_string(duration) + " mins - Cost: $" + 
                                    to_string(callCost);
            callHistory.push_back(callRecord);
            return true;
        }
        return false;
    }

    void viewCallHistory() const {
         cout << "\nCall History for " << phoneNumber << ":\n";
        for (const auto& call : callHistory) {
             cout << call <<  endl;
        }
    }
};

class SimCardManager {
private:
     map< string, SimCard> simCards;
    int lastSimNumber;

public:
    SimCardManager() : lastSimNumber(1000) {}

     string generatePhoneNumber() {
        return "+1" +  to_string(++lastSimNumber);
    }

    void createNewSim(double initialBalance = 0.0) {
         string newNumber = generatePhoneNumber();
        simCards.emplace(newNumber, SimCard(newNumber, initialBalance));
         cout << "New SIM created with number: " << newNumber <<  endl;
    }

    void rechargeSim(const  string& phoneNumber, double amount) {
        auto it = simCards.find(phoneNumber);
        if (it != simCards.end()) {
            it->second.recharge(amount);
        } else {
             cout << "SIM card not found!" <<  endl;
        }
    }

    void makeCall(const  string& caller, const  string& recipient, int duration) {
        auto it = simCards.find(caller);
        if (it != simCards.end()) {
            if (it->second.makeCall(recipient, duration)) {
                 cout << "Call completed successfully" <<  endl;
            } else {
                 cout << "Insufficient balance for call" <<  endl;
            }
        } else {
             cout << "Caller SIM card not found!" <<  endl;
        }
    }

    void displaySimInfo(const  string& phoneNumber) {
        auto it = simCards.find(phoneNumber);
        if (it != simCards.end()) {
             cout << "\nSIM Information:" <<  endl;
             cout << "Phone Number: " << it->second.getPhoneNumber() <<  endl;
             cout << "Balance: $" << it->second.getBalance() <<  endl;
             cout << "Status: " << (it->second.isActive() ? "Active" : "Inactive") <<  endl;
            it->second.viewCallHistory();
        } else {
             cout << "SIM card not found!" <<  endl;
        }
    }
};

int main() {
    SimCardManager manager;
    int choice;
     string phoneNumber;
    double amount;
     string recipient;
    int duration;

    while (true) {
         cout << "\n=== SIM Card Management System ===\n";
         cout << "1. Create New SIM\n";
         cout << "2. Recharge SIM\n";
         cout << "3. Make Call\n";
         cout << "4. Display SIM Info\n";
         cout << "5. Exit\n";
         cout << "Enter your choice: ";
         cin >> choice;

        switch (choice) {
            case 1:
                 cout << "Enter initial balance: $";
                 cin >> amount;
                manager.createNewSim(amount);
                break;

            case 2:
                 cout << "Enter phone number: ";
                 cin >> phoneNumber;
                 cout << "Enter recharge amount: $";
                 cin >> amount;
                manager.rechargeSim(phoneNumber, amount);
                break;

            case 3:
                 cout << "Enter caller phone number: ";
                 cin >> phoneNumber;
                 cout << "Enter recipient phone number: ";
                 cin >> recipient;
                 cout << "Enter call duration (minutes): ";
                 cin >> duration;
                manager.makeCall(phoneNumber, recipient, duration);
                break;

            case 4:
                 cout << "Enter phone number: ";
                 cin >> phoneNumber;
                manager.displaySimInfo(phoneNumber);
                break;

            case 5:
                 cout << "Thank you for using SIM Card Management System!\n";
                return 0;

            default:
                 cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}