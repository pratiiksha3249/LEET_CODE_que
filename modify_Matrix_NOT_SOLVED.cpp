  // for(int i=0;i<2;i++){
  //     for(int j=0;j<2;j++){
  //          cin>>a[i][j];
  //     }
  // }


#include <iostream>
using namespace std;
int main()
{
  int n = 6, a[2][2] = {1, 1, 3, 4}, max = 0,i,j;

  for ( i = 0; i < 2; i++)
  {
    for ( j = 0; j < 2; j++)
    {
      if (a[i][j] == 1)
      {
        if (max < a[i][j])
        {
          max = a[i][j];
        }
        a[i][j]=max;
        //  cout<<"ram";
      }

    // a[i][j] = max;
      
      cout << a[i][j];
    }
    cout << endl;
    // max=0;
  }
  return 0;
}