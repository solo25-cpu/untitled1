#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main()
{
    double salespercentage;
    double sales;
    double salesforeastcoast;

     salespercentage = .58;
     sales = 8600000;
     salesforeastcoast = salespercentage * sales;
     cout <<fixed;
    cout <<setprecision;
    cout  << "the sales for the eastcoast divison were" <<right<< salesforeastcoast <<endl;
    cout << "the sales for the entire company were" << sales << endl;

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}