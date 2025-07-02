#include <iostream>

void checkEvenOrOdd();
void maximumNumber();
void absolute();
void positiveNegativeOrZero();
void leapYearCheck();
void gradeBasedOnMarks();
void minimumOfThreeNumber();
void triangleValidityCheck();
void checkIfNumberIsAMultipleOfAnother();
void simpleCalculator();
void checkIfThreeNumbersAreEqual();
void findTheMiddleNumber();
void checkIfANumberIsBetweenTwoNumbers();
void convertTemperature();
void trafficLight();
void checkForRightAngleTriangle();
void ATMMachine();
void compareTwoFractions();
int main()
{
    int choice;
    std::cout << "Select a function to run:\n";
    std::cout << "1. Check Even or Odd\n";
    std::cout << "2. Find Maximum of Two Numbers\n";
    std::cout << "3. Find Absolute Value\n";
    std::cout << "4. Check Positive, Negative or Zero\n";
    std::cout << "5. Check Leap Year\n";
    std::cout << "6. Grade Based on Marks\n";
    std::cout << "7. Minimum of Three Numbers\n";
    std::cout << "8. Triangle Validity Check\n";
    std::cout << "9. Check if Number is a Multiple of Another\n";
    std::cout << "10. Simple Calculator\n";
    std::cout << "11. Check if Three Numbers are Equal\n";
    std::cout << "12. Find the Middle Number\n";
    std::cout << "13. Check if a Number is Between Two Numbers\n";
    std::cout << "14. Convert Temperature\n";
    std::cout << "15. Traffic Light\n";
    std::cout << "16. Check for Right Angle Triangle\n";
    std::cout << "17. ATM Machine\n";
    std::cout << "18. Compare Two Fractions\n";

    std::cout << "Enter your choice: ";

    std::cin >> choice;

    switch (choice)
    {
    case 1:
        checkEvenOrOdd();
        break;
    case 2:
        maximumNumber();
        break;
    case 3:
        absolute();
        break;
    case 4:
        positiveNegativeOrZero();
        break;
    case 5:
        leapYearCheck();
        break;
    case 6:
        gradeBasedOnMarks();
        break;
    case 7:
        minimumOfThreeNumber();
        break;
    case 8:
        triangleValidityCheck();
        break;
    case 9:
        checkIfNumberIsAMultipleOfAnother();
        break;
    case 10:
        simpleCalculator();
        break;
    case 11:
        checkIfThreeNumbersAreEqual();
        break;
    case 12:
        findTheMiddleNumber();
        break;
    case 13:
        checkIfANumberIsBetweenTwoNumbers();
        break;
    case 14:
        convertTemperature();
        break;
    case 15:
        trafficLight();
        break;
    case 16:
        checkForRightAngleTriangle();
        break;
    case 17:
        ATMMachine();
        break;
    case 18:
        compareTwoFractions();
        break;
    default:
        std::cout << "Invalid choice." << std::endl;
        break;
    }
    return 0;
}

void checkEvenOrOdd()
{
    int number;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> number;
    if (number % 2 == 0)
    {
        std::cout << "Even" << std::endl;
    }
    else
    {
        std::cout << "Odd" << std::endl;
    }
}

void maximumNumber()
{
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    if (a > b)
    {
        std::cout << "Maximum: " << a << std::endl;
    }
    else
    {
        std::cout << "Maximum: " << b << std::endl;
    }
}

void absolute()
{
    int a;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> a;
    std::cout << "Absolute: " << abs(a) << std::endl;
}

void positiveNegativeOrZero()
{
    int a;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> a;
    if (a > 0)
    {
        std::cout << "Positive" << std::endl;
    }
    else if (a < 0)
    {
        std::cout << "Negative" << std::endl;
    }
    else
    {
        std::cout << "Zero" << std::endl;
    }
}

void leapYearCheck()
{
    int a;
    std::cout << "Enter a year: " << std::endl;
    std::cin >> a;
    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
    {
        std::cout << "Leap Year" << std::endl;
    }
    else
    {
        std::cout << "Not a Leap Year" << std::endl;
    }
}

void gradeBasedOnMarks()
{
    int a;
    std::cout << "Enter grade: ";
    std::cin >> a;

    if (a < 0 || a > 100)
    {
        std::cout << "Invalid Grade" << std::endl;
        return;
    }

    if (a >= 90 && a <= 100)
    {
        std::cout << "A" << std::endl;
    }
    else if (a >= 80 && a <= 89)
    {
        std::cout << "B" << std::endl;
    }
    else if (a >= 70 && a <= 79)
    {
        std::cout << "C" << std::endl;
    }
    else if (a >= 60 && a <= 69)
    {
        std::cout << "D" << std::endl;
    }
    else
    {
        std::cout << "F" << std::endl;
    }
}

void minimumOfThreeNumber()
{

    int a, b, c;
    std::cout << "Enter three numbers: " << std::endl;
    std::cin >> a >> b >> c;
    if (a < b && a < c)
    {
        std::cout << "Minimum: " << a << std::endl;
    }
    else if (b < a && b < c)
    {
        std::cout << "Minimum: " << b << std::endl;
    }
    else
    {
        std::cout << "Minimum: " << c << std::endl;
    }
}

void triangleValidityCheck()
{
    int a, b, c;
    std::cout << "Enter three sides: " << std::endl;
    std::cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        std::cout << "Valid" << std::endl;
    }
    else
    {
        std::cout << "Invalid" << std::endl;
    }
}

void checkIfNumberIsAMultipleOfAnother()
{
    int a, b;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> a >> b;
    if (a % b == 0)
    {
        std::cout << "Multiple" << std::endl;
    }
    else
    {
        std::cout << "Not a Multiple" << std::endl;
    }
}

void simpleCalculator()
{
    int a, b;
    char op;
    std::cout << "Enter two numbers and an operator (+, -, *, /): " << std::endl;
    std::cin >> a >> b >> op;
    switch (op)
    {
    case '+':
        std::cout << "Result: " << a + b << std::endl;
        break;
    case '-':
        std::cout << "Result: " << a - b << std::endl;
        break;
    case '*':
        std::cout << "Result: " << a * b << std::endl;
        break;
    case '/':
        if (b != 0)
            std::cout << "Result: " << a / b << std::endl;
        else
            std::cout << "Division by zero" << std::endl;
        break;
    default:
        std::cout << "Invalid operator" << std::endl;
    }
}

void checkIfThreeNumbersAreEqual()
{
    int a, b, c;
    std::cout << "Enter three numbers: " << std::endl;
    std::cin >> a >> b >> c;
    if (a == b && b == c)
    {
        std::cout << "Equal" << std::endl;
    }
    else
    {
        std::cout << "Not Equal" << std::endl;
    }
}

void findTheMiddleNumber()
{
    int a, b, c;
    std::cout << "Enter three numbers: " << std::endl;
    std::cin >> a >> b >> c;
    if ((a > b && a < c) || (a < b && a > c))
    {
        std::cout << a << std::endl;
    }
    else if ((b > a && b < c) || (b < a && b > c))
    {
        std::cout << b << std::endl;
    }
    else
    {
        std::cout << c << std::endl;
    }
}

void checkIfANumberIsBetweenTwoNumbers()
{
    int a, b, c;
    std::cout << "Enter three numbers: " << std::endl;
    std::cin >> a >> b >> c;
    if (((a + b) / 2) == c)
    {
        std::cout << "Middle" << std::endl;
    }
    else
    {
        std::cout << "Not Middle" << std::endl;
    }
}

void convertTemperature()
{
    int a;
    char u;
    std::cout << "Enter temperature and unit (C/F): " << std::endl;
    std::cin >> a >> u;
    if (u == 'C' || u == 'c')
    {
        std::cout << "Fahrenheit: " << (a * 9 / 5) + 32 << std::endl;
    }
    else if (u == 'F' || u == 'f')
    {
        std::cout << "Celsius: " << (a - 32) * 5 / 9 << std::endl;
    }
    else
    {
        std::cout << "Invalid unit" << std::endl;
    }
}

void trafficLight()
{
    char a;
    std::cout << "Enter traffic light color (R/Y/G): " << std::endl;
    std::cin >> a;
    switch (a)
    {
    case 'R':
    case 'r':
        std::cout << "Stop" << std::endl;
        break;
    case 'Y':
    case 'y':
        std::cout << "Get Ready" << std::endl;
        break;
    case 'G':
    case 'g':
        std::cout << "Go" << std::endl;
        break;
    default:
        std::cout << "Invalid color" << std::endl;
    }
}

void checkForRightAngleTriangle()
{
    int a, b, c;
    std::cout << "Enter three sides: " << std::endl;
    std::cin >> a >> b >> c;

    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
    {
        std::cout << "Right Angle Triangle" << std::endl;
    }
    else
    {
        std::cout << "Not a Right Angle Triangle" << std::endl;
    }
}

void ATMMachine()
{
    double balance;
    int withdrawal;

    std::cout << "Enter balance and amount to withdraw: " << std::endl;
    std::cin >> balance, withdrawal;

    if (withdrawal > balance)
    {
        std::cout << "Insufficient funds" << std::endl;
    }
    else if (withdrawal < 0)
    {
        std::cout << "Invalid amount" << std::endl;
    }
    else if (withdrawal % 5 != 0)
    {
        std::cout << "Withdrawal amount must be a multiple of 5" << std::endl;
    }
    else if (withdrawal > balance - 0.50)
    {
        std::cout << "Insufficient funds after withdrawal" << std::endl;
    }
    else
    {
        balance -= withdrawal;
        std::cout << balance << std::endl;
    }
}

void compareTwoFractions()
{
    int a, b, c, d;
    std::cout << "Enter four space-seperated integers representing two fractions: " << std::endl;
    std::cin >> a >> b >> c >> d;

    if (a * d > b * c)
    {
        std::cout << "First" << std::endl;
    }
    else if (a * d < b * c)
    {
        std::cout << "Second" << std::endl;
    }
    else
    {
        std::cout << "Both fractions are equal" << std::endl;
    }
}