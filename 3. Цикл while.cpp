/*
����� ������: Fatalre
�������:
�� ������� ������ ����� N ������������ ���
�������� ����������� �����, �� ������������� N, � ������� �����������.

������ ������� ������
�������� ����������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input:
50
Sample Output:
1 4 9 16 25 36 49

*/

#include <iostream>

using namespace std;

int main() {
    int n;
    int a = 1;
    int sq = a * a;

    cin >> n;

    while (sq <= n) {
        cout << sq << ' ';
        ++a;
        sq = a * a;
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ����� �����, �� ������� 2.
�������� ��� ���������� ����������� ��������, �������� �� 1.

������ ������� ������
�������� ����� ������������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input:
15
Sample Output:
3

*/

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int div = 2;
    while (n % div != 0) {
        ++div;
    }

    cout << div;

    return 0;
}
/*
����� ������: Fatalre
�������:
�� ������� ����� N ������������ ��� �����
������� ������, �� ������������� N, � ������� �����������.

������ ������� ������
�������� ����������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input:
50
Sample Output:
1 2 4 8 16 32

*/

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int t = 1;

    while (t <= n) {
        cout << t << ' ';
        t *= 2;
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ����������� ����� N. �������� ����� YES,
���� ����� N �������� ������ �������� ������, ��� ����� NO � ��������� ������.

������ ������� ������
�������� ����������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input 1:
1
Sample Output 1:
YES

Sample Input 2:
2
Sample Output 2:
YES

*/

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int t = 1;

    while (t != n && t <= n) {
        t *= 2;
    }

    if (t == n) {
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
��������� �������� �� ���� ������������������
����� ��������������� �����, ������ ����� �������� � ��������� ������.
������������������ ����������� ������ 0, ��� ����������
�������� ��������� ������ ��������� ���� ������ � �������
���������� ������ ������������������ (�� ������ ������������ ����� 0).
�����, ��������� �� ������ 0, ��������� �� �����.

������ ������� ������
�������� ������������������ ����� �����, ��������������� ������ 0.

������ �������� ������
�������� ����� �� ������.

Sample Input:
1
7
9
0
5
Sample Output:
3

*/

#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int tmp;

    while (cin >> tmp && tmp != 0) {
        ++n;
    }

    cout << n;

    return 0;
}
/*
����� ������: Fatalre
�������:
���������� ����� ���� ��������� ������������������, ������������� ������ 0.

������ ������� ������
�������� ������������������ ����� �����,
�������������� ������ 0 (���� ����� 0 � ������������������ �� ������, � ������ ��� ������� �� ���������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
3
6
8
0
Sample Output:
17

*/

#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int n;

    while (cin >> n && n != 0) {
        sum += n;
    }

    cout << sum;

    return 0;
}

/*
����� ������: Fatalre
�������:
������������������ ������� �� ����������� ����� �
����������� ������ 0. ���������� �������� ����������� �������� ������������������.

������ ������� ������
�������� ������������������ ����� �����,
�������������� ������ 0 (���� ����� 0 � ������������������ �� ������, � ������ ��� ������� �� ���������).

������ �������� ������
�������� ����� �� ������.

Sample Input:
1
7
9
0
Sample Output:
9

*/

#include <iostream>

using namespace std;

int main() {
    int n;
    int max = -1;

    while (cin >> n && n != 0) {
        if (max < n) {
            max = n;
        }
    }

    cout << max;

    return 0;
}
/*
����� ������: Fatalre
�������:
������������������ ������� �� ����������� �����
� ����������� ������ 0.
����������, ����� ���������� ��������� ���� ������������������, ����� �� ����������� ��������.

������ ������� ������
�������� ������������������ ����� �����,
�������������� ������ 0 (���� ����� 0 � ������������������ �� ������, � ������ ��� ������� �� ���������).

������ �������� ������
�������� ����� �� ������.

Sample Input 1:
1
7
9
0
Sample Output 1:
1

Sample Input 2:
1
3
3
1
0
Sample Output 2:
2

*/

#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    int max = -1;

    while (cin >> n && n != 0) {
        if (max < n) {
            count = 1;
            max = n;
        }
        else if (n == max) {
            ++count;
        }
    }

    cout << count;

    return 0;
}
/*
����� ������: Fatalre
�������:
������������������ ������� �� ����������� ����� �
����������� ������ 0. ���������� �������� �������
�� �������� �������� � ���� ������������������, �� ����
��������, ������� ����� ����������, ���� ��
������������������ ������� ���������� �������.

������ ������� ������
�������� ������������������ ����� �����, ��������������
������ 0 (���� ����� 0 � ������������������ �� ������, � ������ ��� ������� �� ���������).

������ �������� ������
�������� ����� �� ������.

Sample Input 1:
4
4
2
3
0
Sample Output 1:
4

Sample Input 2:
2
1
0
Sample Output 2:
1

*/

#include <iostream>

using namespace std;

int main() {
    int n;
    int max = -1;
    int s_max = -1;

    while (cin >> n && n != 0) {
        if (max <= n) {
            s_max = max;
            max = n;
        }
        else if (s_max < n) {
            s_max = n;
        }
    }

    cout << s_max;

    return 0;
}
/*
����� ������: Fatalre
�������:
������������������ ��������� ������������ ���:
F(0) = 0, F(1) = 1, �, F(n) = F(n?1) + F(n?2).
�� ������� ����� N ���������� N-� ����� ��������� F(N).

������ ������� ������
�������� ����������� ����� N.

������ �������� ������
�������� ����� �� ������.

Sample Input:
6
Sample Output:
8

*/

#include <iostream>

using namespace std;

int main() {
    int n;
    int f_0 = 0;
    int f_1 = 1;

    cin >> n;

    while (--n) {
        int tmp = f_1;

        f_1 += f_0;
        f_0 = tmp;
    }

    cout << f_1;

    return 0;
}
/*
����� ������: Fatalre
�������:
������������������ ��������� ������������ ���:
F(0) = 0, F(1) = 1, �, F(n) = F(n?1) + F(n?2).
���� ����������� ����� A. ����������, ����� �� �����
������ ��������� ��� ��������, �� ���� �������� �����
����� N, ��� F(N) = A.
���� � �� �������� ������ ���������, �������� ����� -1.

������ ������� ������
�������� ����������� ����� A.

������ �������� ������
�������� ����� �� ������.

Sample Input:
8
Sample Output:
6

*/

#include <iostream>

using namespace std;

int main() {
    int a;
    int n = 1; // counter for deducing numbering of Fibonacci number
    int f_0 = 0;
    int f_1 = 1;

    cin >> a;

    while (f_1 < a) {
        int tmp = f_1;

        ++n;
        f_1 += f_0;
        f_0 = tmp;
    }

    if (f_1 == a) {
        cout << n;
    }
    else {
        cout << -1;
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ������������������ ����������� �����, ������������� ������ 0.
����������, ����� ���������� ����� ������ ������ ��������� ���� ������������������ ����� ���� �����.

������ ������� ������
�������� ������������������ ����� �����,
�������������� ������ 0 (���� ����� 0 � ������������������ �� ������, � ������ ��� ������� �� ���������).

������ �������� ������
�������� ����� �� ������.

Sample Input:
1
7
7
9
1
0
Sample Output:
2

*/

#include <iostream>

using namespace std;

int main() {
    int n = 1;
    int n_max = 0;
    int cur = -1;
    int prev = -1;

    while (cin >> cur && cur != 0) {
        if (prev != -1) {
            if (cur == prev) {
                ++n;
            }
            else {
                if (n_max < n) {
                    n_max = n;
                }
                n = 1;
            }
        }

        prev = cur;
    }

    if (n > n_max) {
        n_max = n;
    }

    cout << n_max;

    return 0;
}
/*
����� ������: Fatalre
�������:
������� ������������������ ���������� ��������� ����������,
���� �� ������ ������ ����������� � ������������ �������� ������������������.
������ � ��������� ������� ������������������ �� �������� ���������� �����������.

���� ������������������ ����������� �����, ������������� ������ 0.
���������� ���������� ������� ��������� ���������� � ���� ������������������.

������ ������� ������
�������� ������������������ ����� �����,
�������������� ������ 0 (���� ����� 0 � ������������������ �� ������,
� ������ ��� ������� �� ���������).

������ �������� ������
�������� ����� �� ������.
Sample Input:
1
2
1
2
1
0
Sample Output:
2

*/

#include <iostream>

using namespace std;

int main() {
    int prev = -1;
    int cur = -1;

    bool prev_gr = false;
    int cnt = 0;

    // Option 1
    while (cin >> cur && cur != 0) {
        if (prev != -1) {
            if (prev < cur && !prev_gr) {
                prev_gr = true;
            }
            else if (prev_gr) {
                if (cur < prev) {
                    ++cnt;
                    prev_gr = false;
                }
                else if (cur == prev) {
                    prev_gr = false;
                }
            }
            else {
                prev_gr = false;
            }
        }

        prev = cur;
    }

    // Option 2

    if (cin >> prev && prev != 0) {
        if (cin >> cur && cur != 0) {
            int next;
            if (cin >> next) {
                while (next != 0) {
                    if (prev < cur && cur > next) {
                        ++cnt;
                    }
                    prev = cur;
                    cur = next;
                    cin >> next;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}

/*
����� ������: Fatalre
�������:
���������� ���������� ���������� ����� ����� ����������
����������� ������������������ ����������� �����, ������������� ������ 0.
���� � ������������������ ��� ���� ��������� ����������, �������� ����� 0.
��������� � �������� �������� ��� ���� ���������� ����������� �� ���������.

������ ������� ������
�������� ������������������ ����� �����, �������������� ������ 0
(���� ����� 0 � ������������������ �� ������, � ������ ��� ������� �� ���������).

������ �������� ������
�������� ����� �� ������.

Sample Input 1:
1
2
1
1
2
1
2
1
0
Sample Output 1:
2

Sample Input 2:
1
2
3
0
Sample Output 2:
0

*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int prev, cur, next;
    int dist = 0;
    int cur_dist = 0;
    int min_dist = 0;

    if (cin >> prev && prev != 0) {
        if (cin >> cur && cur != 0) {
            if (cin >> next) {
                int pos = 2;
                while (next != 0) {
                    if (prev < cur && cur > next) {
                        if (dist != 0) {
                            cur_dist = pos - dist;
                            if (min_dist == 0) {
                                min_dist = cur_dist;
                            }
                            else {
                                min_dist = min(cur_dist, min_dist);
                            }
                        }

                        dist = pos;
                    }
                    ++pos;
                    prev = cur;
                    cur = next;
                    cin >> next;
                }
            }
        }
    }

    cout << min_dist;

    return 0;
}
