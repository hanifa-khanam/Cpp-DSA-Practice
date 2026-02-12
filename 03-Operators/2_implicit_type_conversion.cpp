#include <iostream>
using namespace std;

int main() {
    cout << "===Primitive DataTypes and Implicit Conversion Demo===\n\n" ;

    char c = 'A';  // ASCII 65
    short s = 20;
    int i = 100;
    long l = 1000L;
    float f = 12.5f;
    double d = 55.78;
    long double ld = 200.123456L;


    cout << "char  ('A' = 65) + int        = " << (c + i) << "   --> char → int\n";
    cout << "char  + float                 = " << (c + f) << "   --> char → int → float\n";
    cout << "int   + float                 = " << (i + f) << "   --> int → float\n";
    cout << "float + double                = " << (f + d) << "   --> float → double\n";
    cout << "double + long double          = " << (d + ld) << "   --> double → long double\n";
    cout << "short + long                  = " << (s + l) << "   --> short → int → long\n";
    cout << "int   + long                  = " << (i + l) << "   --> int → long\n";
    cout << "short + float                 = " << (s + f) << "   --> short → int → float\n";
    cout << "char  + double                = " << (c + d) << "   --> char → int → double\n";
    cout << "long  + long double           = " << (l + ld) << "   --> long → long double\n";

    cout << "\n=== Conversion Orders (Lowest → Highest) ===\n";
    cout << "char → short → int → long → float → double → long double\n";

    return 0;    
}
