/******************************
* Автор: Чеботников Александр *
* Задание: Линейные алгоритмы *
* Вариант: 8                  *
******************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  const double PI = 3.141592653589793;

  double thermalConductivity;
  double innerRadius;
  double outerRadius;
  double innerTemperature;
  double outerTemperature;
  double flatArea;
  double cylinderLength;

  double flatHeatFlow;
  double cylindricalHeatFlow;
  double sphericalHeatFlow;

  cout << "lambda = ";
  cin >> thermalConductivity;

  cout << "R1 (m) = ";
  cin >> innerRadius;

  cout << "R2 (m) = ";
  cin >> outerRadius;

  cout << "t1 = ";
  cin >> innerTemperature;

  cout << "t2 = ";
  cin >> outerTemperature;

  cout << "F (m^2) = ";
  cin >> flatArea;

  cout << "L (m) = ";
  cin >> cylinderLength;

  flatHeatFlow = thermalConductivity * flatArea * (innerTemperature - outerTemperature) / (outerRadius - innerRadius);
  cylindricalHeatFlow = 2.0 * PI * thermalConductivity * cylinderLength * (innerTemperature - outerTemperature) / log(outerRadius / innerRadius);
  sphericalHeatFlow = 4.0 * PI * thermalConductivity * (innerTemperature - outerTemperature) / (1.0 / innerRadius - 1.0 / outerRadius);

  cout << "Q1 = " << flatHeatFlow << endl
       << "Q2 = " << cylindricalHeatFlow << endl
       << "Q3 = " << sphericalHeatFlow << endl;

  return 0;
}
