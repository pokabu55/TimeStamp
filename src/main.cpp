#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include <ctime>

int main()
{ 
    time_t t = time(NULL);
    printf("%s", ctime(&t));
    printf("raw = %ld\n", t);

    return 0;
}