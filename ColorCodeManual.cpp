#include <iostream>
#include "ColorCodeDefinitions.h"

void printReferenceManual() {
    for(int i = 1; i <= TelCoColorCoder::numberOfMajorColors * TelCoColorCoder::numberOfMinorColors; i++) {
        TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(i);
        std::cout << i << " - " << colorPair.ToString() << std::endl;
    }
}

int main() {
    printReferenceManual();
    return 0;
}
