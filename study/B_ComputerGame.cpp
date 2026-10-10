#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  string t, b;

  bool p = true;

  cin >> n;
  cin >> t >> b;

  int arr[2][100];

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < n; j++)
    {      
      if (i == 0) 
      {
        arr[i][j] = t[j] - '0'; 
      }else
      {
        arr[i][j] = b[j] - '0'; 
      }     
    }
    
  }

  for (int j = 0; j < n; j++)
  {
    if (arr[0][j] == 1 && arr[1][j] == 1)
    {
      p = false;
      break;
    }
  }

  if (p)
  {
    cout << "YES";
  }else
  {
    cout << "NO";
  }
}