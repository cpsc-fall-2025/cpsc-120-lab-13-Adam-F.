#include <iostream>

int main() {
    int h;
    std::cout << "Enter the height of the Christmas tree: ";
    std::cin >> h;

    // Draw the branches (levels 1 to h)
    for (int i = 1; i <= h; i++) {
        // Print leading spaces to center the branch
        for (int s = 0; s < h - i; s++) {
            std::cout << " ";
        }
        // Print stars for the branch: 2*i - 1 stars per level
        for (int st = 0; st < 2 * i - 1; st++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Draw the trunk (3 lines high)
    for (int t = 0; t < 3; t++) {
        // Print leading spaces to center the trunk (same as the bottom branch)
        for (int s = 0; s < h - 1; s++) {
            std::cout << " ";
        }
        std::cout << "#" << std::endl;
    }

    return 0;
}