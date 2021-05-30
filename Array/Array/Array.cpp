// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i]<<endl;

    }
}

int main()
{
    int guesses[] = {2,4,6,8,10};
    int size = sizeof(guesses) / sizeof(int);
    cout << sizeof(guesses) << endl;
    print_array(guesses, 5);
   
    /*
    int num_elements = 5;

    int size = sizeof(guesses) / sizeof(guesses[0]);
    cout << size << endl;
    for (int i = 0; i < num_elements; i++)
    {
        cout << guesses[i] << endl;
    } */
    return 0;

}

