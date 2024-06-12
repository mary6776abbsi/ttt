#include <iostream>
#include <climits> // ���? ������� �� INT_MIN � INT_MAX

using namespace std;

int main() {
    int num;
    int smallest = INT_MAX; // �捘���?� ��� �� �� ����� �� �?����?� �?���?�
    int largest = INT_MIN; // ��ѐ���?� ��� �� �� ����� �� ������� ���? �?���?�

    cout << "Enter numbers (to stop, enter any non-numeric character):" << endl;

    // ����? �?����?� ���? ����� ����� � �?�� ���� �捘���?� � ��ѐ���?� ���
    while (cin >> num) {
        if (num < smallest) {
            smallest = num; // ǐ� ��� �捘��� �� �捘���?� ��� ���? ���ϡ ��?��?� ���
        }
        if (num > largest) {
            largest = num; // ǐ� ��� ��ѐ��� �� ��ѐ���?� ��� ���? ���ϡ ��?��?� ���
        }
    }

    // �ǁ �捘���?� � ��ѐ���?� ��� �� �?�� �����
    cout << "Smallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;

    return 0;
}
