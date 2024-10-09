#include "ColorCodeTests.cpp"  // Includes test functions
#include "ColorCodeManual.cpp" // Includes the reference manual feature

int main() {
    // Run tests for color coding
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    // Print reference manual for wiring personnel
    printReferenceManual();

    return 0;
}
