#include <iostream>
using namespace std ;

int main ()

{//Q1- declare rainfall in int
    int intRaiJan = 83;
       int intRaiFeb = 12 ;
             int intRaiMarc = 33 ;
        int intRaiApr = 49;
             int intRaiMay = 76;
              int intRaiJun = 52;
        int intRaiJul = 58;
                int intRaiAug = 21;
    int intRaiSep = 86;
                int intRaiOct = 9;
                        int intRaiNov = 38;
        int intRaiDec = 86;

        // Q4 create  the c onstante to convert from mm to inch

     const double cConvert = 0.03937007874;
//Q2- create ans store each months

cout<<"\tJan\tFeb\tMarc\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\t" <<endl ;

cout <<"\t"<<intRaiJan
      <<"\t"<< intRaiFeb
      <<"\t"<< intRaiMarc
      <<"\t"<< intRaiApr
      <<"\t"<< intRaiMay
      <<"\t"<< intRaiJun
      <<"\t"<< intRaiJul
      <<"\t"<< intRaiAug
      <<"\t"<< intRaiSep
      <<"\t"<< intRaiOct
      <<"\t"<< intRaiNov
      <<"\t"<< intRaiDec<<endl << endl;

      // Q3- Calcule the average

      int intTotalRai = intRaiJan + intRaiFeb + intRaiMarc +intRaiApr + intRaiMay + intRaiJun+ intRaiJul + intRaiAug + intRaiSep+ intRaiOct+ intRaiNov + intRaiDec;

double dblAverageRain = intTotalRai/ 12.0;
//Q7- Display the average of rain in mm
cout << " The annual  average of rain is (mm): " <<dblAverageRain << endl<<endl;

// Q5 -convert the average rainfall (mm) to inches

double dblAverageRainInch = dblAverageRain * cConvert;

//Q8- Display the average of rain in inches
cout <<" The average rain fall ( in Inches) is:" << dblAverageRainInch<< endl;

    return 0;
}
// powered by A.L P 220033221
