/*
����� ������: Fatalre
�������:
���� ������������� �������������� ����� X. �������� ��� ������� �����.

������ ������� ������
�������� ������������� �������������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input:
17.9
Sample Output:
0.9

*/

#include <iostream>

using namespace std;

int main() {
    double num;

    cin >> num;

    cout << num - static_cast<int> (num);

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ������������� �������������� ����� X.
�������� ��� ������ ����� ����� ���������� �����.

������ ������� ������
�������� ������������� �������������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input:
1.79
Sample Output:
7

*/

#include <iostream>

using namespace std;

int main() {
    double num;

    cin >> num;

    double frac = num - static_cast<int> (num);

    cout << static_cast<int> (frac * 10);

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ����� ������ ������������. ��������� ������� ������������..

������ ������� ������
�������� ��� ������������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input:
3
4
5
Sample Output:
6

*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cin >> a >> b >> c;

    double p = (a + b + c) / 2.0;

    double square = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << square;

    return 0;
}
/*
����� ������: Fatalre
�������:
���������� ������ �� ������ ���������� P ��������� �������,
������� ������������ � ����� ������.
����� ���������� X ������ Y ������. ���������� ������ ������ ����� ���.

��� ������� ���� ������ ������ ������������ ��������� ������������ � �������.

������ ������� ������
��������� �������� �� ���� ����� ����� P, X, Y.

������ �������� ������
��������� ������ ������� ��� �����: �������� ������ ����� ��� � ������ � ��������. ������� ����� ������ �������������.

Sample Input:
12
179
0
Sample Output:
200 48

*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int p, x, y;

    cin >> p >> x >> y;

    // Option 1
    double rate = p / 100.0;

    double coins = x * 100 + y;

    int k_dep = coins + coins * rate;

    cout << k_dep / 100 << ' ' << k_dep % 100;

    // Option 2
    double money = x + y / 100.0;
    double after_year = money + money * p / 100;

    after_year *= 100;

    int rub = trunc(after_year) / 100;
    int kop = static_cast<int> (trunc(after_year)) % 100;

    cout << rub << ' ' << kop;

    return 0;
}
/*
����� ������: Fatalre
�������:
���������� ������ �� ������ ���������� P ��������� �������,
������� ������������ � ����� ������ ����� ���.
����� ���������� X ������ Y ������. ���������� ������ ������ ����� K ���.

������ ������� ������
��������� �������� �� ���� ����� ����� P, X, Y, K .

������ �������� ������
��������� ������ ������� ��� �����: �������� ������ ����� K ��� � ������ � ��������.
������� ����� ������ �� ��������� ���� �������������.
���������� ����� ������ (� ������������� ������� ������ ������) ���������� ��������.
����������
� ���� ������ ����� ��������� �������� � ���������. ���� ��� �������� � ��� - ���������� ������ ������ � ����� ������.
Sample Input:
12
179
0
5
Sample Output:
315 43

*/

#include <iostream>

using namespace std;

int main() {
    int p, x, y, k;
    constexpr double percent = 100;
    constexpr double coins_in_rub = 100;

    cin >> p >> x >> y >> k;

    double rate = p / percent;
    double deposit = x + y / coins_in_rub;

    while (k--) {
        deposit += deposit * rate;
        deposit = static_cast<int> (deposit * 100) / coins_in_rub;
    }

    int rub = static_cast<int> (deposit);
    int coins = static_cast<int> (deposit * 100) % 100;

    cout << rub << ' ' << coins;

    return 0;
}

/*
����� ������: Fatalre
�������:
���������� ������� �������� ���� ��������� ������������������, ������������� ������ 0.

������ ������� ������
�������� ������������������ ����� �����, ��������������
������ 0 (���� ����� 0 � ������������������ �� ������, � ������ ��� ������� �� ���������).

������ �������� ������
�������� ����� �� ������.
Sample Input:
1
7
9
0
Sample Output:
5.66666666667

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int cnt = 0;
    int num, seq = 0;

    while (cin >> num && num != 0) {
        seq += num;
        ++cnt;
    }

    cout << setprecision(11);
    cout << static_cast<double> (seq) / cnt;

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ������������������ ����������� ����� x1, x2, ..., xn. ����������� ����������� ���������� ��������

Image: https://ucarecdn.com/a5272a3c-f857-4969-a054-0a362300c32d/ ���
Image: https://ucarecdn.com/f6612807-4fb8-42fc-802e-5221860e8fa2/- ������� �������� ������������������.
���������� ����������� ���������� ��� ������ ������������������ ����������� �����, ������������� ������ 0.

������ ������� ������
�������� ������������������ ����� �����, �������������� ������ 0
(���� ����� 0 � ������������������ �� ������, � ������ ��� ������� �� ���������).

������ �������� ������
�������� ����� �� ������.

Sample Input:
1
7
9
0
Sample Output:
4.16333199893

*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // evaluate upper part as \sum_1^k {x ^ 2} - s * \sum_1_k {x} + n * s ^ 2
    int num;
    int cnt = 0;
    int sum = 0;
    int double_x = 0; // x ^ 2
    double mean;
    double st_dev;

    while (cin >> num && num != 0) {
        ++cnt;
        double_x += num * num;
        sum += num;
    }

    mean = static_cast<double> (sum) / cnt;

    st_dev = sqrt((double_x - 2 * mean * sum + cnt * mean * mean) / (cnt - 1));

    cout << setprecision(11);
    cout << st_dev;

    return 0;
}
/*
����� ������: Fatalre
�������:
��� ��������� P(x)=anxn + an?1xn?1+ � + a1x + a0 � ����� x.
��������� �������� ����� ����������, ���������������� ������ �������:

P(x)=(�(((anx + an?1)x + an?2)x + an?3) � )x+ a0

������ ������� ������
������� ��������� �������� �� ���� ����� ��������������� ����� n ? 20,
����� �������������� ����� x, ����� ������� n+1 ������������ ����� � ������������ ���������� �� �������� � ��������.

������ �������� ������
��������� ������ ������� �������� ����������.

Sample Input 1:
1
0.000
1.000
1.000
Sample Output 1:
1

Sample Input 2:
2
0.500
1.000
1.000
1.000
Sample Output 2:
1.75

*/

#include <iostream>

using namespace std;

int main() {
    int n;
    double x;
    double res = 0;
    double coef;

    cin >> n >> x;

    while (n--) {
        cin >> coef;
        res += coef;
        res *= x;
    }

    cin >> coef;
    res += coef;
    cout << res;

    return 0;
}
#include <iostream>

/*
����� ������: Fatalre
�������:
���� �������������� ������������ a, b, c, ��� ���� a ? 0 .
������ ���������� ��������� ax2 + bx + c = 0 � �������� ��� ��� �����.

������ ������� ������
�������� ��� �������������� �����.

������ �������� ������
���� ��������� ����� ��� �����, �������� ��� ����� � �������
�����������, ���� ���� ������ � �������� ���� �����,
���� ��� ������ � �� �������� ������.
Sample Input:
1
-1
-2
Sample Output:
-1 2

*/

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    double a, b, c;
    double r1, r2;

    cin >> a >> b >> c;

    double discr = b * b - 4 * a * c;

    if (discr >= 0) {
        if (discr > 0) {
            r1 = (-b + sqrt(discr)) / (2 * a);
            r2 = (-b - sqrt(discr)) / (2 * a);

            cout << min(r1, r2) << ' ' << max(r1, r2);
        }
        else {
            r1 = -b / (2 * a);
            cout << r1;
        }
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
���� �������������� ������������ a, b, c.
������ ���������� ��������� ax2 + bx + c = 0 � �������� ��� ��� �����.

������ ������� ������
�������� ��� �������������� �����.

������ �������� ������
���� ������ ��������� �� ����� ������, �������� ����� 0.
���� ��������� ����� ���� ������, �������� ����� 1, � ����� ���� ������.
���� ��������� ����� ��� �����, �������� ����� 2, � ����� ��� ����� � ������� �����������.
���� ��������� ����� ���������� ����� ������, �������� ����� 3.

Sample Input:
1
-1
-2
Sample Output:
2 -1 2

*/

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    double a, b, c;
    double r1, r2;
    const int one_root = 1;
    const int two_roots = 2;
    const int inf_roots = 3;
    const int no_roots = 0;

    cin >> a >> b >> c;

    if (a != 0) {
        double discr = b * b - 4 * a * c;
        if (discr > 0) {
            r1 = (-b - sqrt(discr)) / (2 * a);
            r2 = (-b + sqrt(discr)) / (2 * a);
            cout << two_roots << ' ' << min(r1, r2) << ' ' << max(r1, r2);
        }
        else if (discr == 0) {
            r1 = -b / (2 * a);
            cout << one_root << ' ' << r1;
        }
        else {
            cout << no_roots;
        }
    }
    else {
        if (b == 0 && c == 0) {
            cout << inf_roots;
        }
        else if (b != 0) {
            r1 = -c / b;
            cout << one_root << ' ' << r1;
        }
        else {
            cout << no_roots;
        }
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ������������ ����� a, b, c, d, e, f. ��������, ��� ������� �������� ���������
����� ����� ���� �������. �������� ��� ����� x � y, ���������� �������� ���� �������.

������ ������� ������
�������� ����� ����� - ������������ ��������� �������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
1
0
0
1
3
3
Sample Output:
3 3

*/

#include <iostream>

using namespace std;

int main() {
    double a, b, c, d, e, f;
    double x, y;

    cin >> a >> b >> c >> d >> e >> f;

    double det = a * d - b * c;

    x = (e * d - b * f) / det;
    y = (a * f - e * c) / det;

    cout << x << ' ' << y;

    return 0;
}

/*
����� ������: Fatalre
�������:
���� ������������ ����� a, b, c, d, e, f. ������ ������� �������� ���������

������ ������� ������
�������� ����� ����� - ������������ ��������� �������.
������ �������� ������
����� ��������� ������� �� ���� ������� ���� �������.

���� ������� �� ����� �������, �� ��������� ������ ������� ������������ ����� 0.

���� ������� ����� ���������� ����� �������, ������ �� ������� ����� ��� y=kx+b, �� ��������� ������ ������� ����� 1, � ����� �������� k � b.

���� ������� ����� ������������ ������� (x0, y0), �� ��������� ������ ������� ����� 2, � ����� �������� x0 � y0.

���� ������� ����� ���������� ����� ������� ���� x=x0, y � �����, �� ��������� ������ ������� ����� 3, � ����� �������� x0.

���� ������� ����� ���������� ����� ������� ���� y=y0, x � �����, �� ��������� ������ ������� ����� 4, � ����� �������� y0.

���� ����� ���� ����� (x, y)  �������� ��������, �� ��������� ������ ������� ����� 5.
Sample Input 1:
1
0
0
1
3
3
Sample Output 1:
2 3 3

Sample Input 2:
1
1
2
2
1
2
Sample Output 2:
1 -1 1

Sample Input 3:
0
2
0
4
1
2
Sample Output 3:
4 0.5

Sample Input 4:
2
3
4
6
1
2
Sample Output 4:
1 -0.666667 0.333333

Sample Input 5:
0
1
0
3
5
15
Sample Output 5:
4 5

Sample Input 6:
1
0
1
0
3
3

Sample Output 6:
3 3

*/

#include <iostream>

using namespace std;

int main() {
    double a, b, c, d, e, f;
    double x, y;
    const int no_roots = 0;
    const int kx_roots = 1;
    const int one_xy_root = 2;
    const int one_x = 3;
    const int one_y = 4;
    const int inf_roots = 5;

    cin >> a >> b >> c >> d >> e >> f;

    double det = a * d - b * c;
    double det_x = (e * d - b * f);
    double det_y = (a * f - e * c);
    bool x_null = a == 0 && c == 0;
    bool y_null = b == 0 && d == 0;

    if (det != 0) {
        x = det_x / det;
        y = det_y / det;
        cout << one_xy_root << ' ' << x << ' ' << y;
    }
    else {
        if (det_x == 0 && det_y == 0) {
            if (x_null && y_null) {
                if (e != 0 || f != 0) {
                    cout << no_roots;
                }
                else {
                    cout << inf_roots;
                }
            }
            else if (x_null) {
                if (b != 0) {
                    y = e / b;
                }
                else {
                    y = f / d;
                }

                cout << one_y << ' ' << y;
            }
            else if (y_null) {
                if (a != 0) {
                    x = e / a;
                }
                else {
                    x = f / c;
                }

                cout << one_x << ' ' << x;
            }
            else {
                double bi, k;

                if (b != 0) {
                    bi = e / b;
                    k = -a / b;
                }
                else {
                    bi = f / d;
                    k = -c / d;
                }

                cout << kx_roots << ' ' << k << ' ' << bi;
            }
        }
        else {
            cout << no_roots;
        }
    }

    return 0;
}
