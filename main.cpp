#include "Complex.h"

int main()
{
    Complex arr[2];
    cout << "Input 2 complex numbers: ";
    for (int i = 0; i < 2; i++)
    {
        double re = 0;
        double im = 0;
        if (!(cin >> re >> im))
        {
            cout << "Error!";
            return 0;
        }
        arr[i] = { im,re };
    }

    arr[0].prin(arr[0].sum(arr[1]));
    arr[0].prin(arr[0].subs(arr[1]));
    arr[0].prin(arr[0].multi(arr[1]));
    arr[0].prin(arr[0].div(arr[1]));


    ifstream file("complex.txt");
    int n = 0;
    vector<Complex> p;
    while (!(file.eof()))
    {
        double re = 0, im = 0;
        file >> re >> im;
        p.push_back({ im,re });
        n++;
    }
    Complex maxim;
    double maxlen = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i].leng() > maxlen)
        {
            maxlen = p[i].leng();
            maxim = p[i];
        }
    }
    cout << "Max len img: " << maxim.re << ((maxim.im < 0) ? "" : "+") << maxim.im << "i" << endl;
}
