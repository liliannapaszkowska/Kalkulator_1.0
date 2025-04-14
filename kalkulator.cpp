#include <iostream>
#include <cmath>
#include <iomanip>
#include "kalkulator.h"

using namespace std;

Kalkulator::Kalkulator() : mem(0.0), mem_used(false) {}

double Kalkulator::sum(double a, double b) {
    mem = a + b;
    mem_used = true;
    return mem;
}

double Kalkulator::sub(double a, double b) {
    mem = a - b;
    mem_used = true;
    return mem;
}

double Kalkulator::tim(double a, double b) {
    mem = a * b;
    mem_used = true;
    return mem;
}

double Kalkulator::dev(double a, double b) {
    if (b == 0) {
        cout << "Błąd: Nie można dzielić przez zero!" << endl;
        mem_used = false;
        return 0;
    }
    mem = a / b;
    mem_used = true;
    return mem;
}

double Kalkulator::mod(double a, double b) {
    if (b == 0) {
        cout << "Błąd: Nie można dzielić przez zero!" << endl;
        mem_used = false;
        return 0;
    }
    mem = fmod(a, b);
    mem_used = true;
    return mem;
}

void Kalkulator::clear_mem() {
    mem = 0.0;
    mem_used = false;
    cout << "Pamięć została wyczyszczona." << endl;
}

void Kalkulator::show_mem() {
    if (mem_used)
        cout << "Pamięć: " << mem << endl;
    else
        cout << "Pamięć jest pusta." << endl;
}

void Kalkulator::add_to_mem(double x) {
    mem += x;
    mem_used = true;
    cout << "Dodano do pamięci. Nowa wartość: " << mem << endl;
}

void Kalkulator::sub_from_mem(double x) {
    mem -= x;
    mem_used = true;
    cout << "Odjęto od pamięci. Nowa wartość: " << mem << endl;
}

double Kalkulator::get_mem() {
    return mem;
}

void Kalkulator::set_mem(double val) {
    mem = val;
    mem_used = true;
}
