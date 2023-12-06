#include <iostream>
#include "../Counter/Counter.h"

int main()
{
    Counter counter(1);

    std::cout << "Initial value!\n";
    std::cout << counter.GetValue() << "\n";

    std::cout << "We add 5 to the counter value\n";
    counter.Add(5);
    std::cout << counter.GetValue() << "\n";

    std::cout << "We subtract 2 to the counter value\n";
    counter.Sub(2);
    std::cout << counter.GetValue() << "\n";

    std::cout << "The final value is " << counter.GetValue() << "\n";

    std::cout << "We set the value to 10\n";
    counter.SetValue(10);
    std::cout << "Now the value is " << counter.GetValue() << "\n";
}
