//
// Created by razvan on 29.10.2018.
//

#include <stdio.h>
#include <string.h>
#include "List.h"
#include <fstream>
#include <iomanip>

using namespace std;

int main ()
{
    List list("/home/razvan/CLionProjects/CPPLabs/assignment3/emps.txt");

    ofstream out("/home/razvan/CLionProjects/CPPLabs/assignment3/out");
    int a;
    bool e = true;
    while (e) {
        cout << "Ce doriti sa faceti in aceasta zi minunata?: ";
        cin >> a;
        switch (a) {

            case 1:
                e = false;
                break;
            case 2:
                int b;
                cout << "Payrol: ";
                cin >> b;
                for (int i = 0; i < list.getNumbempl(); i++) {
                    if (b == list.lista[i].getPayroll()) {
                        out << setw(8) << left << list.lista[i].getPayroll() << setw(10) << list.lista[i].getSalary()
                            << setw(16) << list.lista[i].getJob() << setw(33) << list.lista[i].getName() << endl;
                        cout << setw(8) << left << list.lista[i].getPayroll() << setw(10) << list.lista[i].getSalary()
                            << setw(16) << list.lista[i].getJob() << setw(33) << list.lista[i].getName() << endl;
                    }
                }
                break;
            case 3:
                int s, f;
                cout << "Min sal: ";
                cin >> s;
                cout << "Max sal: ";
                cin >> f;
                for (int i = 0; i < list.getNumbempl(); i++) {
                    if (s <= list.lista[i].getSalary() && f >= list.lista[i].getSalary()) {
                        out << setw(8) << left << list.lista[i].getPayroll() << setw(10) << list.lista[i].getSalary()
                            << setw(16) << list.lista[i].getJob() << setw(33) << list.lista[i].getName() << endl;
                        cout << setw(8) << left << list.lista[i].getPayroll() << setw(10) << list.lista[i].getSalary()
                            << setw(16) << list.lista[i].getJob() << setw(33) << list.lista[i].getName() << endl;
                    }
                }
                break;
            case 4:
                string j;
                cout << "Job: ";
                cin >> j;
                for (int i = 0; i < list.getNumbempl(); i++) {
                    if (j == list.lista[i].getJob()) {
                        out << setw(8) << left << list.lista[i].getPayroll() << setw(10) << list.lista[i].getSalary()
                            << setw(16) << list.lista[i].getJob() << setw(33) << list.lista[i].getName() << endl;
                        cout << setw(8) << left << list.lista[i].getPayroll() << setw(10) << list.lista[i].getSalary()
                            << setw(16) << list.lista[i].getJob() << setw(33) << list.lista[i].getName() << endl;
                    }
                }
                break;

        }
    }
    out.close();

    return 0;
}