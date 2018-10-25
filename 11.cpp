/*�������� ������� power, ����������� ���������� ������ ����� � ��������������� ����� �������. ������� power
 ������ ��������� �� ���� ��� ����� ����� � ���������� ����� ����� (�������� ������ ����). ��� ���������� 
 ������� ������, ��� ������� ����������� ������ ���������� power, ������� ������ �� ������ ������ �� ����� ��� ��������. 
���������� � ����������: � ���� ������� ��� ����� ����������� ������ ������� power. �� ������ ���������� ���������������
 �������, ���� ��� ��� �����. ������������� ������� main �� �����. 
�����������: ���������� cmath (� math.h) ������������ ���������.*/

int power(int x, unsigned int p) {
  int answer = 1;
  while (p) {
    if (p & 1) {
      answer *= x;
    }
    p >>= 1;
    x *= x;
  }
  return answer;
}


?
/*������� ������ �� ����������� ��������� �� ������ �  ������/�������. �������� ���������, �������
 ��������� ����� �����. �� ���� ��������� �������� ����� ����� � ��������� �������: �� ������ ������ 
 ���� ����� ����� TT - ���������� ������, ����� ������� TT �����, � ������ �� ������� ����� ������ ����
  ��� ����� ����� aiai � bibi. �� ������ ��� ������ �� TT ����� ����� ������� ����� ai+biai+bi  � ��� �������,
   � ������� ���� ��������� �� ����. ������, ����� �����, �������� �� �����.
� ��������� ������� ������ ����� � ������ ���������. ��� ���������� ����������������� ����� � ������� � ������
 �� ������� ��������������� ������ ����� � ������ ����� ���� ���� �� ������.
Sample Input:
10
-735 608
-958 -783
-928 169
212 264
601 -80
-567 1
982 -552
793 951
59 688
531 73
Sample Output:
-127
-1741
-759
476
521
-566
430
1744
747
604*/

#include <iostream>
using namespace std;
 
int main()
{
    int T;
    cin >> T;
    int* a = new int [T];
    int* b = new int [T];
 
    for (int i = 0; i < T; i++)
    {
        cin >> a[i] >> b[i];
    }
    
    for (int i = 0; i < T; i++)
    {
        cout << a[i] + b[i] << endl;
    }
 
    return 0;
}

/*�������� ��������� ��� ������� ���������� ��������� ���� ax2+bx+c=0ax2+bx+c=0 (������������ xx). 
�� ���� ��������� �������� ��� ����� �����: aa , bb � cc, ��������������. ��� ���� �������������, ��� a?0a?0.
 �� ����� ��������� ������ ������� ��� ������������ ����� ���������, ���������� ��������. ���� ������������ 
 ������ ���, �� ��������� ������ ������� ������ "No real roots". ���� � ��������� ������� ������ ���� ������ 
 (������� ������), �� ��������� ������ ������� ��� ������. ������� ������ ������ �� �����. ������, ����� �����,
  �������� �� �����. ��� ���������� � ��������� ������ ����������� ��� double. ��� ���������� ������� ��� ����� 
  ��������� �������� ������� sqrt �� ������������� ����� cmath.
���������: ����� ����, ��� �� ������� ��� �������, ���������� ��������, ��� ���������� �� ���� ���������, ����
 �� �� �� �������������, ��� a?0a?0. 
Sample Input 1:
1 4 4
Sample Output 1:
-2 -2
Sample Input 2:
1 0 1
Sample Output 2:
No real roots
Sample Input 3:
1 0 0
Sample Output 3:
0 0*/
#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, D, x1, x2;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	D=pow(b,2)-4*a*c;
	if (D>0){
		x1=(-b+sqrt(D))/(2*a);
		x2=(-b-sqrt(D))/(2*a);
		printf("%f %f",x1,x2);
	}
	if (D==0){
		x1=(-b+sqrt(D))/(2*a);
		x2=x1;
		printf("%f %f",x1,x2);
	}
	if (D<0){
		printf("No real roots");
	}
	
	return 0;
}

/*�������� ���������, ������� ����������� ������ �� std::cin, ���� �� ��������� ����� ������ �����, � 
�������� ��������� ������ ������ �������� ����� � ������� ���������� ��������� � std::cout. ������� 
������ ��������, ����� �������� ������� �� �����. ��� ���������� ������� ��� �� ����������� ������������
 �������������� �������, � ������: ���������, ������������ ������������ � ��������, ���� ���� �� ��� � ���� 
 �������. �� ������ ���������� ����� ��������������� �������, ���� ��� ��� �����.
���������: �������� ����������� ���� ��� ������������ ����. ������� ������ ('\0'), ������ ����� ������
 ('\n') � ����� ������ - ��� ��� ������ ����. ��� ��, ��� �������� ����� ������ -  �������� � ����� ��� ������������ ����.
Sample Input:
There are    a     lot  of    spaces  here
Sample Output:
There are a lot of spaces here*/
#include <iostream>

using namespace std;
 
int main()
{
    char c = '\0';
    while (cin.get(c)) {
        //cin.peek() - ��������� ������
        while (c == ' ' && cin.peek() == ' ')
            cin.get(c);
        cout << c;
    }   
    return 0;
};

/*�������� ��������� ��� ���������� �������������� ��������� �� ��������� 
2. �� ���� ��������� � ������ ������ �������� ����� TT, ����� ������� TT
 ����� � �������. ������ ���� ������� �� ������ ������ �������������� ����� 
 ai<109ai<109, ��� ������� aiai ����� ������� �� ��������� ������ ����� ����������
  ����� pp, ��� 2p?ai2p?ai. �������������, ��� ai?1ai?1 . ��� ������� ������ �� 
  ������ ���������� ����� ��������������� �������, ���� ��� ��� �����, ����� ����
   ������������� ������� ���������� ��������� � ��������� �������.
�����������: ���������� cmath (� math.h) ������������ ���������.
Sample Input:
5
11539
43573
56875
17448
58668
Sample Output:
13
15
15
14
15*/
 
#include <iostream>
 
int log(int);
 
int main() {
    
    int n;
    std::cin >> n;
 
    while(n--) {
        int k;
        std::cin >> k;
        
        std::cout << log(k) << std::endl;
    }
    return 0;
}
 
int log(int k) {
    int p = -1;
 
    do {
        k >>= 1;
        ++p;
    } while(k);
 
    return p;
}

/*�������� ����������� ������� ���������� ����������� ������ �������� ���� ������������� ����� ����� 
(Greatest Common Divisor, GCD). ��� ����� �������������� ���������� ����������:
1.	GCD(a,b)=GCD(b,amodb)GCD(a,b)=GCD(b,amodb)
2.	GCD(0,a)=aGCD(0,a)=a
3.	GCD(a,b)=GCD(b,a)GCD(a,b)=GCD(b,a)
���������� � ����������: � ������ ������� ��������� ������������ �������. �� ������ �������� ����� 
��������������� �������, ���� ��� ��� �����. ������� main ���������� �� �����.*/

int gcd (int a, int b) { 
return !b ? a : gcd (b, a % b); 
}

/*� ���� ��������� ���������� ��������� �������:
int foo(int n) {
    if (n <= 0)
        return 1;
    return foo((n * 2) / 3) + foo(n - 2);
}
����� ���������, ������� ����� ��� ����� ������� ������� foo, ���� �� ������� � ���������� 3 (�.�. foo(3)).
 ����� ������ ����� ���� ����� ���������. 
���������: ��� ������� ���� ������ ����� ������� ���������� ������ ����������� �������.*/

9


/*��� ��������� �������� ���������, ������� "��������������" ������������������ �������������
 ����� �����. �� ���� �������� ������������������ ����������� ��������� ������������� ����� �����.
  ������������������ ������������� �����. ��������� ������� ��� ������������������ � �������� �������. 
�� ������ ����� ����� ��� �� ��������� ���������. ����������� ���� - ��� ������ ��������� ����� 
������������������, �� �� �������� �� ������, �.�. �������� ��� �� �����. 
���������� � ����������: � ������ ������� ��������� ������������ �����, � ����� �������������� ������:
 �������, ������ ��� ���������� (����, ���� �� � ���� ��� �������). ��� ��������� �������� ��������������� �������, ���� ��� ��� �����. 
���������: ����������� ��������.
Sample Input:
15 26 1 42 0
Sample Output:
42 1 26 15      */

#include <iostream>
using namespace std;
 
int b = 0;
 
int foo1(int nex){
 
	if ( nex==0 ){
		return 0;
	}
 
	cin >> b;	
 
	foo1(b);	
 
	cout << nex << ' ';
 
}
 
 
 
int main() {
	int c;
 
	cin >> c;
	foo1(c);
 
 
}

/*� ���� ������ ��� ����� ����������� �������, ������� �������� ���������� ������� ����� �� 
�������� ����� ������� (����������� �����).
�� ���� ������� ��������� ������, ��� ������ � �������� ������. ��������, ���� �� ���� ������� �����
 ������: int a[] = { 1, 2, 3, 4, 5 }; � ��������� ���������� �������� ��� ����� �� 2 �������, �� �� 
 ������ �� ������� ����� � ����� �������: 3, 4, 5, 1, 2.
�������� ��������, ��� �������� ������ ����� ���� �������, � ����� ���� � ������ ������� �������, ��� ��� 
������ ����� ������.
���������� � ����������: ��� ����� ����������� ������ ������� ������������ ������. ��� ���� ��� �� ������ 
������� ��� �������� ���-����. ��� ������� ���� ������ �� ������ ���������� ����� ��������������� �������, 
���� ��� ��� �����. ������������� ������� main �� �����. ��������������, ��� ��� �� ����������� �������������� 
������, � ������: ������� � ����������� ����������. ������������ ������������ ����������� � ������������ ��
 �����������, ���� ���� �� � ���� �������.
������������: ����� ���, ��� ������ ���������� ������� ���� ������, ���������� ��������, ������� �� ������ 
������������. � ������ ������ �� ����������� ������������� ����� ��������� (� �������� ��������).
���������: ��� ����� ������������� �������� % ��� ���������� �������. �������� ������� ���������� ���� ������� 
�������� ������ �� ���� ������� �� ������. �������� ������� ���������� ��������� ��� ���������� �������, �������
 ������������ �������� ������� � �������� �������.*/
 
 void rotate(int * m, unsigned n, int shift)
{
shift %= int(n);
 
    if(shift) { 
        shift = shift > 0 ? shift : n + shift;
        
        int * pb = m;
        int * pe = m + n - 1;
        while(pb < pe) {
            int t = *pb;
            *pb++ = *pe;
            *pe-- = t;
        }
 
        pb = m;
        pe = m + n-1-shift;
        while(pb < pe) {
            int t = *pb;
            *pb++ = *pe;
            *pe-- = t;
        }
 
        pb = m + n - shift;
        pe = m + n - 1;
        while(pb < pe) {
            int t = *pb;
            *pb++ = *pe;
            *pe-- = t;
        }
    }
}

/*����� ����� ��� ������ �� �������� ��� ����� ������� ��������� ����� ������. 
��� C-style ����� ����� ����� ���� �� ��������, �� � ����� ���������. ��������
 �������, ������� ��������� ����� C-style ������. ������, ��� ����������� ������� ������ ������� �� �����. 
���������� � ����������: ��� ���������� ����� ������� �� ������ ��������� ����� 
��������������� �������. ������� ��� �������� ���-���� �� �����. ������������� ������� main �� �����.*/

unsigned strlen(const char *str)
{
    unsigned cnt = 0;
    while(*(str + cnt) != 0) ++cnt;
 
    return cnt;
}

/*��� ��������� ����������� ������� ������������ (�������) ���� C-style �����. ������� ������������ ��������� 
�� ���� ��� C-style ������ � ���������� ������ � ����� ������ ���, ����� ������ ������ ������������ �� ���� ���� 
C-style ������ ������ ������������ ���� ��������.
�� ��������, ��� � �������������� ������ ������ ���� ������ ���� ������� ������ - ���, ��� �������� �������� ����� ������.
�������������, ��� � ������ ������ ���������� ������ (�.�. ��� ������������� � ������� ����������� �����), ����� 
���������� ������������ ����� �����, �� �� ������.
���������� � ����������: ��� ���������� ������� �� ������ ���������� ����� ��������������� �������, ���� ��� ��� �����.
 �������� ��� ������� ���-���� �� �����. ������� main ���������� �� �����.

����� �������� �������, ������� � ����������...�� ��� ��������*/

void strcat(char *to, const char *from)
{
    for(;*to;++to);
    while(*to++=*from++);
}

/*�������� ������� ������ ������� ��������� ������� � �����. � �������� ������� ��������� ������� 
��������� ����� (C-style ������), � ������� ����� ������ ������. � �������� ������� ��������� ������-������ 
(C-style ������), ������� ����� �����. ������� ���������� ������� ������� ��������� ������-�������, ���� �� 
������������ � ������ (�������, ��� � C++ ������� ������� � 0), � -1, ���� ������� � ������ ���. 
������, ��� ������ ������ (������ ����� 0) ����� ����� � ����� ����� ������. 
���������� � ����������: ��� ���������� ������� ������� �� ������ ���������� ����� ��������������� �������, 
���� ��� ��� �����. ������� ��� �������� ���-���� �� �����. ������������� ������� main �� �����.*/

int strstr(const char *text, const char *pattern) {
 
    int estr=0,epattern=0,k=0;
 
    for (int i=0;i>=0;i++){
        if (text[i]=='\0'){
            estr=i;
            break;
        }
    }
 
    for (int i=0;i>=0;i++){
        if (pattern[i]=='\0'){
            epattern=i;
            break;
        }
    }
    if (epattern==0) return 0;
 
    if (epattern>estr) return -1;
 
    for (int i=0;i<(estr-epattern+1);i++){
        k=0;
        for (int j=0;j<(epattern);j++){
            if (text[i+j]==pattern[j]) k++;
            else break;
        }
        if (k==(epattern)) return i;
    }
    return -1;
}

/*� ���� ������ ��� ����� ����������� ������� resize. ������� resize ��������� 
�� ���� ��� ���������: ��������� �� ������� ������, ���������� � ������� ��������� new[], 
������ ������� (size) � ����� ������ (new_size). ������� ������ �������� ������ ������� 
new_size, ����������� � ��� ������ �� ���������� ������� ������, ���������� ������ �������
 ������ � ������� ���������� ������� ������ ������ ������� �� �������������� �������.  
�������� ��������, ��� ������, ������������ �� �������, ����� ����������� � ������� ��������� 
delete[]. �������� �� ��, ��� ������� ��� ������ - ��� const char *, �� ����� ������������, ��� 
��� �������� C-style ������. ��� ���������� ������� ����� ������, ��� new_size ����� ���� ������ size. 
���������� � ����������: ��� ���������� ������� ������� �� ������ ���������� ����� ���������������
 �������. ������� ��� �������� ���-���� �� �����. ���������� ������� main �� �����.*/
 
 char *resize(const char *str, unsigned size, unsigned new_size)
{
    char * new_str = new char[new_size];
    for(int i = 0; i < size && i < new_size; ++i)
        new_str[i] = str[i];
    delete[] str;
 
    return new_str;
}

/*������� ��������� ������ � �������� ������������: Character (��������), LongRange (�������� �������� ��������),
 Wizard (���), SwordsMan (������), Archer (������).
�������� �������� �� ������, ����������� � ������� - ��� ��������� � �������� �������� ����������, ������� ������ 
�������� ������. �� ��������� ���������� ������� - ��� ���� ��� ���������, ������ �������� ������������ � ����������� �������.*/

#include <string> // std::string
 
struct Character
{
    std::string const & name() const;
    unsigned health() const;
};
 
struct LongRange : Character
{
    std::string const & name() const;
    unsigned health() const;
 
    unsigned range() const;
};
 
struct SwordsMan : Character
{
    std::string const & name() const;
    unsigned health() const;
 
    unsigned strength() const;    
};
 
struct Wizard : LongRange
{
    std::string const & name() const;
    unsigned health() const;
 
    unsigned range() const;
 
    unsigned mana() const;
};
 
struct Archer : LongRange
{
    std::string const & name() const;
    unsigned health() const;
 
    unsigned range() const;
 
    unsigned accuracy() const;
};

/*��� ��� ����� Foo:
struct Foo {
    void say() const { std::cout << "Foo says: " << msg << "\n"; }
protected:
    Foo(const char *msg) : msg(msg) { }
private:
    const char *msg;
};
��� �����, ��������� ������ �� ����� ����� ��� ������������ � "�������" ����������� ������. �� 
� ����� ����� ������ ����� ������, ����� �������� ��� � ������� foo_says:
void foo_says(const Foo& foo) { foo.say(); }
� ���� ������� ��� ����� ����������� ������� get_foo (��������� ������� �������� �� ���������� 
� ������� ���������, ��� ����� �������� � ������� �� ��������������) ���, ����� ��������� ��� �������������� � �������:
foo_says(get_foo(msg));
��� msg - ������������ C-style ������. 
���������� � ����������: ��� ���������� ������� ��� ��������� ������� ����� ��������������� ������� � ������. 
��������� �������� ����������� ������ Foo ��� ������� foo_says. ������� ��� �������� ���-���� �� �����. ������������� ������� main �� �����.*/

/* ���� ��� ������ ����������� ��� �������� ����� Foo � ������� foo_says.
 * �� ����� ��� ����������������� �/��� ������.
 *
 * #include <iostream>
 *        
 * struct Foo {
 *     void say() const { std::cout << "Foo says: " << msg << "\n"; }
 * protected:
 *     Foo(const char *msg) : msg(msg) { }
 * private:
 *     const char *msg;
 * };
 * 
 * void foo_says(const Foo &foo) { foo.say(); }
 *
 */

// ��� ����� ���������� ������� get_foo, ��� ������� � �������,
// ����� �������������� � ������� ��� ��������� ��������� ���:
//
// foo_says(get_foo("Hello!"));


Foo get_foo(const char *msg) {
    struct Foo1 : Foo {
        public:
        Foo1(const char *msg) : Foo(msg) { }
    };
    
    //��������� ������ ���������, � �������� � �������� ��������� msg � ��� ����������.
    Foo1 f = Foo1(msg);
    return f;
}

/*� ���� ������� ��� ������������ ����������� �������� ������� Expression ��� ������������� �������������� ���������. 
����������, ��� ����� ���������� ��� ������: Expression - ������� ����� ��������, Number - ��� ������������� ����� � BinaryOperation -
 ����� ����������� �������� �������� (+, -, * ��� /).
����� Number ������ ������� �������� ���� double.
����� BinaryOperation ������ ������� ��������� �� ����� � ������ ��������, ������� ���� �������� ��������������� �����������,
 � ����� ��� �������� (+, -, * ��� /), ������� ����� ��� ���� ����������.
�� ���� ������� ������ ���� ����� evaluate, ������� ���������� �������� ���� double - �������� ���������������� ���������������
 ���������, ��������, �������� ���������� ���� Number - ��� �����, ������� �� ������, � ���� � ��� ���� ������ BinaryOperation �
  ��������� +, �� ����� ��������� �������� ������ � ������� �������� � ������� �� �����.
� ������ ������� ��� ����� ���������� �������� ����� virtual ���, ��� ��� ����������, ���������� ����� evaluate ���, ��� ��� ��
 �������, � ����� ����������� �����������, ��� ��� ��� �����.
��� ���������� ����� ������� ������, ��� ��� ����������� ������� BinaryOperation �� �������� �� ����������� ������ � �������
 ��������� (�������������, ��� ��� �������� � ������������ ������).
��������, ��������� 3 + 4.5 * 5 ����� ��������������� ��������� ���:
// ������� ������ ������� ��� ������������ 4.5 * 5
Expression * sube = new BinaryOperation(new Number(4.5), '*', new Number(5));
// ����� ���������� ��� � ��������� ��� +
Expression * expr = new BinaryOperation(new Number(3), '+', sube);

// ��������� � ������� ���������: 25.5
std::cout << expr->evaluate() << std::endl;

// ��� ������������� *���* ���������� �������
// (��������, sube ����� ������ ��������� expr, ������� ��� ������� �� �����)
delete expr;


���������� � ����������: ��� ���������� ����� ������� �� ����� ������� ��� �������� ���-����. �� ������ �������� �����
 ��������������� �������, ������ ��� ������, �� �� ����� ������������� ������� main.*/
 
 struct Expression {
    virtual double evaluate() const = 0;
    virtual ~Expression() {}
};
 
struct Number: public Expression {
    Number(double value): value(value) {}
    double evaluate() const { return value; }
    
private:
    double value;
};
 
struct BinaryOperation: Expression {
    BinaryOperation(Expression const * left, char op, Expression const * right) : left(left), op(op), right(right) {}
    double evaluate() const { 
        double t = left->evaluate();
        switch(op) {
            case '+':
                t += right->evaluate();
                break;
            case '-':
                t -= right->evaluate();
                break;
            case '*':
                t *= right->evaluate();
                break;
            default:
                t /= right->evaluate();
                break;
        }
        return t; 
    }
    ~BinaryOperation() {
        delete left;
        delete right;
    }
private:
    Expression const * left;
    Expression const * right;
    char op;
};

/*(������� ���������� ���������) �������������� ������� ����� ������� �� ���������� � �����
 ������ ���������, ������ ��� ��������� �� ��������� ������� ������������ g++/clang++/msvc. ������� 
 ����� ������� �� ����������� ��� ��������� ������� �� ����� �����, ������ �� ������� ��� ��������, 
 ����� ����� ������ ��� �������� ����������� ������� ������.
��� ��������� ����������� �������, ������� ��������� �� ���� ��� ��������� �� ������� ����� Expression,
 � ���������� true, ���� ��� ��������� ��������� �� ����� ���� �� ������� ������ � ���� �� ������, � false 
 � ��������� ������ (�.�. ���� ��� ��������� ��������� �� BinaryOperation, �� ������������ true, � ���� 
 ���� �� ��� ��������� �� Number, � ������ �� BinaryOperation, �� false).
���������� � ����������: ������������ typeid � dynamic_cast ���������. �������� ������ �� ���������� ���������� ���������.*/

bool check_equals(Expression const *left, Expression const *right)
{
    return (*((size_t*)left) == *((size_t*)right));
}

/*�� ������� ����� �� ������������� � ����������� �������� ����������. ������ ������ ����� ��������������� ����� ��������.
 ��� ����� ������ �������� (��������� std::cout) ��������� ������������� ��������������� ���������. �.�. ��� ������� ������
  Number �� ������ ���������� �����, ������� � ��� ��������, � ��� ������� ������ BinaryOperation �� ������ ���������� ����� 
  �������, ����� ��������, � ����� ������ �������.
������, ��� �������� + � - ����� ������� ���������, ��� �������� * � /, �. �. �������� ��� �������� �������� �������������� 
������� ������, ����� ��������� ���������� ������� ��������.
������ �������� Expression � ����������� ����� Visitor ��������� � ����������� � ������� ��� ��������.
��� �������� ������� ������ ������� ��� ������ ������ ����� ��������������, �.�. ����� "1+2" ������������ 
������ "( ( 1 )  +   ( 2 ) )", � ��� ����� "1 + 2 * 3" �� ������������ ������ "((1 + 2) * 3)". �� ������ ���������� �������������� 
���������� ������ � ������, �� ��� �� ���������.
����� ����������� ������� ����������� ���������� ���������� ����������� �����.
���������� � ����������: ��� ���������� ������� �� ������ �������� ����� ��������������� ������ ��� �������, �� �� ����� �������������
 ������� main ��� ������ ���������� ������� �������� Expression.*/
 
 /*
struct Number;
struct BinaryOperation;
 
struct Visitor {
    virtual void visitNumber(Number const * number) = 0;
    virtual void visitBinaryOperation(BinaryOperation const * operation) = 0;
    virtual ~Visitor() { }
};
 
struct Expression
{
    virtual double evaluate() const = 0;
    virtual void visit(Visitor * vistitor) const = 0;
    virtual ~Expression();
};
 
struct Number : Expression
{
    Number(double value);
    double evaluate() const;
 
    double get_value() const { return value; }
 
    void visit(Visitor * visitor) const { visitor->visitNumber(this); }
 
private:
    double value;
};
 
struct BinaryOperation : Expression
{
    BinaryOperation(Expression const * left, char op, Expression const * right);
    ~BinaryOperation();
    double evaluate() const;
 
    Expression const * get_left() const { return left; }
    Expression const * get_right() const { return right; }
    char get_op() const { return op; }
 
    void visit(Visitor * visitor) const { visitor->visitBinaryOperation(this); }
 
private:
    Expression const * left;
    Expression const * right;
    char op;
};
*/
 
#include <iostream>
 
struct PrintVisitor: Visitor {
 
    void visitNumber(Number const * number) {
        double x = number->evaluate();
        if(x < 0)
            std::cout << "(" << x << ")";
        else
            std::cout << x ;
    }
 
    void visitBinaryOperation(BinaryOperation const * bop) {
        bool is_prev = this->is;  
        char c = bop->get_op();
        bool is_cur = is_prev && (c == '-' || c == '+');
        if(is_cur)
            std::cout << "(";
        
        
        this->is = c=='*'||c=='/';  
        bop->get_left()->visit(this);
 
        std::cout << c;
        
        this->is = c=='*'||c =='/';
        bop->get_right()->visit(this);
        
        if(is_cur)
            std::cout << ")";
        this->is = is_prev;    
    }
private:
    bool is=false;
};

/*��� ��� ����� Rational, ������� ��������� ������������ �����. � ��� ���������� ������
 add, sub, mul � div, ������� ���������� � ���� �����, �������� �����, �������� �� ����� 
 � ����� �� ����� ��������������. ����� ���� � ��� ��������� ����� neg, ������� ������ ���� �� ���������������. 
��� ����� ���������� ��������� +=, -=, *=, /= ��� ������ Rational ���, ����� ��� ����� ��������� � 
�������� ���������� � ������� ���� Rational � ����� �����. ����� ���� ��� ���������� ���������� 
��������� �������� ������ � ����� ��� ������ Rational.
���������� � ����������: ��� ��� �� ������ ������� ��� ������� ���-����, ������������� ������� main ��
 �����. ����� ����, ������ (��� ���������� �� �����) ������������ ������������ ������ ��� ���������� �����-���� ����������.*/
 
 struct Rational
{
    Rational(int numerator = 0, int denominator = 1);
 
    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);
 
    void neg();
    void inv();
    double to_double() const;
    
    Rational & operator+=(const Rational & rational) { 
        this->add(rational);            
        return *this; 
    }
    Rational & operator+=(int d)                      { 
        this->add(Rational(d));         
        return *this; 
    }
    
    Rational & operator-=(const Rational & rational) { 
        this->sub(rational);    
        return *this; 
    }
    Rational & operator-=(int d)                      { 
        this->sub(Rational(d)); 
        return *this; 
    }
    
    Rational & operator*=(const Rational & rational) { 
        this->mul(rational);
        return *this; 
    }
    Rational & operator*=(int d)                     { 
        this->mul(Rational(d)); 
        return *this; 
    }
    
    Rational & operator/=(const Rational & rational) { 
        this->div(rational);    
        return *this; 
    }
    Rational & operator/=(int d)                     { 
        this->div(Rational(d)); 
        return *this; 
    }
 
    Rational operator-() const { Rational r(this->numerator_, this->denominator_); r.neg(); return r; }
    Rational operator+() const { Rational r(this->numerator_, this->denominator_);          return r; }
 
private:
    int numerator_;
    unsigned denominator_;
};

/*�������� � ����� Rational �������� ���������� � double. ��� ��������� �� ���������� ������� ����������� � 
������������� �� �� �����. ����� to_double ����� ������������ � ���� �������. 
������ ���������: ��������� �������� �������������� � double � ����� Rational �� ����� ������� ����, ��������,
 ������, ��� ��� ����� �������������� ����� ����������� ������ ��������. ��� ������ ���� ������������� � ����� 
 ������������ � ���������� �������� ���������� ����� ����������.
���������� � ����������: ��� ��� �� ������ ������� ��� ������� ���-����, ������������� ������� main �� �����.*/

struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;
    
    operator double() const{        
         return to_double();
    }

private:
    int numerator_;
    unsigned denominator_;
};

/*� ���� ������ ��� ��������� ����������� �������� [] ��� ��� ���������� ��� ������ String.
 ������ �� ���� ��� �������� ������ ������������� ������������� ���������: �������� ����� �����������
  ����� �������, ����� ��� ������� str ������ String ����� ���� ������ str[i][j] � ��� ��������� ���������� 
  ��������� ������������ � ������� i (������ � 0) � ��������������� � ������� j (�� �������). 
��������:
String const hello("hello");
String const hell = hello[0][4]; // ������ � hell �������� ��������� "hell"
String const ell  = hello[1][4]; // ������ � ell �������� ��������� "ell"

�������� ��������, ��� i ����� ��������� j, � ���� ������ ����������� ������ ���� ������ ������.
 �������������, ��� i ������� �� ����� ������ j, � ��� �� ����� �������� �� ������� ����� ������.
���������� � ����������: ��� ���������� ������� �� ������ ��������� ����� ������/������������ ��� 
���� ���������/������, ���� ��� ��� �����. ������������� ������, ������� ��� ���������� � �������,
 �� �����  ��� ��� �����������. ��� ���������� ������� �� ������� � �� �������� ���-����. ������������� ������� main �� �����.*/
 
 #include <cstddef> // size_t
#include <iostream>
 
struct String {
    String(const char *str = "");
    String(size_t n, char c);
    ~String();
 
    String(const String &other);
    String &operator=(const String &other);
 
    void append(const String &other);
    
    class PreparedString {
    public:
        void write(std::ostream& out) const;
        
        String operator[](unsigned int to) const;
        
        PreparedString(const String& source_in, unsigned int from_in);
        
    private:
        const String& source;
        unsigned int from;
    };
    
    void write(std::ostream& out) const;
    
    PreparedString operator[](unsigned int from) const;
    
    size_t size;
    char *str;
};
 
void String::PreparedString::write(std::ostream& out) const
{
    out << (this->source.str+this->from) << std::endl;
}
 
String String::PreparedString::operator[](unsigned int to) const
    {
        char *tmp_c_str = new char[to-from+1];
        for(char *at_src = source.str+from, *at_dst = tmp_c_str, *last = source.str+to; at_src != last; ++at_src, ++at_dst)
            *at_dst = *at_src;
        *(tmp_c_str+to-from) = '\0';
        String tmp_string(tmp_c_str);
        delete[] tmp_c_str;
        
        return tmp_string;
    }
    
String::PreparedString::PreparedString(const String& source_in, unsigned int from_in): source(source_in), from(from_in)
{
}
 
String::PreparedString String::operator[](unsigned int from) const
{
    return String::PreparedString(*this,from);
}
 
void String::write(std::ostream& out) const
{
    out << this->str << std::endl;
}

/*������� ���������� ���������. 
���������� ����� SharedPtr ��� ������� �����. ������� ������� �������, ��� ������� �� ������ ������.
 ������� ������ �������� "��������� �������" - ������� ���������, ������������ ������ ����, ����� reset �� ������� SharedPtr � ������. 
���������: ��������, ��� ����������� ������� ��������������� ���������.
���������� � ����������: ��� ��� �� ������ ������� ��� ������� ���-����, ������������� ������� main �� �����.

struct Expression;
struct Number;
struct BinaryOperation;

struct SharedPtr
{
    // ?????????? ????????? ??????
    //
    // explicit SharedPtr(Expression *ptr = 0)
    // ~SharedPtr()
    // SharedPtr(const SharedPtr &)
    // SharedPtr& operator=(const SharedPtr &)
    // Expression* get() const
    // void reset(Expression *ptr = 0)
    // Expression& operator*() const
    // Expression* operator->() const
};*/

struct Expression;
struct Number;
struct BinaryOperation;
 
struct Help {
    Help(Expression *ptr=NULL) {
        this->ptr = ptr;
        cnt = 1;
    }
    ~Help() {
        delete ptr;     
    }
    Expression * ptr;
    mutable int cnt ;
};
 
struct SharedPtr {
    // ?????????? ????????? ??????
    //
    explicit SharedPtr(Expression *ptr = 0) {
        if(ptr != 0)
            h = new Help(ptr);
        else
            h = NULL;
    }
    ~SharedPtr() {      
        if(h!=NULL) {
            --(h->cnt);
            if(h->cnt == 0)
                delete h;
        }
    }
    SharedPtr(const SharedPtr & other) {
        this->h = other.h;
        if(this->h!=NULL && this->h->cnt)
            ++(this->h->cnt);
    }
    SharedPtr& operator=(const SharedPtr & other) {
        if(this!=&other){
            this->~SharedPtr();
            this->h = other.h;
            if(this->h != NULL)
                ++(this->h->cnt);
        }
    }
    Expression* get() const {
        if(this->h != NULL)
            return this->h->ptr;
        else
            return NULL;
    }
    void reset(Expression *ptr = 0) {
        this->~SharedPtr();
        if(ptr != 0)
            h = new Help(ptr);
        else
            h = NULL;
    }
    Expression& operator*() const {
        if(this->h != NULL)
            return *(this->h->ptr);
        else
            return *(Expression *)NULL;
    }
    Expression * operator->() const {
        if(this->h != NULL)
            return this->h->ptr;
        else
            return NULL;
    }
private:
    Help * h=NULL;
};

/*���������� ��������� ������ ������ Array. ������ ���� ��������, ������� ������ ������������ ����� Array, �������� � ������� ����.*/
#include <cstddef>
#include <iostream>
using namespace std;
template <typename T>
class Array
{
    // ������ ��������:
    //
    // explicit Array(size_t size = 0, const T& value = T())
    //   ����������� ������, ������� �������
    //   Array ������� size, ����������� ����������
    //   value ���� T. �������� ��� � ���� T ����
    //   �����������, ������� ����� ������� ���
    //   ��� ����������, ���� �� ��� �� �����.
    //
    // Array(const Array &)
    //   ����������� �����������, ������� �������
    //   ����� ���������. ��������, ��� ��� ����
    //   T ��������� �������� ������������.
    //
    // ~Array()
    //   ����������, ���� �� ��� ���������.
    //
    // Array& operator=(...)
    //   �������� ������������.
    //
    // size_t size() const
    //   ���������� ������ ������� (����������
    //                              ���������).
    //
    // T& operator[](size_t)
    // const T& operator[](size_t) const
    //   ��� ������ ��������� ������� �� �������.

    public:
    explicit Array(size_t size = 0, const T& value = T()) : size_(size), data_(new T[size]) {
        for (size_t i = 0; i != size_; ++i){
            data_[i] = value;
        }
    }
    Array(const Array & obj) : size_(obj.size_), data_(new T[obj.size_]) {
        for (size_t i = 0; i != size_; ++i){
            data_[i] = obj.data_[i];
        }
    }
    Array& operator=(const Array & obj){
        if (this != &obj) {
            delete [] data_;
            size_ = obj.size_;
            data_ = new T[size_];
            for (size_t i = 0; i != size_; ++i) {
                data_[i] = obj.data_[i];
            }
        }
        return *this;
    }

    size_t size() const {
        return size_;
    }
    T& operator[](size_t i) {
        return data_[i];
    }
    const T& operator[](size_t i) const {
        return data_[i];
    }
    ~Array() {
        delete[] data_;
    }

    private :
        size_t size_ ;
        T * data_ ;
};

/*� ���������� ������ ��������������, ��� ��� ���� T ��������� �������� ������������ 
��� �� ��� �� ����� (��������, ��� ����������� ����� �� �� �����). ��� �������� ���������
 ������� ����������� (����� Array � �� ������) ������� ��������� �������������� ����������
  � ����� ��������� ����������. ������� �������� ������, ���������� ����� Array �� ���������
   �� ��, ��� ��� ���� T ��������� �������� ������������. Hints: ����������� placement new �
    ����� ����� ����������� (�������� ���� 3.4), ����� ��������� � ���������� �������, ������������
	 ��������� ����������� ������ ����� � ������� new char[N * sizeof(T)], ��� N - ���������� ��������� �������.
Sample Input:
There are no tests for this task
Sample Output:
OK*/

#include <cstddef>
#include <iostream>
using namespace std;
template <typename T>
class Array
{
    // ������ ��������:
    //
    // Array(size_t size, const T& value = T())
    //   ����������� ������, ������� �������
    //   Array ������� size, ����������� ����������
    //   value ���� T. �������� ��� � ���� T ����
    //   �����������, ������� ����� ������� ���
    //   ��� ����������, ���� �� ��� �� �����.
    //
    // Array()
    //   ����������� ������, ������� ����� �������
    //   ��� ����������. ������ ��������� ������
    //   Array.
    //
    // Array(const Array &)
    //   ����������� �����������, ������� �������
    //   ����� ���������. ��� ���� T ��������
    //   ����������� �� ���������.
    //
    // ~Array()
    //   ����������, ���� �� ��� ���������.
    //
    // Array& operator=(...)
    //   �������� ������������.
    //
    // size_t size() const
    //   ���������� ������ ������� (����������
    //                              ��������).
    //
    // T& operator[](size_t)
    // const T& operator[](size_t) const
    //   ��� ������ ��������� ������� �� �������.

    public:
    Array(size_t size, const T& value = T()) {
        size_ = size;
        data_ = (T*) new char[size_ * sizeof(T)];
        for (size_t i = 0; i != size_; ++i){
            new (data_ + i) T(value);
        }
    }
    Array() {
        size_ = 0;
//        data_ = (T*) new char[size_ * sizeof(T)];
        data_ = 0;
    }
    Array(const Array & obj) {
        size_ = obj.size();
        data_ = (T*) new char[size_ * sizeof(T)];
        for (size_t i = 0; i != size_; ++i) {
            new (data_ + i) T(obj[i]);
        }
    }
    Array& operator=(const Array & obj){
        if (this != &obj) {
            mem_free();
            size_ = obj.size();
            data_ = (T*) new char[size_ * sizeof(T)];
            for (size_t i = 0; i != size_; ++i) {
                new (data_ + i) T(obj[i]);
            }
        }
        return *this;
    }

    size_t size() const {
        return size_;
    }
    T& operator[](size_t i) {
        //return data_[i]; �����������:
        return *(data_ + i);
    }
    const T& operator[](size_t i) const {
        //return data_[i]; �����������:
        return *(data_ + i);
    }
    ~Array() {
        mem_free();
    }

    void mem_free(){
        for (size_t i = 0; i != size_; ++i) {
            data_[i].~T();
        }
        // ������ �������� �����!!
        delete [] (char *) data_;
    }

    private :
        size_t size_ ;
        T * data_ ;
};

struct NonCopyable {
    // copy and assignment not allowed
    NonCopyable(const int value ): value_(value) {};
    NonCopyable& operator=(const NonCopyable & obj) = delete;
private:
    int value_;
};

/*��������� ������ ����� �����������. ���������� ��������� ��������� ValueHolder � 
����� ������� ���������� T, �������������� �� ���������� ICloneable. ��������� ICloneable
 �������� ����� ���� ����������� ����� ICloneable* clone() const, ������� ������ ������� 
 ��������� �� ����� �������, �� ������� �� ��� ������ (������ ������ ���� ������ � ����). 
 ������ ValueHolder, ��� ������� ��� ��������, ������ ����� ���� �������� (�������� ��� data_)
  ���� T (��� ���� T ��������� ����������� �����������). �� ������� ���� data_ ��������
   (������� � ������ ������ �� ���� �����, ��� ValueHolder ������ ���� ����������).*/
   
struct ICloneable
{
	virtual ICloneable* clone() const = 0;
	virtual ~ICloneable() { }
};

// ������ ValueHolder � ������� ���������� T,
// ������ ��������� ���� �������� ���� data_
// ���� T.
//
// � ������� ValueHolder ������ ���� ���������
// ����������� �� ������ ��������� ���� T,
// ������� �������������� ���� data_.
//
// ������ ValueHolder ������ �������������
// ��������� ICloneable, � ���������� ���������
// �� ����� �������, ��������� � ����, �� ������
// clone.

template <typename T>
struct ValueHolder : ICloneable {

    ValueHolder(T value) : data_(value) {};

    ValueHolder * clone() const {
        return new ValueHolder(*this);
    }

    ~ValueHolder() {}

    T data_;
};

/*���������� ������� ����������� ��������� copy_n �� ������� ��������� ���� U* � ������� ������ ���� T*,
 ��� T � U ������������ ����, ��� ������� ���������� �������������� �� U � T. �� ���� ������� ��������� ���
  ��������� � ���������� ���������, ������� ���������� �����������.
������ ������ ������� copy_n:
int ints[] = {1, 2, 3, 4};
double doubles[4] = {};
copy_n(doubles, ints, 4); // ������ � ������� doubles ���������� �������� 1.0, 2.0, 3.0 � 4.0
Sample Input:
There are no tests for this task
Sample Output:
OK*/

#include <cstddef>

// ��������� ������� copy_n ���� � ���������
// �������:
//   1. ������� ������
//   2. ������ ��������
//   3. ���������� ���������, ������� �����
//      �����������
//
// ��� ����� ����������� ������ ������� copy_n,
// ����� �� ����� ���� ������� ���, ��� ��������
// � �������.


template <typename T, typename U>
void copy_n(T * dest, U * source, size_t size){
    for (size_t i=0; i != size; ++i){
        dest[i] = (T) source[i];
    }
}

/*���������� ��������� ������� minimum, ������� ������� ����������� �������, ������� �������� 
� ���������� ���������� ������ Array, ��� ���� ������� �������� ������� Array ����� ���� ������������.
 ����� ���������� ������� ������������� ����, �� ���� ������� ����� ����� ������������ ����������,
  � �������� ����������� ����� ��������� ������� ��� ������ ������ � ������������� ���������� "()". ������� ������ ������� minimum:
bool less(int a, int b) { return a < b; }
struct Greater { bool operator()(int a, int b) const { return b < a; } };
Array<int> ints(3);
ints[0] = 10;
ints[1] = 2;
ints[2] = 15;
int min = minimum(ints, less); // � min ������ ������� ����� 2
int max = minimum(ints, Greater()); // � max ������ ������� ����� 15
Sample Input:
There are no tests for this task
Sample Output:
OK*/

#include <cstddef>

template <typename T>
class Array
{
public:
	explicit Array(size_t size = 0, const T& value = T());
	Array(const Array& other);
	~Array();
	Array& operator=(Array other);
	void swap(Array &other);
	size_t size() const;
	T& operator[](size_t idx);
	const T& operator[](size_t idx) const;

private:
	size_t size_;
	T *data_;
};

template<class T, class Comparator>
T minimum(Array<T> & ar, Comparator comp){
    T result = ar[0];
    for (size_t i=1; i != ar.size(); ++i){
        if (comp(ar[i], result)){
            result = ar[i];
        }
    }
    return result;
};

/*� ������ ����� �� ����������� ������� ������ ValueHolder, � ���� ������� �� ���������� ��� ����� 
�������� ����� Any (���������, ��� �� ���������), ������� ��������� ������� �������� ������ ����! 
��������, �� �������  ������� ������ �������� ���� Any, � ��������� � ��� int-�, double-� ��� ���� 
������� Array. ����������� � ������� ����. 
Hint: � ����������� ������ Any ����� ���� ��������� ������, ��������, ��������� �����������.
��� ���������� ��� ����� ������������� �������� dynamic_cast.
�++ ������������� � ����� ������� ������ ������ ���������� ����� �� ��������� (��� ������) �� ������� 
�����. ��� ����� ����� ������������ �������� dynamic_cast. ��������, ���� � ��� ���� ��������� Expression *,
 � �� ������ ������, ��������� �� ���� ��������� �� ����� ���� �� ������ Number, �� ������� ��� ����� ���:
Expression *expression = parse(code);
Number *number = dynamic_cast<Number *>(expression);
if (number)
    std::cout << "It's a number" << std::endl;
else
    std::cout << "It is not a number" << std::endl;
 
���� expression ������������� ��������� �� ������ Number (��� �� ���� �� ��� �����������, �� � ����� ������� �� ���),
 �� �������� dynamic_cast<Number *> ������ ���������� ���������. ���� expression ��������� �� �� ����� Number, 
 �� ����� ��������� ������� ���������. �. �. ���� � ���������� number �������� ������� ���������, ������ expression 
 �� ��������� �� Number �� ����� ����.
��� ���������� ������ ��������� dynamic_cast � ����� ������� ���������, ����� ����� Expression ��� �����������,
 �. �. � ��� ������ ���� ��� ������� ���� ����������� ������� (��������, ����������). �������� ���������� ������ 
 dynamic_cast � � �� ������������ ������, �� � ���� ������ ������� �������� ���� ������� ���������� ����������� 
 �� ����� - �����, ��� �� ��, ��� ���������.
���� �������� ��������� dynamic_cast ������� ���������, �� �� ������ ������ ������� ��������� ������� ����, ������� 
��������� ��������� ����� ��������� � dynamic_cast �� �����.
Sample Input:
There are no tests for this task
Sample Output:
OK*/

// ��� ������ ������������� ������ �� �����
struct ICloneable;
 
// ���� data_ ���� T � ������ ValueHolder
// �������, � ���� ����� ����������
template <typename T>
struct ValueHolder;
 
class Any{
public:
    // � ������ Any ������ ���� �����������,
    // ������� ����� ������� ��� ����������,
    // ����� ������� ��������� ���:
    //    Any empty; // empty ������ �� ������
    Any():ptr(0) {} 
 
    // �� �������� ��� ����������. ��� ����������
    // ������� ����� ����������.
    ~Any() {
        delete ptr;     
    }
 
    // � ������ Any ����� ������ ���� �����������
    // ����������� (��� ������� ����� clone
    // ���������� ICloneable)
    Any(const Any & other):ptr(other.ptr ? other.ptr->clone() : 0) {}
    
    // � ������ Any ������ ���� ���������
    // ����������� �� ������ ���������, �����
    // ����� ���� ��������� ������� ���� Any,
    // ��������, ��������� �������:
    //    Any i(10); // i ������ �������� 10
    template<typename T>Any(const T val):ptr(new ValueHolder<T>(val)) {}
    
 
    // � ������ ������ ���� �������� ������������ �/���
    // ��������� �������� ������������, ����� �������
    // ��������� ���:
    //    Any copy(i); // copy ������ 10, ��� � i
    //    empty = copy; // empty ������ 10, ��� � copy
    //    empty = 0; // � ������ empty ������ 0
    Any & operator=(const Any & other) {
        if(this != &other) {
            delete ptr;
            ptr = other.ptr ? other.ptr->clone() : 0;
        }
 
        return *this;
    }
    template<typename T>Any & operator=(const T & val) {
        delete ptr;
        ptr = new ValueHolder<T>(val);
        
        return *this;
    }
    
 
    // �� � �������, �� ����� ����� �������� ��������
    // ��������, ��� ����� ���������� � ������ Any
    // ��������� ����� cast, ������� ����������
    // ��������� �� �������� ��������, ��� �������
    // ��������� � ������ �������������� ����� ���
    // ���� ������ Any ������ �� ������:
    //    int *iptr = i.cast<int>(); // *iptr == 10
    //    char *cptr = i.cast<char>(); // cptr == 0,
    //        // ������ ��� i ������ int, � �� char
    //    Any empty2;
    //    int *p = empty2.cast<int>(); // p == 0
    // ��� ���������� ����������� dynamic_cast,
    // ������� �� ��� ��������� �����.
    template<typename T>T * cast() {
        if(ptr == 0)
            return 0;
        else {
            ValueHolder<T>* pvh = dynamic_cast<ValueHolder<T>*>(ptr);
            if(pvh == 0)
                return 0;
            else
                return &(pvh->data_);
        }
    }
    
    
private:
    ICloneable * ptr;
};

/*� �������� ���������� �� ��������� ������������� �������� ������� ��� ������������ �����������
 ������� ������ SameType. ���� ������ �� �������� ������� �������, � ������ ���� ����������� ����������� 
 ���� ���� bool, � ������ value. ������ ��������� ��� ������� ���������, � ���� ��� ������� ��������� 
 ������� �������� ����� � ��� �� �����, �� ����������� ���� value ������ ������� �������� true, � ��������� 
 ������ �������� false. �������:
struct Dummy { };
typedef int type;
std::cout << SameType<int, int>::value << std::endl; // ������� 1, �. �. true
std::cout << SameType<int, type>::value << std::endl; // 1, type == int
std::cout << SameType<int, int&>::value << std::endl; // 0, int � ������ �� int - ��������� ����
std::cout << SameType<Dummy, Dummy>::value << std::endl; // 1
std::cout << SameType<int, const int>::value << std::endl; // 0, const - ����� ����
Hint: ������� �������, ������� �������� ������� ������ ����� ����.
Sample Input:
There are no tests for this task
Sample Output:
OK*/
#include <iostream>
/*
* � �������� ���������� �� ��������� ������������� �������� �������
* ��� ������������ ����������� ������� ������ SameType.
* ���� ������ �� �������� ������� �������,
* � ������ ���� ����������� ����������� ���� ���� bool, � ������ value.
* ������ ��������� ��� ������� ���������,
* � ���� ��� ������� ��������� ������� �������� ����� � ��� �� �����,
* �� ����������� ���� value ������ ������� �������� true, � ��������� ������ �������� false.
*
* �������:
struct Dummy { };
typedef int type;
std::cout << SameType<int, int>::value << std::endl; // ������� 1, �. �. true
std::cout << SameType<int, type>::value << std::endl; // 1, type == int
std::cout << SameType<int, int&>::value << std::endl; // 0, int � ������ �� int - ��������� ����
std::cout << SameType<Dummy, Dummy>::value << std::endl; // 1
std::cout << SameType<int, const int>::value << std::endl; // 0, const - ����� ����
Hint: ������� �������, ������� �������� ������� ������ ����� ����.
*/


// ���������� ������ SameType � ����� ��������
// �����������. � ������� ������ ���� ����������
// ���� ����������� ��������� ���� bool � ������
// value

template <typename T, typename V>
struct SameType
{ static const bool value = false; };

template <typename W>
struct SameType<W, W>
{ static const bool value = true; };

/*���������� ������� array_size, ������� ���������� ������ �������, ����������� � �������� ���������.
 ������� ������ �������� ������ ��� ��������! �. �. ���� ������� �������� ���������, ������ ��������� ������ ����������. �������:
int ints[] = {1, 2, 3, 4};
int *iptr = ints;
double doubles[] = {3.14};
array_size(ints); // ������ 4
array_size(doubles); // ������ 1
array_size(iptr); // ��� ������ ��������� ������ ����������
Hint: � ����� �� ������ ������ �� ��� ���������� ���� � ��������� �������� ������ ��������� ������� 
� ������� (�������� ������� �� ������), ���������� ��� � ������ �������� � ��������.
Sample Input:
There are no tests for this task
Sample Output:
OK*/

/*
* � �������� ���������� ������� ����� ��������� �� ������ ������ �� ����������� ����, �� � ������, ��������, �� �������. ��������� ������ �� ������ �� ���� �������� ���� int � ��������� ������� ����� ��������� �������:
* void foo(int (&a)[3]) {  ...  }
�������� ��������, ��� ������ ������ ��������� a � ������ ����������� ����������� - �� ����� �������� ������ �� ������, � �� ������ ������.
�������, ��� ����� ����������� �� ����� ������� ������, ���� ������� ��� �������� � ������� �� ����������.
������, ����� ����������� ��������� ����������� ������������ ������ �������.
��������, ��������� ��� �� ����� ���������������:
int a[1] = {};
foo(a);
���������� g++ �� ��� ������ ��������� ������:
        error: invalid initialization of reference of type 'int (&)[3]' from expression of type 'int [1]'
�. �. ���������� �� ����� �������� �� ������� �� ������ �������� ������ �� ������ �� ���� ���������, ��� � ���������.
//////////////////////////
*
* ���������� ������� array_size, ������� ���������� ������ �������,
* ����������� � �������� ���������.
* ������� ������ �������� ������ ��� ��������!
* �. �. ���� ������� �������� ���������, ������ ��������� ������ ����������.
*
* �������:
int ints[] = {1, 2, 3, 4};
int *iptr = ints;
double doubles[] = {3.14};
array_size(ints); // ������ 4
array_size(doubles); // ������ 1
array_size(iptr); // ��� ������ ��������� ������ ����������
Hint: � ����� �� ������ ������ �� ��� ���������� ���� � ��������� �������� ������ ��������� ������� � �������
(�������� ������� �� ������),
���������� ��� � ������ �������� � ��������.
* */

#include <cstddef> // size_t

// ���������� ��������� ������� array_size,
// ������� ���������� �������� ���� size_t.

template <typename A, size_t size>
size_t array_size(A (&array)[size]) {
    return size;
}















































