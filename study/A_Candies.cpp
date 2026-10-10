#include <iostream>

using namespace std;

int main()
{
  int n; 
  int a, b;
  
  cin >> n;
  
  cin >> a >> b;

  int minR = n;

  for (int i = 1; i * a + (i + 1) * b <= n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      int res = i * a + j * b;
      
      if (res <= n)
      {
        int r = n - res;
        
        if (r < minR)
        {
          minR = r;
        }
      }else
      {
        break;
      }
      
    }
  }

  cout << minR;
}