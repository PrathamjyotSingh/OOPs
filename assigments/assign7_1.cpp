#include <iostream>
using namespace std;

class Time
{
private:
    int h, m, s; 
public:
    Time(int h = 0, int m = 0, int s = 0) {
      this->h = h;
      this->m = m;
      this->s = s;
    }
    void show()
    {
        cout << h << ":" << m << ":" << s << endl;
    }
    Time operator+(Time t)
    {
        Time result;
        result.s = s + t.s; 
        result.m = m + t.m; 
        result.h = h + t.h;
        if (result.s >= 60)
        {
            result.s -= 60;
            result.m++;
        }
        if (result.m >= 60)
        {
            result.m -= 60;
            result.h++;
        }
        return result;
    }
};
int main()
{
    Time t1(5, 15, 34), t2(9, 53, 58), t3;
    t3 = t2 + t1;
    t3.show();
}