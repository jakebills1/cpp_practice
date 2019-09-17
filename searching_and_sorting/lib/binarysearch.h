#include <vector>
using namespace std;
class BinarySearch
{
public:
  // const functions cannot change the data in member variables in this class
  BinarySearch(int);
  int binarySearch(int) const;
  void displayElements() const;

private:
  int size;
  vector<int> data;
  void displaySubElements(int, int) const;
};
