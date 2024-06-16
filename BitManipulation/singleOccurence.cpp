#include <iostream>
using namespace std;
/*Given an Array , we need to find an element which occurs
  only one and rest occurs twice*/
int main()
{
  int size;
  cout << "Enter the size:";
  cin >> size;

  int arr[size];
  cout << "Enter the elements:";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  // Get the Solution here
  int element = 0;
  for (int i = 0; i < size; i++)
  {
    element ^= arr[i];
  }
  cout << "Element occurring only One Time is " << element << endl;
  return 0;
}