#include <iostream>
using namespace std;

void swap (int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void s_sort(int *a, int el)
{
  int n = 0;
  int *b;

  while (n != el)
    {
      b = a + 1;
      for(int i = 0; i <(el-1) - n; i++)
        {
          if(*a>*b)
          {
            swap(a,b);
          }
        }
    }
}
int main()
{
  int nel;
  int a[nel];
  cout<< "No. of elements: ";
  cin>>nel;
  for(int i = 0; i < nel; i++)
    {
      cin>>a[i];
    }
  cout<<"Sorted array: "<<endl;
  sort(&a[0], nel);
  for(int i = 0; i < nel; i++)
    {
      cout<<a[i]<<" ";
    }
  return 0;
}
