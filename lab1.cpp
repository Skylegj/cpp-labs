/***************************
* Author: Chebotnikov A.V. *
* Variant: 8               *
* Title: Linear		         *
***************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // Mathematical constant
  const double PI = 3.141592653589793;

  // Block 1: Input data
  double thermalConductivity;
  double innerRadius;
  double outerRadius;
  double innerTemperature;
  double outerTemperature;
  double flatArea;
  double cylinderLength;

  cout << "lambda = ";
  cin >> thermalConductivity;
  cout << "R1 = ";
  cin >> innerRadius;
  cout << "R2 = ";
  cin >> outerRadius;
  cout << "t1 = ";
  cin >> innerTemperature;
  cout << "t2 = ";
  cin >> outerTemperature;
  cout << "F = ";
  cin >> flatArea;
  cout << "L = ";
  cin >> cylinderLength;

  // Block 2: Heat flow calculations
  double flatHeatFlow;
  double cylindricalHeatFlow;
  double sphericalHeatFlow;

  flatHeatFlow = thermalConductivity * flatArea * (innerTemperature - outerTemperature)
    / (outerRadius - innerRadius);
  cylindricalHeatFlow = 2.0 * PI * thermalConductivity * cylinderLength
    * (innerTemperature - outerTemperature) / log(outerRadius / innerRadius);
  sphericalHeatFlow = 4.0 * PI * thermalConductivity * (innerTemperature - outerTemperature)
    / (1.0 / innerRadius - 1.0 / outerRadius);

  // Block 3: Output results
  cout << fixed;
  cout.precision(6);
  cout << "Q1 = " << flatHeatFlow << endl
    << "Q2 = " << cylindricalHeatFlow << endl
    << "Q3 = " << sphericalHeatFlow << endl;

  return 0;
}