#include <iostream>
#include <fstream>

int main() {
    std::fstream file;
    file.open ("file.txt", std::fstream::in | std::fstream::out | std::fstream::app);
    file.close();
    return 0;
}
