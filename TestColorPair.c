#include &lt;stdio.h&gt;
#include &lt;assert.h&gt;
#include "ColorPair.h"
#define MAX_COLORPAIR_NAME_CHARS 16
void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor) {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&amp;colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
   Pair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber) {
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&amp;colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    return 0;
}
