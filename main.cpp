#include <iostream>

void drawRectangle(int height, int width) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (i == 0 || i == height - 1) {
                
                std::cout << "- ";
            }
            else {
                
                if (j == 0 || j == width - 1) {
                    std::cout << "| ";
                }
                else {
                    std::cout << "  ";
                }
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    int height, width;

    std::cout << "Enter the height of the rectangle: ";
    std::cin >> height;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    drawRectangle(height, width);

    return 0;
}