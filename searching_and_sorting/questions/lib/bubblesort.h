#include <vector>
using namespace std;
class BubbleSort
{
  public:
    BubbleSort(int);
    void sort();
  private:
    int size;
    vector<int> data;
    bool isSorted();
    void displayElements();
    void swap(int, int);
};
