#include <iostream>
using namespace std;
class Crypto
{
public:
  void encrypt(int p)
  {
    if (p > 999 && p < 10000)
    {
      int dig1, dig2, dig3, dig4;
      dig1 = p % 10;
      p = p / 10;
      dig2 = p % 10;
      p = p / 10;
      dig3 = p % 10;
      p = p / 10;
      dig4 = p % 10;
      dig1 = (dig1 + 7) % 10;
      dig2 = (dig2 + 7) % 10;
      dig3 = (dig3 + 7) % 10;
      dig4 = (dig4 + 7) % 10;
      cout << dig3 << dig4 << dig1 << dig2 << endl;
    }
    else
    {
      cout << "Invalid entry! Only four digit positive integers can be encrypted";
    }
  }
  void decrypt(int c)
  {
    if (c > 999 && c < 10000)
    {
      int dig1, dig2, dig3, dig4;
      dig2 = c % 10;
      c = c / 10;
      dig1 = c % 10;
      c = c / 10;
      dig4 = c % 10;
      c = c / 10;
      dig3 = c;
      dig1 = (dig1 - 7 + 10) % 10;
      dig2 = (dig2 - 7 + 10) % 10;
      dig3 = (dig3 - 7 + 10) % 10;
      dig4 = (dig4 - 7 + 10) % 10;
      cout << dig4 << dig3 << dig2 << dig1 << endl;
    }
    else
    {
      cout << "Invalid entry! Only four digit positive integers can be decrypted";
    }
  }
};
int main()
{
  Crypto myCrypto;
  myCrypto.encrypt(1234);
  myCrypto.decrypt(9810);
}