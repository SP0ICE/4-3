#include <iostream>
#include <fstream>
#include <string>

class TPen {
private:
    int FColor;
public:
    void setColor(int newColor) {
        FColor = newColor;
    }

    int getColor() const {
        return FColor;
    }
};

int main() {
    const int n = 10;
    TPen pens[n];
    std::ifstream file("colors.txt");
    int color;
    int i = 0;
    while (file >> std::hex >> color && i < n) {
        pens[i].setColor(color);
        i++;
    }
    for (int i = 0; i < n; i++) {
        std::cout << "Color of pen " << i << " is #" << std::hex << pens[i].getColor() << std::endl;
    }

    return 0;
}