#ifndef KALKULATOR_H
#define KALKULATOR_H

#include <string>

class Kalkulator {
private:
    double mem;
    bool mem_used;

public:
    Kalkulator();

    double sum(double a, double b);
    double sub(double a, double b);
    double tim(double a, double b);
    double dev(double a, double b);
    double mod(double a, double b);

    void clear_mem();
    void show_mem();
    void add_to_mem(double x);
    void sub_from_mem(double x);

    double get_mem();         // GET
    void set_mem(double val); // SET

    std::string to_base(int number, int base);
    int from_base(std::string input, int base);

    void menu();
};

#endif
