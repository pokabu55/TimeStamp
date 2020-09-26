#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include <ctime>

int main()
{ 
    time_t t1 = time(NULL);
    printf("%s", ctime(&t1));
    printf("raw = %ld\n", t1);


	int32_t t2 = 1601113393;
	int32_t t3 = 1701113393;

    int32_t sub2 = t1 - t2;
    printf("sub = %d\n", sub2);
    int32_t sub3 = t1 - t3;
    printf("sub = %d\n", sub3);


    return 0;
}