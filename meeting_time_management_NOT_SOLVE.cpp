#include <iostream>
using namespace std;
#include <string.h>
int main()
{
  string a[100] = {"02:00", "06:00"};
  string b[100] = {"02:04", "03:00"};

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {

      if (a[i][0] == b[j][0])
      {
        if (a[i][1] == b[j][1])
        {
          if (a[i][0] < b[j][0] && a[i][1] < b[j][1])
          {
            cout << "true" << "\t";
          }
        }
      }
      // else
      // {
      //     cout << "false";
      // }
    }
  }

  return 0;
}