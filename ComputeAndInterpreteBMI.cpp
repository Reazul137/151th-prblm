#include<iostream>
#define KIILOGREMS_PER_POUND 0.45359237;
#define METERS_PER_INCH 0.0254;
using namespace std;
int main()
{
    double weight, height, weightInKilograms, heightInMeters, bmi ;


    cout << " Enter weight in pounds : ";
    cin >> weight;

    cout << "\nEnter height in inches : ";
    cin >> height;

    weightInKilograms = weight * KIILOGREMS_PER_POUND;
    heightInMeters    = height * METERS_PER_INCH;
    bmi = weightInKilograms / (heightInMeters * heightInMeters);

    cout << " BMI is " << bmi << endl;
    if (bmi < 18.5)
        cout << " Underweight " << endl;
    else if (bmi < 25)
        cout << " Normal " << endl;
    else if ( bmi < 30)
        cout << " Overweight " << endl;
    else
        cout << " Obese " << endl;

    cout << endl;


    return 0;
}
