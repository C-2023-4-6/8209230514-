#include <iostream>
using namespace std;

int indexof(const char* s1, const char* s2)
{
    int i = 0, fun, j = 0;
    fun = strlen(s1);
    for (i = 0; i < fun; i++) {
        if (s1[j] == s2[i]) {
            for (j = 0; j < fun; j++) {
                if (s1[j] != s2[i + j]) {
                    break;
                }
            }
            if (j == fun)
                return i;
            else
                j = 0;
        }
    }
    return -1;
}
int main()
{
    char s1[100] = "", s2[100] = "";
    cout << "ÊäÈëÁ½¸ö×Ö·û´®";
    cin >> s1;
    cin >> s2;
    cout << indexof(s1, s2);
    return 0;
}