#include <iostream>
#include <string>

using namespace std;

int main() {
  int a = 0, d = 0, n;
  string c;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> c;
    if (c[i] == 'A')
      a++;

    else
      d++;
  }
  if (a == d) cout << "Friendship";
  if (a > d) cout << "Anton";
  if (a < d) cout << "Danik";

  return 0;
}