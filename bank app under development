#include <iostream>
#include <string>
using namespace std;

class BankAccount {
protected:
    string username;
    double balance;
    int points;

public:
    BankAccount (string username, double balance, int points)
        : username(username), balance(balance), points(points) {}// parametraize Constructor

    void Dashboard() {
        cout << "\n Welcome Mr/Mrs " << username;
        cout << "\n My Dashboard";
    }

    double getBalance() {
        return balance;
    }

    int getPoints() {
        return points;
    }

    void setBalance(double balance) {
        this->balance = balance;
    }

    void setPoints(int points) {
        this->points = points;
    }
};

class ElectronicPayment : public BankAccount { // Inheritance 
public:
    ElectronicPayment (string username, double balance, int points)
        : BankAccount(username, balance, points) {}// parametraize Constructor

    void electronic(int e) {
        int m;
        // electronic bill payment

        cout << "\n Enter 1 for water or electricity bills :: 2 for phone services : ";
        cin >> e;

        if (e == 1) {//water or electricity bills
            int g;
            string name;

            cout << " Enter your Name : ";
            cin >> name;

            cout << "\n Enter the bills amount :";
            cin >> m;

            if (m > getBalance())
                cout << "\n there's no enoght money for this process.\n Refill your account and try again";

            else {
                cout << "\n To Submit Enter 1 :: 0 to exit : ";
                cin >> g;

                if (g == 1) {
                    cout << " Name :" << name << "\n Transfer completed " << "\n Amount :" << m;
                    setBalance(getBalance() - m);
                    cout << "\n your new balance is :" << getBalance();
                    setPoints(getPoints() + 2);
                    cout << "\n your new points is :" << getPoints();
                }
            }
        }
        else if (e == 2)
        {//phone services 
            int phone_number, i, j, o, t, c;

            cout << "\n Enter your phone number : ";
            cin >> phone_number;

            string cards[4] = { "Mobile Recharge Card 1 JOD", "Mobile Recharge Card 2 JOD", "Mobile Recharge Card 3 JOD", "Mobile Recharge Card 4 JOD" };
            for (i = 0, j = 1; i < 4, j <= 4; i++, j++) {
                cout << " " << j << "- " << cards[i] << "\n";
            }

            cout << "\n Choose Card Category : ";
            cin >> o;
            if (o == 1) {
                cout << "\n Mobile Recharge Card 1 JOD Will Cost 1.912JOD or 15 points \n";

                if (1.912 > getBalance() || 15 > getPoints())
                    cout << "\n But there's no enoght money or points for this process.\n Refill your account and try again";

                else {
                    cout << "\n Choose 1 for Cash :: 2 for points : ";
                    cin >> c;
                    cout << "\n To Submit Enter 1 :: 0 to exit : ";
                    cin >> t;

                    if (t == 1) {
                        cout << "\n payment successfully done " << "\n phone number : " << phone_number << "\n Amount : ";

                        if (c == 1) {
                            setBalance(getBalance() - 1.912);
                            cout << 1.912 << "$";
                        }
                        else if (c == 2) {
                            setPoints(getPoints() - 15);
                            cout << 15 << "points";
                        }

                        cout << "\n your new balance is : " << getBalance();
                        setPoints(getPoints() + 1);
                        cout << "\n your new points is :" << getPoints();
                    }
                    else
                        cout << " ";
                }
            }
            else if (o == 2) {
                cout << "\n Mobile Recharge Card 2 JOD Will Cost 3.373 JOD or 25 points \n";

                if (3.373 > getBalance() || 25 > getPoints())
                    cout << "\n But there's no enoght money or points for this process.\n Refill your account and try again";

                else {
                    cout << "\n Choose 1 for Cash :: 2 for points : ";
                    cin >> c;
                    cout << "\n To Submit Enter 1 :: 0 to exit : ";
                    cin >> t;

                    if (t == 1) {
                        cout << "\n payment successfully done " << "\n phone number : " << phone_number << "\n Amount : ";

                        if (c == 1) {
                            setBalance(getBalance() - 3.373);
                            cout << 3.373 << "$";
                        }
                        else if (c == 2) {
                            setPoints(getPoints() - 25);
                            cout << 25 << "points";
                        }

                        cout << "\n your new balance is : " << getBalance();
                        setPoints(getPoints() + 1);
                        cout << "\n your new points is :" << getPoints();
                    }
                    else
                        cout << " ";
                }
            }
            else if (o == 3) {
                cout << "\n Mobile Recharge Card 3 JOD Will Cost 4.835 JOD or 35 points \n";

                if (4.835 > getBalance() || 35 > getPoints())
                    cout << "\n But there's no enoght money or points for this process.\n Refill your account and try again";

                else {
                    cout << "\n Choose 1 for Cash :: 2 for points : ";
                    cin >> c;
                    cout << "\n To Submit Enter 1 :: 0 to exit : ";
                    cin >> t;

                    if (t == 1) {
                        cout << "\n payment successfully done " << "\n phone number : " << phone_number << "\n Amount : ";


                        if (c == 1) {
                            setBalance(getBalance() - 4.835);
                            cout << 4.835 << "$";
                        }
                        else if (c == 2) {
                            setPoints(getPoints() - 35);
                            cout << 35 << "points";
                        }

                        cout << "\n your new balance is : " << getBalance();
                        setPoints(getPoints() + 1);
                        cout << "\n your new points is :" << getPoints();
                    }

                    else
                        cout << " ";
                }

            }

            else if (o == 4) {
                cout << "\n Mobile Recharge Card 4 JOD Will Cost 6.396 JOD or 45 points \n";
                if (6.396 > getBalance() || 45 > getPoints())
                    cout << "\n But there's no enoght money or points for this process.\n Refill your account and try again";

                else {
                    cout << "\n Choose 1 for Cash :: 2 for points : ";
                    cin >> c;
                    cout << "\n To Submit Enter 1 :: 0 to exit : ";
                    cin >> t;

                    if (t == 1) {
                        cout << "\n payment successfully done " << "\n phone number : " << phone_number << "\n Amount : ";

                        if (c == 1) {
                            setBalance(getBalance() - 4.835);
                            cout << 6.396 << "$";
                        }
                        else if (c == 2) {
                            setPoints(getPoints() - 45);
                            cout << 45 << "points";
                        }

                        cout << "\n your new balance is : " << getBalance();
                        setPoints(getPoints() + 1);
                        cout << "\n your new points is :" << getPoints();

                    }
                    else
                        cout << " ";
                }


            }
        }

    }
};


class MoneyTransfer : public BankAccount {
public:
    MoneyTransfer (string username, double balance, int points)
        : BankAccount(username, balance, points) {}// parametraize Constructor

    void moneyt(int v) {
        //money transfer 
        cout << "\n Choose a friend : ";
        cin >> username;

        cout << "\n Enter money amount :";
        cin >> v;

        if (v > getBalance())
            cout << "\n there's no enoght money for this transfer";
        else {
            int r;

            cout << "\n To Submit Enter 1 :: 0 to exit : ";
            cin >> r;

            if (r == 1) {
                cout << "\n Transfer completed " << "\n Name :" << username << "\n Amount :" << v;

                setBalance(getBalance() - v);
                

                if (v <= 100)
                    setPoints(getPoints() + 2);

                else if (v > 100 && v < 500)
                    setPoints(getPoints() + 3);

                else if (v >= 500)
                    setPoints(getPoints() + 5);
            }
			cout << "\n your new balance is :" << getBalance()-v;
            cout << "\n your new points is :" << getPoints();
        }



    }
};

class CurrencyChanger : public BankAccount {
public:
    CurrencyChanger (string username, double balance, int points)
        : BankAccount(username, balance, points) {}// parametraize Constructor

    void changeCurrency(double balance) {
        int q;

        // change currency 

        cout << "\n Enter 1 to USD :: 2 to EUR :";
        cin >> q;
        if (q == 1)
            cout << "\n The new balance in US Dollar : " << (double)(balance * 1.4104372) << "$";
        else if (q == 2)
            cout << "\n The new balance in EURO : " << (double)(balance * 0.916) << "";
        else
            cout << "\nInvalid choice.\n try again";
    }
};

int main() {
    int x, y, z = 1, point;
    double balance, v, p, m, e;
    string username, new_username, password, repassword, phone_number;

    cout << " Enter number 1 to login :: 2 to register :: 3 to exit the app : ";
    cin >> x;

    switch (x) {
    case 1:
        cout << "\n Enter your username : "; // enter the same user name in  data base
        cin >> username;

        cout << "\n Enter your password : ";// enter the same password in  data base
        cin >> password;

        if (username == "mohammad") {
            balance = 1000.0;
            point = 60;
            if (password != "moh123") {
                cout << " wrong password ";
                return 0;
            }
        }
        else {
            cout << "\n wrong username or wrong password ";
            cout << "\n try again ";
            return 0;
        }
        break;

    case 2:
        cout << "\n Enter a new username : "; // you add a new user
        cin >> new_username;
        cout << "\n Enter a new password :";
        cin >> password;
        cout << "\n ReEnter your password : ";
        cin >> repassword;

        if (password != repassword) {
            cout << " Those password didn't match. Try again";
            return 0;
        }
        break;

    case 3:
        return 0;
        break;

    default:
        cout << "Invalid choice." << endl;
        return 0;
        break;
    }

    ElectronicPayment ep(username, balance, point);
    MoneyTransfer mt(username, balance, point);
    CurrencyChanger cc(username, balance, point);

    if (x == 1)
        ep.Dashboard();

    if (x == 2)
        ep.Dashboard();

    cout << endl;

    while (z != 0) {
        cout << "\n Your account balance is : " << ep.getBalance() << "JOD";
        cout << "\n Your points is : " << ep.getPoints() << "\n \n";

        for (int a = 1; a < 2; a++)
            for (int s = 1; s <= 130; s++)
                cout << "*";

        cout << endl;

        cout << "\n Choose an service : ";
        cout << "\n Enter number 1 for electronic bill payment :: 2 for money transfer :: 3 to change currency : ";
        cin >> y;

        if (y == 1) {
            ep.electronic(ep.getBalance());
        }
        else if (y == 2) {
            mt.moneyt(ep.getBalance());
        }
        else if (y == 3) {
            cout << "\n your current currency is Jordanian Dinar ";
            cc.changeCurrency(ep.getBalance());
        }

        cout << "\n \n Enter 1 to continue :: 0 to exit the app :";
        cin >> z;
    }

    return 0;
}
