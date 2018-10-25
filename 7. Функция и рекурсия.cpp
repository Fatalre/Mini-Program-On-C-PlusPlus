/*
����� ������: Fatalre
�������:
�������� ������� min(a, b), ����������� ������� ���� �����.
����� �������� ������� min4(a, b, c, d), ����������� ������� 4 �����
� ������� ������� min. �������� ������ ����� ����� � �������� �� �������.

������ ������� ������
�������� ������ ����� �����.

������ �������� ������
�������� ����� �� ������.
Sample Input:
4
5
6
7
Sample Output:
4

*/

#include <iostream>

using namespace std;

int min(int a, int b);
int min4(int a, int b, int c, int d);

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;
    cout << min4(a, b, c, d);

    return 0;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int min4(int a, int b, int c, int d) {
    int min_f = min(a, b);
    int min_s = min(c, d);

    return min(min_f, min_s);
}
/*
����� ������: Fatalre
�������:
���� ������ �������������� �����: x1, y1, x2, y2.
�������� ������� distance(x1, y1, x2, y2), ����������� ���������� ����� ������ (x1. y1) � (x2, y2).
�������� ������ �������������� ����� � �������� ��������� ������ ���� �������.

������ ������� ������
�������� ������ �������������� �����.
������ �������� ������
�������� ����� �� ������.

Sample Input:
0
0
1
1
Sample Output:
1.41421

*/

#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
    double x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    cout << distance(x1, y1, x2, y2);

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ��� �������������� ����� x � y.
���������, ����������� �� ����� � ������������ (x, y)
��������������� �������� (������� ��� �������). ���� ����� ����������� ��������, �������� �����
YES, ����� �������� ����� NO. �� ������� ����� ��������� � ����� 1.
Image: https://ucarecdn.com/5f9db9bd-c610-474a-9a62-1d05acdd44c3/

������� ������ ��������� ������� IsPointInSquare(x, y),
������������ True, ���� ����� ����������� �������� � False, ���� �� �����������.
�������� ��������� ������ ������� ���������� �����, ������� ������� IsPointInSquare � � �����������
�� ������������� �������� ������� �� ����� ����������� ���������.

������� IsPointInSquare �� ������ ��������� ���������� if.

������ ������� ������
�������� ��� �������������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input 1:
0
0
Sample Output 1:
YES

Sample Input 2:
3
-7
Sample Output 2:
NO

*/

#include <iostream>

using namespace std;

bool IsPointInSquare(double x, double y) {
    const double x_l = -1, x_r = 1;
    const double y_b = -1, y_t = 1;

    bool x_in_sq = (x >= x_l) && (x <= x_r);
    bool y_in_sq = (y >= y_b) && (y <= y_t);

    return x_in_sq && y_in_sq;
}

int main() {
    double x, y;

    cin >> x >> y;

    if (IsPointInSquare(x, y)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ��� �������������� ����� x � y. ���������, ����������� �� ����� �
������������ (x, y) ��������������� �������� (������� ��� �������).
���� ����� ����������� ��������, �������� ����� YES, ����� �������� ����� NO.
�� ������� ����� ��������� � ����� 1.

������� ������ ��������� ������� IsPointInSquare(x, y), ������������ True, ����
����� ����������� �������� � False, ���� �� �����������. �������� ���������
������ ������� ���������� �����, ������� ������� IsPointInSquare � �
����������� �� ������������� �������� ������� �� ����� ����������� ���������.

������� IsPointInSquare �� ������ ��������� ���������� if.

������ ������� ������
�������� ��� �������������� �����.

������ �������� ������
�������� ����� �� ������.
Sample Input 1:
0
0
Sample Output 1:
YES

Sample Input 2:
1
1
Sample Output 2:
NO

*/

#include <iostream>
#include <cmath>

using namespace std;

bool IsPointInSquare(double x, double y) {
    const double x_l = -1, x_r = 1;
    const double y_b = -1, y_t = 1;

    bool x_in_sq = (x >= x_l) && (x <= x_r);
    bool y_in_sq = (y >= y_b) && (y <= y_t);

    bool sum_xy = abs(x) + abs(y) <= 1;

    return x_in_sq && y_in_sq && sum_xy;
}

int main() {
    double x, y;

    cin >> x >> y;

    if (IsPointInSquare(x, y)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ���� �������������� �����: x, y, xc, yc, r. ���������,
����������� �� ����� (x, y) ����� � ������� (xc, yc) � �������� r.
���� ����� ����������� �����, �������� ����� YES, ����� �������� ����� NO.
������� ������ ��������� ������� IsPointInCircle(x, y, xc, yc, r),
������������ True, ���� ����� ����������� ����� � False, ���� �� �����������.
�������� ��������� ������ ������� ���������� �����, ������� ������� IsPointInCircle
� � ����������� �� ������������� �������� ������� �� ����� ����������� ���������.
������� IsPointInCircle �� ������ ��������� ���������� if.

������ ������� ������
�������� ���� �������������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input 1:
0.5
0.5
0
0
1
Sample Output 1:
YES

Sample Input 2:
0.5
0.5
1
1
0.1
Sample Output 2:
NO

*/

#include <iostream>

using namespace std;

// Checks whether a point in a circle with center in (xc, yc)
// Circle equation (x - xc) ^ 2 + (y - yc) ^ 2 = r ^ 2
// If this equation for a point is less or equal than doubled radius
// then it is in circle, otherwise not.
bool IsPointInCircle(double x, double y, double xc, double yc, double r) {
    bool in_circle = (x - xc) * (x - xc) + (y - yc) * (y - yc) <= r * r;

    return in_circle;
}

int main() {
    double x, y, xc, yc, r;

    cin >> x >> y >> xc >> yc >> r;

    if (IsPointInCircle(x, y, xc, yc, r)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
���������, ����������� �� ����� ������ ����������� �������:

���� ����� ����������� ������� (������� �������� �������), �������� ����� YES, ����� �������� ����� NO.
������� ������ ��������� ������� IsPointInArea(x, y), ������������ True,
���� ����� ����������� ������� � False, ���� �� �����������. �������� ���������
������ ������� ���������� �����, ������� ������� IsPointInArea � � ����������� �� �������������
�������� ������� �� ����� ����������� ���������.
������� IsPointInArea �� ������ ��������� ���������� if.

������ ������� ������
�������� ��� �������������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input 1:
-4
-4
Sample Output 1:
NO

Sample Input 2:
-4
-3
Sample Output 2:
NO

*/

#include <iostream>

using namespace std;

bool IsPointInCircle(double x, double y) {
    const double xc = -1, yc = 1;
    const double r = 2;

    return (x - xc) * (x - xc) + (y - yc) * (y - yc) <= r * r;
}

bool IsPointInsideCircle(double x, double y) {
    const double xc = -1, yc = 1;
    const double r = 2;

    return (x - xc) * (x - xc) + (y - yc) * (y - yc) < r * r;
}

bool IsPointInArea(double x, double y) {
    bool left_line_right = (x + y >= 0);
    bool right_line_left = (2 * x - y + 2 <= 0);
    bool left_line_left = (x + y <= 0);
    bool right_line_right = (2 * x - y + 2 >= 0);

    bool in_circ_area = IsPointInCircle(x, y) && left_line_right && right_line_left;
    bool in_bottom = !IsPointInsideCircle(x, y) && left_line_left && right_line_right;

    return in_circ_area || in_bottom;
}

int main() {
    double x, y;

    cin >> x >> y;

    if (IsPointInArea(x, y)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}

/*
����� ������: Fatalre
�������:
���� �������������� ������������� ����� a � ����e ����� n.

��������� an. ������� �������� � ���� ������� power(a, n).

������ ������� ������
�������� �������������� ������������� ����� a � ����e ����� n.
������ �������� ������
�������� ����� �� ������.
Sample Input 1:
2
1
Sample Output 1:
2

Sample Input 2:
2
2
Sample Output 2:
4

*/

#include <iostream>

using namespace std;

double power(double x, int n) {
    double res = 1;

    if (n < 0) {
        x = 1 / x;
        n = -n;
    }

    while (--n >= 0) {
        res *= x;
    }

    return res;
}

int main() {
    double a;
    int n;

    cin >> a >> n;

    cout << power(a, n) << endl;

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ����������� ����� n > 1. �������� ��� ���������� ��������, �������� �� 1.
������� �������� � ���� ������� MinDivisor(n). ���������� �������� � ��������� ������ ���� ��������������� ����� �� n.
��������. ���� � ����� n ��� ��������, �� �������������� n , �� ����� n � ������� � ������� ����� ���� ����� n.

������ ������� ������
�������� ����������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input 1:
4
Sample Output 1:
2

Sample Input 2:
5
Sample Output 2:
5

*/

#include <iostream>
#include <cmath>

using namespace std;

int MinDivisor(int n) {
    int div = 2;

    for (; div < sqrt(n) && n % div != 0; ++div) {
    }

    if (n % div != 0) {
        div = n;
    }

    return div;
}

int main() {
    int n;

    cin >> n;
    cout << MinDivisor(n);

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ����������� ����� n > 1. ���������, �������� �� ��� �������.
��������� ������ ������� ����� YES, ���� ����� ������� � NO, ���� ����� ���������.
������� �������� � ���� ������� IsPrime(n), ������� ����������
True ��� ������� ����� � False ��� ��������� �����. ���������� �������� � ��������� ������ ���� ��������������� ����� �� n.

������ ������� ������
�������� ����������� �����.

������ �������� ������
�������� ����� �� ������.
Sample Input 1:
2
Sample Output 1:
YES

Sample Input 2:
4
Sample Output 2:
NO

*/

#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int n) {
    int div = 2;

    while (div < sqrt(n) && n % div != 0) {
        ++div;
    }

    return (n % div != 0 || n == div);
}

int main() {
    int n;

    cin >> n;

    if (IsPrime(n)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
��������� � ������� ����� ������� �������, ��� �� n ���������!
��� ����� ����� ��������������� ���������� ������������� �������������:

a^n = (a^2)^(n/2)  ��� ������ n,

a^n = a ? a^(n?1) ��� �������� n.

���������� �������� �������� ���������� � ������� � ������� ����������� �������.

������ ������� ������
�������� �������������� ����� a � ����� ����� n.

������ �������� ������
�������� ����� �� ������.
Sample Input 1:
2.0
1
Sample Output 1:
2

Sample Input 2:
2
2
Sample Output 2:
4

*/

#include <iostream>

using namespace std;

double fast_pow(double a, int n) {
    double res = 1;

    if (n != 0) {
        if (n % 2 == 0) {
            res = fast_pow(a * a, n / 2);
        }
        else {
            res = a;
            res *= fast_pow(a, n - 1);
        }
    }

    return res;
}

int main() {
    double a;
    int n;

    cin >> a >> n;
    cout << fast_pow(a, n);

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ������������������ �����, ������������� ������ 0. ������� ����� ���� ���� �����, �� ��������� ����.

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
17

*/

#include <iostream>

using namespace std;

int sum_seq() {
    int num;

    cin >> num;

    return num == 0 ? num : num + sum_seq();
}

int main() {
    cout << sum_seq();

    return 0;
}
/*
����� ������: Fatalre
�������:
�������� ������� fib(n), ������� �� ������� ������
���������������� n ���������� n-e ����� ���������.
� ���� ������ ������ ������������ ����� - ����������� ��������.
������ � ������ ����� ��������� ����� 1, � ������ ��������� ����� ����� ���� ����������.

������ ������� ������
�������� ����� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input:
1
Sample Output:
1

*/

#include <iostream>

using namespace std;

int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;

    cin >> n;
    cout << fib(n);

    return 0;
}
/*
����� ������: Fatalre
�������:
� ���������� n ������. ��������, ��� ���� ������� ���������� ����� � ����� �����
p, � ����� ����������, �� ���� ������� ����� � ����� ����� p+1, �� �� ���� ����������.
����� ��������, ��� ��� ������ � ���������� ����� ����� ������ �����������.
�� ������ ���������� ����������� ����� �����, ��� ������� � �������� ����� �����������.
��� ���������� ������������� � ��� ���� ��� ������. �� ������ ������� �� ���,
�� � ���������� �� ������ ��������� ����� ���������� ���� �����.
����������, ������ ����� ������� ����������, ����� �������� ������ ��� ������.

������ ������� ������
��������� �������� �� ���� ���������� ������ � ����������.

������ �������� ������
��������� ������� ���������� ����� �������, ��� ������� ����� ������ ������ ������.
����������
����������� � ������� �������. ����� ������� ����� �� 2-�� �����.
���� �� ����������, �� ������ ������ ����� � 1-�� �����, � ���� �� ���������� - �� ������ ����� � 3-�� �����.

���������
1. ��� ������� �����������, ���� ����� ��� �� ������ ����?
2. ����� ������� ��� � �� ������� ���� ����� � ����� ����� k.
��� �� ����� ����������� � ����������� �� ����, ���������� �� ����� ��� ���?
3. ����� f(n) - ��� ����������� ����� �������, �� ������� ����� ���������� ������� ����,
���� �� � ���������� ���� n ������. �������� f(n) ����� �������� f(a) ��� ������� �������� a.
Sample Input 1:
4
Sample Output 1:
2

Sample Input 2:
5
Sample Output 2:
3

*/

#include <iostream>
#include <algorithm>

using namespace std;

int ball_fall(int eggs, int floors) {
    // if we have only one egg
    // then we have to check all the floors below
    if (eggs == 1)
        return floors;

    // in case only 2 or less floors left
    // we also have to check all
    if (floors <= 2)
        return floors;

    int min_drops = -1;
    for (int floor = 1; floor < floors; ++floor) {
        int max_drop_below = ball_fall(eggs - 1, floor - 1);
        int max_drop_above = ball_fall(eggs, floors - floor);
        int max_k = max(max_drop_below, max_drop_above);

        if (min_drops == -1 || min_drops > max_k) {
            min_drops = max_k;
        }
    }

    return min_drops + 1;
}

int main() {
    const int balls = 2;
    int n;

    cin >> n;
    cout << ball_fall(balls, n - 1) << endl;

    return 0;
}

/*
����� ������: Fatalre
�������:
���� ����� N. ����������, ��������� ��������� ����� ���������� �� ����� N?N N ������, �� ������ ���� �����.

������ ������� ������
������ ������������ ����� N. (N ? 10)

������ �������� ������
�������� ����� �� ������.
���������
�������� ����������� �������, ������� �������� ��������� ����� � ��������� �������.
���� �� ��� ������ ������� ����� ������ (�� ���� ����������), �� ����� ������� ���� �� ����� �������������.
����� �� ������� ��������� ����� � ��������� ������� - ������������ �������.

Sample Input:
8
Sample Output:
92

*/

#include <iostream>
#include <vector>

using namespace std;

//Check the condition
bool promising(const vector<int>& field, int queen_num, int pos) {
    for (int j = 0; j < queen_num; ++j) {
        // check whether a queen intersects with others
        if (field[j] == pos || j - field[j] == queen_num - pos || j + field[j] == queen_num + pos) {
            return false;
        }
    }

    return true;
}
//Backtrack algorithm
void queens(vector<int>& field, int queen_num, int& cnt) {
    // All queens are placed
    if (queen_num == field.size()) {
        ++cnt;
    }
    else {
        // Trying to put a queen into a column
        for (int i = 0; i < field.size(); ++i) {
            // Check whether a queen is not under attack
            if (promising(field, queen_num, i)) {
                field[queen_num] = i;
                queens(field, queen_num + 1, cnt);
            }
        }
    }
}

int main() {
    const int first_queen = 0;
    int n;
    // our chess board
    vector<int> v;
    int cnt = 0;

    cin >> n;
    v = vector<int>(n);
    queens(v, first_queen, cnt);
    cout << cnt;

    return 0;
}
