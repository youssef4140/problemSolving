#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream> 


using namespace std;


double round_to(double num) {
    return round(num * 1000.0) / 1000.0;
}


string pad(double num) {
    ostringstream oss;
    oss << fixed << setprecision(3);
    oss << num;
    return oss.str();
}

void caseOne(double x, double y, double z, int i)
{

    double u = x;
    double v = y;
    double t = z;

    double a = ((v - u) / t);
    double s = ((u * t) + (0.5 * a * t * t));
    cout << "Case "<<i<<": " << pad(s) << " " << pad(a) << endl;
    
}

void caseTwo(double x, double y, double z, int i)
{

    double u = x;
    double v = y;
    double a = z;

    double t = ((v - u)/a);
    double s = (u * t) + (0.5 * a * t * t);
    cout << "Case "<<i<<": " << pad(s) << " " << pad(t) << endl;
    
}

void caseThree(double x, double y, double z, int i)
{
    double u = x;
    double a = y;
    double s = z;

    double v = sqrt((u * u + (2 * a * s)));
    double t = ((v-u)/a);

    cout << "Case "<<i<<": " << pad(v) << " " << pad(t) << endl;
    
}

void caseFour(double x, double y, double z, int i)
{
    double v = x;
    double a = y;
    double s = z;

    double u = sqrt((v*v)-(2*a*s));

    double t = ((v - u)/a);
    cout << "Case "<<i<<": " << pad(u)<< " " << pad(t) << endl;
    
}

int main()
{
    int c;
    double x, y, z;
    int i = 1;


    while (cin >> c >> x >> y >> z)
    {
        switch (c)
        {
        case 1:
            caseOne(x, y, z, i);
            break;
        case 2:
            caseTwo(x, y, z, i);
            break;
        case 3:
            caseThree(x, y, z, i);
            break;
        case 4:
            caseFour(x, y, z, i);
            break;
        default:
            break;
        }
        i++;
    }
    return 0;
}