#include <iostream>
#include "Student.h"

using namespace std;

int main() 
{
  
// == DO NOT CHANGE THE MAIN PROGRAM =================
   Student mystd;
   mystd.assignDetails(1212, "Amalinga");
   mystd.display();
//==========================
   return 0;
===========
   int Height, Length, Width;
  
   cout << "Enter the Height of the Box : ";
   cin >> Height;
   cout << "Enter the Length of the Box : ";
   cin >> Length;
   cout << "Enter the width of the Box :  ";
   cin >> Width;
   // ===========================================
  
   // 2. Use setters assign height, length, width throw
  Box1.setHeight(Height);
  Box1.setLength(Length);
  Box1.setWidth(Width);
  
   // === DO NOT CHANGE THE OUTPUT =============
   cout << "Box Height " << Box1.getHeight() << endl;
   cout << "Box Length " << Box1.getLength() << endl;
   cout << "Box Width  " << Box1.getWidth() << endl;
   cout << "Volume of Box is " << Box1.calcVolume() << endl;
   // ==========================================
      return 0;
}
