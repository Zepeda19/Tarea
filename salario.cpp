#include <iostream>
using namespace std;
int main()
{
    float sueldo;
    cout<<"Ingresa tu sueldo actual ";
    cin>>sueldo;
/*
Sin necesidad de usar otras variables, calcula el nuevo sueldo de acuerdo a la siguiente tabla
rango aumento
0 - 1000 18% 
1001 - 1100 15%
1101 - 1200 12%
1201 - 1300 10%
mas de 1300 8%
*/

        if(sueldo>=0&&sueldo<=1000)
        {
           sueldo=sueldo+(sueldo*.18);
            cout<<"\nTu nuevo sueldo es : "<<sueldo;
        }
        else
        {
           if(sueldo>=1001&&sueldo<=1100)
           {
                   sueldo=sueldo+(sueldo*.15);
                   cout<<"\nTu nuevo sueldo es : "<<sueldo;
           }
           else
              {
                    if(sueldo>=1201&&sueldo<=1300)
                      {
                           sueldo=sueldo+(sueldo*.10);
                           cout<<"\nTu nuevo sueldo es : "<<sueldo;
                      }
                     else
                     {
                         if(sueldo>1300)
                         {
                              sueldo=sueldo+(sueldo*.8);
                              cout<<"\nTu nuevo sueldo es : "<<sueldo;
                         }
                     }
                }
           }
           
            
    system("PAUSE");       
    return 0;
}
