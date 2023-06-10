#include<iostream>
#include"File.hpp"
#include"Hashtable.hpp"

using namespace std;

int main()
{
    HashTable h;
    int Size = 0;
    char Text[100];

    OpenFile(Text,&Size);

    Initialize(&h,Size);

    Imprime(&h);

    return 0;
}

//end code