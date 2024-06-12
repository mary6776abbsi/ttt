#include <iostream>
#include <climits> // хяг? гсйщгоЕ гр INT_MIN Ф INT_MAX

using namespace std;

int main() {
    int num;
    int smallest = INT_MAX; // ≤Ф█≤²йя?Д зоо яг гр гхйог хЕ х?²ДЕг?й Ц?²оЕ?Ц
    int largest = INT_MIN; // хря░²йя?Д зоо яг гр гхйог хЕ ДгЦмоФо ЦДщ? Ц?²оЕ?Ц

    cout << "Enter numbers (to stop, enter any non-numeric character):" << endl;

    // мАчЕ²? х?²ДЕг?й хяг? ░ящйД гзого Ф │?ог ≤яоД ≤Ф█≤²йя?Д Ф хря░²йя?Д зоо
    while (cin >> num) {
        if (num < smallest) {
            smallest = num; // г░я зоо ≤Ф█≤²йя гр ≤Ф█≤²йя?Д зоо щзА? хгто║ лг?░р?Д тФо
        }
        if (num > largest) {
            largest = num; // г░я зоо хря░²йя гр хря░²йя?Д зоо щзА? хгто║ лг?░р?Д тФо
        }
    }

    // █г│ ≤Ф█≤²йя?Д Ф хря░²йя?Д зоо хг │?гЦ ЦДгсх
    cout << "Smallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;

    return 0;
}
