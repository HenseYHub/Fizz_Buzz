#include <unistd.h>

void fizzbuzz()
{
    int i;
    char first;
    char second;
    
    i = 1;
    while (i <= 100)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                write(1, "FizzBuzz\n", 9);
            }
            else if (i % 3 == 0)
                {
                    write(1, "Fizz\n", 5);
                }
            else if (i % 5 == 0)
                {
                    write(1, "Buzz\n", 5);
                }
            else if (i > 9)
                {
                first = i / 10 + '0';
                write(1, &first, 1);
                second = i % 10 + '0';
                write(1, &second, 1);
                write(1, "\n", 1);
                }
            else
            {
                second = i + '0';
                write(1, &second, 1);
                write(1, "\n", 1);
            }
        i++;
        }
}

int main(void)
{
    fizzbuzz();
    return (0);
}