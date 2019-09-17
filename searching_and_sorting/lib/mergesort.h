#include <vector>
using namespace std;
class MergeSort
{
  public:
    MergeSort(int);
    void sort();
    void displayElements() const;
  private:
    int size;
    vector<int> data;
    void sortSubVector(int, int);
    void merge(int, int, int, int);
    void displaySubVector(int, int) const;
};
