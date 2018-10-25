/*Напишите функцию power, реализующую возведение целого числа в неотрицательную целую степень. Функция power
 должна принимать на вход два целых числа и возвращать целое число (смотрите шаблон кода). При выполнении 
 задания учтите, что функция обязательно должна называться power, функция ничего не должна читать со входа или выводить. 
Требования к реализации: в этом задании вам нужно реализовать только функцию power. Вы можете определять вспомогательные
 функции, если они вам нужны. Реализовывать функции main не нужно. 
Ограничения: библиотеку cmath (и math.h) использовать запрещено.*/

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
/*Простая задача на закрепления материала по работе с  вводом/выводом. Напишите программу, которая
 суммирует целые числа. На вход программе подаются целые числа в следующем формате: на первой строке 
 идет целое число TT - количество тестов, далее следует TT строк, в каждой из которых через пробел идут
  два целых числа aiai и bibi. На выводе для каждой из TT строк нужно вывести сумму ai+biai+bi  в том порядке,
   в котором пары поступают на вход. Ничего, кроме этого, выводить не нужно.
В следующем примере строки ввода и вывода разделены. При считывания пользовательского ввода с консоли и выводе
 на консоль соответствующие строки ввода и вывода будут идти друг за другом.
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

/*Напишите программу для решения квадратных уравнений вида ax2+bx+c=0ax2+bx+c=0 (относительно xx). 
На вход программа получает три целых числа: aa , bb и cc, соответственно. При этом гарантируется, что a?0a?0.
 На вывод программа должна вывести два вещественных корня уравнения, разделённые пробелом. Если вещественных 
 корней нет, то программа должна вывести строку "No real roots". Если у уравнения имеется только один корень 
 (кратный корень), то программа должна вывести его дважды. Порядок вывода корней не важен. Ничего, кроме этого,
  выводить не нужно. Для вычислений с плавающей точкой используйте тип double. При выполнении задания вам может 
  оказаться полезной функция sqrt из заголовочного файла cmath.
Замечание: после того, как вы сдадите это задание, попробуйте подумать, как изменилась бы ваша программа, если
 бы мы не гарантировали, что a?0a?0. 
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

/*Напишите программу, которая посимвольно читает из std::cin, пока не достигнет конца потока ввода, и 
заменяет несколько подряд идущих пробелов одним и выводит полученный результат в std::cout. Никаких 
других символов, кроме пробелов удалять не нужно. При выполнении задания вам не разрешается пользоваться
 дополнительной памятью, а именно: массивами, стандартными контейнерами и строками, даже если вы уже с ними 
 знакомы. Вы можете определять любые вспомогательные функции, если они вам нужны.
Подсказка: прочтите внимательно степ про посимвольный ввод. Нулевой символ ('\0'), символ новой строки
 ('\n') и конец потока - это три разные вещи. Про то, как отловить конец потока -  написано в степе про посимвольный ввод.
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
        //cin.peek() - следующий символ
        while (c == ' ' && cin.peek() == ' ')
            cin.get(c);
        cout << c;
    }   
    return 0;
};

/*Напишите программу для вычисления целочисленного логарифма по основанию 
2. На вход программе в первой строке подается число TT, далее следует TT
 строк с тестами. Каждый тест состоит из одного целого положительного числа 
 ai<109ai<109, для каждого aiai нужно вывести на отдельной строке такое наибольшее
  число pp, что 2p?ai2p?ai. Гарантируется, что ai?1ai?1 . При решении задачи вы 
  можете определять любые вспомогательные функции, если они вам нужны, более того
   рекомендуется вынести вычисление логарифма в отдельную функцию.
Ограничения: библиотеку cmath (и math.h) использовать запрещено.
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

/*Напишите рекурсивную функцию вычисления наибольшего общего делителя двух положительных целых чисел 
(Greatest Common Divisor, GCD). Для этого воспользуйтесь следующими свойствами:
1.	GCD(a,b)=GCD(b,amodb)GCD(a,b)=GCD(b,amodb)
2.	GCD(0,a)=aGCD(0,a)=a
3.	GCD(a,b)=GCD(b,a)GCD(a,b)=GCD(b,a)
Требования к реализации: в данном задании запрещено пользоваться циклами. Вы можете заводить любые 
вспомогательные функции, если они вам нужны. Функцию main определять не нужно.*/

int gcd (int a, int b) { 
return !b ? a : gcd (b, a % b); 
}

/*В коде программы определена следующая функция:
int foo(int n) {
    if (n <= 0)
        return 1;
    return foo((n * 2) / 3) + foo(n - 2);
}
Нужно посчитать, сколько всего раз будет вызвана функция foo, если ее вызвать с аргументом 3 (т.е. foo(3)).
 Самый первый вызов тоже нужно посчитать. 
Подсказка: для решения этой задачи будет полезно нарисовать дерево рекурсивных вызовов.*/

9


/*Вам требуется написать программу, которая "переворачивает" последовательность положительных
 целых чисел. На вход подается последовательность разделенных пробелами положительных целых чисел.
  Последовательность заканчивается нулем. Требуется вывести эту последовательность в обратном порядке. 
На выводе числа нужно так же разделить пробелами. Завершающий ноль - это просто индикатор конца 
последовательности, он не является ее частью, т.е. выводить его не нужно. 
Требования к реализации: в данном задании запрещено использовать циклы, а также дополнительную память:
 массивы, строки или контейнеры (даже, если вы с ними уже знакомы). Вам разрешено заводить вспомогательные функции, если они вам нужны. 
Подсказка: используйте рекурсию.
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

/*В этой задаче вам нужно реализовать функцию, которая сдвигает содержимое массива влево на 
заданное число позиций (циклический сдвиг).
На вход функция принимает массив, его размер и величину сдвига. Например, если на вход функции подан
 массив: int a[] = { 1, 2, 3, 4, 5 }; и требуется циклически сдвинуть его влево на 2 позиции, то на 
 выходе мы получим числа в таком порядке: 3, 4, 5, 1, 2.
Обратите внимание, что величина сдвига может быть нулевой, а может быть и больше размера массива, все эти 
случаи нужно учесть.
Требования к реализации: вам нужно реализовать только функцию циклического сдвига. При этом она не должна 
вводить или выводить что-либо. При решении этой задачи вы можете определять любые вспомогательные функции, 
если они вам нужны. Реализовывать функцию main не нужно. Предполагается, что вам не потребуется дополнительная 
память, а именно: массивы и стандартные контейнеры. Пользоваться стандартными алгоритмами и контейнерами не
 разрешается, даже если вы с ними знакомы.
Рекомендация: перед тем, как начать кодировать решение этой задачи, продумайте алгоритм, который вы будете 
использовать. В данной задаче не проверяется эффективность этого алгоритма (в разумных пределах).
Подсказка: вам может потребоваться оператор % для вычисления остатка. Наиболее простая реализация этой функции 
сдвигает массив на один элемент за проход. Наиболее простая реализация несколько раз использует функцию, которая
 переставляет элементы массива в обратном порядке.*/
 
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

/*Очень часто для работы со строками нам нужно сначала вычислить длину строки. 
Для C-style строк длина нигде явно не хранится, но её можно вычислить. Напишите
 функцию, которая вычисляет длину C-style строки. Учтите, что завершающий нулевой символ считать не нужно. 
Требования к реализации: при выполнении этого задания вы можете создавать любые 
вспомогательные функции. Вводить или выводить что-либо не нужно. Реализовывать функцию main не нужно.*/

unsigned strlen(const char *str)
{
    unsigned cnt = 0;
    while(*(str + cnt) != 0) ++cnt;
 
    return cnt;
}

/*Вам требуется реализовать функцию конкатенации (склейки) двух C-style строк. Функция конкатенации принимает 
на вход две C-style строки и дописывает вторую в конец первой так, чтобы первая строка представляла из себя одну 
C-style строку равную конкатенации двух исходных.
Не забудьте, что в результирующей строке должен быть только один нулевой символ - тот, что является маркером конца строки.
Гарантируется, что в первой строке достаточно памяти (т.е. она располагается в массиве достаточной длины), чтобы 
разместить конкатенацию обеих строк, но не больше.
Требования к реализации: при выполнении задания вы можете определять любые вспомогательные функции, если они вам нужны.
 Выводить или вводить что-либо не нужно. Функцию main определять не нужно.

САМОЕ СТРАННОЕ РЕШЕНИЕ, КОТОРОЕ Я ПРИДУМЫВАЛ...НО ОНИ РАБОТАЕТ*/

void strcat(char *to, const char *from)
{
    for(;*to;++to);
    while(*to++=*from++);
}

/*Напишите функцию поиска первого вхождения шаблона в текст. В качестве первого параметра функция 
принимает текст (C-style строка), в которой нужно искать шаблон. В качестве второго параметра строку-шаблон 
(C-style строка), которую нужно найти. Функция возвращает позицию первого вхождения строки-шаблона, если он 
присутствует в строке (помните, что в C++ принято считать с 0), и -1, если шаблона в тексте нет. 
Учтите, что пустой шаблон (строка длины 0) можно найти в любом месте текста. 
Требования к реализации: при выполнении данного задания вы можете определять любые вспомогательные функции, 
если они вам нужны. Вводить или выводить что-либо не нужно. Реализовывать функцию main не нужно.*/

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

/*В этой задаче вам нужно реализовать функцию resize. Функция resize принимает 
на вход три аргумента: указатель на область памяти, выделенную с помощью оператора new[], 
размер области (size) и новый размер (new_size). Функция должна выделить память размера 
new_size, скопировать в нее данные из переданной области памяти, освободить старую область
 памяти и вернуть выделенную область памяти нового размера со скопированными данными.  
Обратите внимание, что память, возвращенная из функции, будет освобождена с помощью оператора 
delete[]. Несмотря на то, что входной тип данных - это const char *, не стоит рассчитывать, что 
там хранится C-style строка. При выполнении задания также учтите, что new_size может быть меньше size. 
Требования к реализации: при выполнении данного задания вы можете определять любые вспомогательные
 функции. Вводить или выводить что-либо не нужно. Определять функцию main не нужно.*/
 
 char *resize(const char *str, unsigned size, unsigned new_size)
{
    char * new_str = new char[new_size];
    for(int i = 0; i < size && i < new_size; ++i)
        new_str[i] = str[i];
    delete[] str;
 
    return new_str;
}

/*Свяжите следующие классы в иерархию наследования: Character (Персонаж), LongRange (Персонаж дальнего действия),
 Wizard (Маг), SwordsMan (Мечник), Archer (Лучник).
Обратите внимание на методы, объявленные в классах - они приведены в качестве описания интерфейса, которым должны 
обладать классы. Не изменяйте объявлений методов - они даны как подсказка, просто добавьте наследование в определения классов.*/

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

/*Вам дан класс Foo:
struct Foo {
    void say() const { std::cout << "Foo says: " << msg << "\n"; }
protected:
    Foo(const char *msg) : msg(msg) { }
private:
    const char *msg;
};
Как видно, создатель класса не хотел чтобы его использовали и "спрятал" конструктор класса. Но 
м очень нужен объект этого класса, чтобы передать его в функцию foo_says:
void foo_says(const Foo& foo) { foo.say(); }
В этом задании вам нужно реализовать функцию get_foo (сигнатура которой намерено не приводится 
в задании полностью, вам нужно подумать и вывести ее самостоятельно) так, чтобы следующий код компилировался и работал:
foo_says(get_foo(msg));
Где msg - произвольная C-style строка. 
Требования к реализации: при выполнении задания вам разрешено вводить любые вспомогательные функции и классы. 
Запрещено изменять определение класса Foo или функции foo_says. Вводить или выводить что-либо не нужно. Реализовывать функцию main не нужно.*/

/* Этот код просто напоминание как выглядит класс Foo и функция foo_says.
 * Не нужно его расскоментировать и/или менять.
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

// Вам нужно определить функцию get_foo, как описано в задании,
// чтобы компилировался и работал как ожидается следующий код:
//
// foo_says(get_foo("Hello!"));


Foo get_foo(const char *msg) {
    struct Foo1 : Foo {
        public:
        Foo1(const char *msg) : Foo(msg) { }
    };
    
    //Объявляем объект наследник, у которого в качестве аргумента msg и его возвращаем.
    Foo1 f = Foo1(msg);
    return f;
}

/*В этом задании вам предлагается разработать иерархию классов Expression для представления арифметических выражений. 
Конкретнее, вам нужно определить три класса: Expression - базовый класс иерархии, Number - для представления чисел и BinaryOperation -
 класс описывающий бинарную операцию (+, -, * или /).
Класс Number должен хранить значение типа double.
Класс BinaryOperation должен хранить указатель на левый и правый операнды, которые сами являются арифметическими выражениями,
 а также тип операции (+, -, * или /), которую нужно над ними произвести.
Во всех классах должен быть метод evaluate, который возвращает значение типа double - значение соответствующего арифметического
 выражения, например, значение экземпляра типа Number - это число, которое он хранит, а если у вас есть объект BinaryOperation с
  операцией +, то нужно вычислить значения левого и правого операнда и вернуть их сумму.
В данном задании вам нужно расставить ключевое слово virtual там, где это необходимо, определить метод evaluate там, где его не
 хватает, а также реализовать деструкторы, там где они нужны.
При выполнении этого задания учтите, что при уничтожении объекта BinaryOperation он отвечает за уничтожение левого и правого
 операндов (гарантируется, что они выделены в динамической памяти).
Например, выражению 3 + 4.5 * 5 будет соответствовать следующий код:
// сначала создаём объекты для подвыражения 4.5 * 5
Expression * sube = new BinaryOperation(new Number(4.5), '*', new Number(5));
// потом используем его в выражении для +
Expression * expr = new BinaryOperation(new Number(3), '+', sube);

// вычисляем и выводим результат: 25.5
std::cout << expr->evaluate() << std::endl;

// тут освобождаются *все* выделенные объекты
// (например, sube будет правым операндом expr, поэтому его удалять не нужно)
delete expr;


Требования к реализации: при выполнении этого задания не нужно вводить или выводить что-либо. Вы можете заводить любые
 вспомогательные функции, методы или классы, но не нужно реализовывать функцию main.*/
 
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

/*(Задание повышенной сложности) Предполагаемое решение этого задания не переносимо с точки
 зрения стандарта, однако оно проверено на различных версиях компиляторов g++/clang++/msvc. Решение 
 этого задания не обязательно для получения диплома по этому курсу, однако мы считаем его полезным, 
 чтобы лучше понять как устроены виртуальные функции внутри.
Вам требуется реализовать функцию, которая принимает на вход два указателя на базовый класс Expression,
 и возвращает true, если оба указателя указывают на самом деле на объекты одного и того же класса, и false 
 в противном случае (т.е. если оба указателя указывают на BinaryOperation, то возвращается true, а если 
 один из них указывает на Number, а второй на BinaryOperation, то false).
Требования к реализации: пользоваться typeid и dynamic_cast запрещено. Вызывать методы по переданным указателям запрещено.*/

bool check_equals(Expression const *left, Expression const *right)
{
    return (*((size_t*)left) == *((size_t*)right));
}

/*На прошлом степе вы познакомились с реализацией паттерна посетитель. Теперь пришло время воспользоваться этими знаниями.
 Ваш класс должен печатать (используя std::cout) текстовое представление арифметического выражения. Т.е. для объекта класса
  Number он должен напечатать число, которое в нем хранится, а для объекта класса BinaryOperation он должен напечатать левый 
  операнд, затем операцию, а затем правый операнд.
Учтите, что операции + и - имеют меньший приоритет, чем операции * и /, т. е. возможно вам придется печатать дополнительные 
круглые скобки, чтобы сохранить правильный порядок операций.
Классы иерархии Expression и абстрактный класс Visitor приведены в комментарии в шаблоне для удобства.
При проверке задания лишние пробелы или лишние скобки будут игнорироваться, т.е. вывод "1+2" эквивалентен 
выводу "( ( 1 )  +   ( 2 ) )", а вот вывод "1 + 2 * 3" не эквивалентен выводу "((1 + 2) * 3)". Вы можете попытаться минимизировать 
количество скобок в выводе, но это не требуется.
Перед выполнением задания внимательно прочитайте содержимое предыдущего степа.
Требования к реализации: при выполнении задания вы можете заводить любые вспомогательные классы или функции, но не нужно реализовывать
 функцию main или менять реализацию классов иерархии Expression.*/
 
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

/*Вам дан класс Rational, который описывает рациональное число. В нем определены методы
 add, sub, mul и div, которые прибавляют к нему число, отнимают число, умножают на число 
 и делят на число соответственно. Кроме того в нем определен метод neg, который меняет знак на противоположный. 
Вам нужно определить операторы +=, -=, *=, /= для класса Rational так, чтобы они могли принимать в 
качестве аргументов и объекты типа Rational и целые числа. Кроме того вам необходимо определить 
операторы унарного минуса и плюса для класса Rational.
Требования к реализации: ваш код не должен вводить или вводить что-либо, реализовывать функцию main не
 нужно. Кроме того, нельзя (это совершенно не нужно) использовать динамическую память или подключать какие-либо библиотеки.*/
 
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

/*Добавьте в класс Rational оператор приведения к double. Все операторы из предыдущих заданий отсутствуют и 
реализовывать их не нужно. Метод to_double можно использовать в этом задании. 
Важное замечание: добавлять оператор преобразования к double в класс Rational не самая удачная идея, например,
 потому, что при таком преобразовании может происходить потеря точности. Эта задача дана исключительно с целью 
 ознакомления с правильным порядком перегрузки таких операторов.
Требования к реализации: ваш код не должен вводить или вводить что-либо, реализовывать функцию main не нужно.*/

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

/*В этой задаче вам требуется реализовать оператор [] для уже известного вам класса String.
 Однако на этот раз оператор должен реализовывать нестандартное поведение: оператор нужно реализовать
  таким образом, чтобы для объекта str класса String можно было писать str[i][j] и это выражение возвращало 
  подстроку начинающуюся в позиции i (считая с 0) и заканчивающуюся в позиции j (не включая). 
Например:
String const hello("hello");
String const hell = hello[0][4]; // теперь в hell хранится подстрока "hell"
String const ell  = hello[1][4]; // теперь в ell хранится подстрока "ell"

Обратите внимание, что i может равняться j, в этом случае результатом должна быть пустая строка.
 Гарантируется, что i никогда не будет больше j, и они не будут выходить за пределы длины строки.
Требования к реализации: При выполнении задания вы можете создавать любые методы/конструкторы или 
даже структуры/классы, если они вам нужны. Реализовывать методы, которые уже объявленны в шаблоне,
 не нужно  они уже реализованы. При выполнении задания не вводите и не выводите что-либо. Реализовывать функцию main не нужно.*/
 
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

/*Задание повышенной сложности. 
Реализуйте класс SharedPtr как описано ранее. Задание немного сложнее, чем кажется на первый взгляд.
 Уделите особое внимание "граничным случаям" - нулевой указатель, присваивание самому себе, вызов reset на нулевом SharedPtr и прочее. 
Подсказка: возможно, вам понадобится завести вспомогательную структуру.
Требования к реализации: ваш код не должен вводить или вводить что-либо, реализовывать функцию main не нужно.

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

/*Реализуйте шаблонную версию класса Array. Список всех операций, которые должен поддерживать класс Array, приведен в шаблоне кода.*/
#include <cstddef>
#include <iostream>
using namespace std;
template <typename T>
class Array
{
    // Список операций:
    //
    // explicit Array(size_t size = 0, const T& value = T())
    //   конструктор класса, который создает
    //   Array размера size, заполненный значениями
    //   value типа T. Считайте что у типа T есть
    //   конструктор, который можно вызвать без
    //   без параметров, либо он ему не нужен.
    //
    // Array(const Array &)
    //   конструктор копирования, который создает
    //   копию параметра. Считайте, что для типа
    //   T определен оператор присваивания.
    //
    // ~Array()
    //   деструктор, если он вам необходим.
    //
    // Array& operator=(...)
    //   оператор присваивания.
    //
    // size_t size() const
    //   возвращает размер массива (количество
    //                              элементов).
    //
    // T& operator[](size_t)
    // const T& operator[](size_t) const
    //   две версии оператора доступа по индексу.

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

/*В предыдущей версии предполагается, что для типа T определен оператор присваивания 
или он ему не нужен (например, для примитивных типов он не нужен). При создании шаблонных
 классов контейнеров (вроде Array и не только) разумно стараться минимизировать требования
  к типам шаблонных параметров. Поэтому усложним задачу, реализуйте класс Array не полагаясь
   на то, что для типа T определен оператор присваивания. Hints: используйте placement new и
    явный вызов деструктора (смотрите урок 3.4), чтобы создавать и уничтожать объекты, аллоцировать
	 правильно выровненную память можно с помощью new char[N * sizeof(T)], где N - количество элементов массива.
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
    // Список операций:
    //
    // Array(size_t size, const T& value = T())
    //   конструктор класса, который создает
    //   Array размера size, заполненный значениями
    //   value типа T. Считайте что у типа T есть
    //   конструктор, который можно вызвать без
    //   без параметров, либо он ему не нужен.
    //
    // Array()
    //   конструктор класса, который можно вызвать
    //   без параметров. Должен создавать пустой
    //   Array.
    //
    // Array(const Array &)
    //   конструктор копирования, который создает
    //   копию параметра. Для типа T оператор
    //   присвивания не определен.
    //
    // ~Array()
    //   деструктор, если он вам необходим.
    //
    // Array& operator=(...)
    //   оператор присваивания.
    //
    // size_t size() const
    //   возвращает размер массива (количество
    //                              элемнтов).
    //
    // T& operator[](size_t)
    // const T& operator[](size_t) const
    //   две версии оператора доступа по индексу.

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
        //return data_[i]; равносильно:
        return *(data_ + i);
    }
    const T& operator[](size_t i) const {
        //return data_[i]; равносильно:
        return *(data_ + i);
    }
    ~Array() {
        mem_free();
    }

    void mem_free(){
        for (size_t i = 0; i != size_; ++i) {
            data_[i].~T();
        }
        // собака порылась здесь!!
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

/*Шаблонные классы можно наследовать. Реализуйте шаблонную структуру ValueHolder с 
одним типовым параметром T, унаследованную от интерфейса ICloneable. Интерфейс ICloneable
 содержит всего один виртуальный метод ICloneable* clone() const, который должен вернуть 
 указатель на копию объекта, на котором он был вызван (объект должен быть создан в куче). 
 Шаблон ValueHolder, как говорит его название, хранит всего одно значение (назовите его data_)
  типа T (для типа T определен конструктор копирования). Не делайте поле data_ закрытым
   (поэтому в данном случае мы явно пишем, что ValueHolder должна быть структурой).*/
   
struct ICloneable
{
	virtual ICloneable* clone() const = 0;
	virtual ~ICloneable() { }
};

// Шаблон ValueHolder с типовым параметром T,
// должен содержать одно открытое поле data_
// типа T.
//
// В шаблоне ValueHolder должен быть определен
// конструктор от одного параметра типа T,
// который инициализирует поле data_.
//
// Шаблон ValueHolder должен реализовывать
// интерфейс ICloneable, и возвращать указатель
// на копию объекта, созданную в куче, из метода
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

/*Реализуйте функцию копирования элементов copy_n из массива источника типа U* в целевой массив типа T*,
 где T и U произвольные типы, для которых определено преобразование из U в T. На вход функция принимает два
  указателя и количество элементов, которые необходимо скопировать.
Пример вызова функции copy_n:
int ints[] = {1, 2, 3, 4};
double doubles[4] = {};
copy_n(doubles, ints, 4); // теперь в массиве doubles содержатся элементы 1.0, 2.0, 3.0 и 4.0
Sample Input:
There are no tests for this task
Sample Output:
OK*/

#include <cstddef>

// Параметры функции copy_n идут в следующем
// порядке:
//   1. целевой массив
//   2. массив источник
//   3. количество элементов, которые нужно
//      скопировать
//
// Вам нужно реализовать только функцию copy_n,
// чтобы ее можно было вызвать так, как показано
// в примере.


template <typename T, typename U>
void copy_n(T * dest, U * source, size_t size){
    for (size_t i=0; i != size; ++i){
        dest[i] = (T) source[i];
    }
}

/*Реализуйте шаблонную функцию minimum, которая находит минимальный элемент, который хранится 
в экземпляре шаблонного класса Array, при этом типовой параметр шаблона Array может быть произвольным.
 Чтобы сравнивать объекты произвольного типа, на вход функции также будет передаваться компаратор,
  в качестве компаратора может выступать функция или объект класса с перегруженным оператором "()". Примеры вызова функции minimum:
bool less(int a, int b) { return a < b; }
struct Greater { bool operator()(int a, int b) const { return b < a; } };
Array<int> ints(3);
ints[0] = 10;
ints[1] = 2;
ints[2] = 15;
int min = minimum(ints, less); // в min должно попасть число 2
int max = minimum(ints, Greater()); // в max должно попасть число 15
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

/*В первом уроке вы реализовали простой шаблон ValueHolder, в этом задании мы используем его чтобы 
написать класс Any (интересно, что не шаблонный), который позволяет хранить значения любого типа! 
Например, вы сможете  создать массив объектов типа Any, и сохранять в них int-ы, double-ы или даже 
объекты Array. Подробности в шаблоне кода. 
Hint: в нешаблонном классе Any могут быть шаблонные методы, например, шаблонный конструктор.
Для реализации вам может потребоваться оператор dynamic_cast.
С++ предоставляет и более простой способ узнать конкретный класс по указателю (или ссылке) на базовый 
класс. Для этого можно использовать оператор dynamic_cast. Например, если у вас есть указатель Expression *,
 и вы хотите узнать, указывает ли этот указатель на самом деле на объект Number, то сделать это можно так:
Expression *expression = parse(code);
Number *number = dynamic_cast<Number *>(expression);
if (number)
    std::cout << "It's a number" << std::endl;
else
    std::cout << "It is not a number" << std::endl;
 
Если expression действительно указывает на объект Number (или на один из его наследников, но в нашем примере их нет),
 то оператор dynamic_cast<Number *> вернет правильный указатель. Если expression указывает не на класс Number, 
 то будет возвращен нулевой указатель. Т. е. если в переменной number хранится нулевой указатель, значит expression 
 не указывает на Number на самом деле.
Для правильной работы оператора dynamic_cast в нашем примере требуется, чтобы класс Expression был полиморфным,
 т. е. в нем должна быть как минимум одна виртуальная функция (например, деструктор). Стандарт определяет работу 
 dynamic_cast и с не полиморфными типами, но в этом случае никаких проверок типа времени исполнения выполняться 
 не будет - часто, это не то, что требуется.
Если передать оператору dynamic_cast нулевой указатель, то он просто вернет нулевой указатель нужного типа, поэтому 
проверять указатель перед передачей в dynamic_cast не нужно.
Sample Input:
There are no tests for this task
Sample Output:
OK*/

// Эти классы реализовывать заново не нужно
struct ICloneable;
 
// Поле data_ типа T в классе ValueHolder
// открыто, к нему можно обращаться
template <typename T>
struct ValueHolder;
 
class Any{
public:
    // В классе Any должен быть конструктор,
    // который можно вызвать без параметров,
    // чтобы работал следующий код:
    //    Any empty; // empty ничего не хранит
    Any():ptr(0) {} 
 
    // Не забудьте про деструктор. Все выделенные
    // ресурсы нужно освободить.
    ~Any() {
        delete ptr;     
    }
 
    // В классе Any также должен быть конструктор
    // копирования (вам поможет метод clone
    // интерфейса ICloneable)
    Any(const Any & other):ptr(other.ptr ? other.ptr->clone() : 0) {}
    
    // В классе Any должен быть шаблонный
    // конструктор от одного параметра, чтобы
    // можно было создавать объекты типа Any,
    // например, следующим образом:
    //    Any i(10); // i хранит значение 10
    template<typename T>Any(const T val):ptr(new ValueHolder<T>(val)) {}
    
 
    // В классе должен быть оператор присваивания и/или
    // шаблонный оператор присваивания, чтобы работал
    // следующий код:
    //    Any copy(i); // copy хранит 10, как и i
    //    empty = copy; // empty хранит 10, как и copy
    //    empty = 0; // а теперь empty хранит 0
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
    
 
    // Ну и наконец, мы хотим уметь получать хранимое
    // значение, для этого определите в классе Any
    // шаблонный метод cast, который возвращает
    // указатель на хранимое значение, или нулевой
    // указатель в случае несоответствия типов или
    // если объект Any ничего не хранит:
    //    int *iptr = i.cast<int>(); // *iptr == 10
    //    char *cptr = i.cast<char>(); // cptr == 0,
    //        // потому что i хранит int, а не char
    //    Any empty2;
    //    int *p = empty2.cast<int>(); // p == 0
    // При реализации используйте dynamic_cast,
    // который мы уже обсуждали ранее.
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

/*В качестве упражнения на частичную специализацию шаблонов классов вам предлагается реализовать
 простой шаблон SameType. Этот шаблон не содержит никаких методов, а только одно статическое константное 
 поле типа bool, с именем value. Шаблон принимает два типовых параметра, и если два типовых параметра 
 шаблона являются одним и тем же типом, то статическое поле value должно хранить значение true, в противном 
 случае значение false. Примеры:
struct Dummy { };
typedef int type;
std::cout << SameType<int, int>::value << std::endl; // выведет 1, т. е. true
std::cout << SameType<int, type>::value << std::endl; // 1, type == int
std::cout << SameType<int, int&>::value << std::endl; // 0, int и ссылка на int - различные типы
std::cout << SameType<Dummy, Dummy>::value << std::endl; // 1
std::cout << SameType<int, const int>::value << std::endl; // 0, const - часть типа
Hint: задание простое, решение занимает порядка десяти строк кода.
Sample Input:
There are no tests for this task
Sample Output:
OK*/
#include <iostream>
/*
* В качестве упражнения на частичную специализацию шаблонов классов
* вам предлагается реализовать простой шаблон SameType.
* Этот шаблон не содержит никаких методов,
* а только одно статическое константное поле типа bool, с именем value.
* Шаблон принимает два типовых параметра,
* и если два типовых параметра шаблона являются одним и тем же типом,
* то статическое поле value должно хранить значение true, в противном случае значение false.
*
* Примеры:
struct Dummy { };
typedef int type;
std::cout << SameType<int, int>::value << std::endl; // выведет 1, т. е. true
std::cout << SameType<int, type>::value << std::endl; // 1, type == int
std::cout << SameType<int, int&>::value << std::endl; // 0, int и ссылка на int - различные типы
std::cout << SameType<Dummy, Dummy>::value << std::endl; // 1
std::cout << SameType<int, const int>::value << std::endl; // 0, const - часть типа
Hint: задание простое, решение занимает порядка десяти строк кода.
*/


// Определите шаблон SameType с двумя типовыми
// параметрами. В шаблоне должна быть определена
// одна статическая константа типа bool с именем
// value

template <typename T, typename V>
struct SameType
{ static const bool value = false; };

template <typename W>
struct SameType<W, W>
{ static const bool value = true; };

/*Реализуйте функцию array_size, которая возвращает размер массива, переданного в качестве параметра.
 Функция должна работать только для массивов! Т. е. если функции передать указатель, должна произойти ошибка компиляции. Примеры:
int ints[] = {1, 2, 3, 4};
int *iptr = ints;
double doubles[] = {3.14};
array_size(ints); // вернет 4
array_size(doubles); // вернет 1
array_size(iptr); // тут должна произойти ошибка компиляции
Hint: в одной из первых недель мы вам показывали трюк с передачей массивов только заданного размера 
в функцию (передача массива по ссылке), совместите его с вашими знаниями о шаблонах.
Sample Input:
There are no tests for this task
Sample Output:
OK*/

/*
* В качестве параметров функций могут выступать не только ссылки на примитивные типы, но и ссылки, например, на массивы. Выглядеть ссылка на массив из трех значений типа int в параметре функции будет следующим образом:
* void foo(int (&a)[3]) {  ...  }
Обратите внимание, что скобки вокруг параметра a в данной конструкции обязательны - мы хотим передать ссылку на массив, а не массив ссылок.
Кажется, что такая конструкция не имеет особого смысла, ведь массивы при передаче в функцию не копируются.
Однако, такая конструкция запрещает компилятору игнорировать размер массива.
Например, следующий код не будет компилироваться:
int a[1] = {};
foo(a);
Компилятор g++ на это выдаст следующую ошибку:
        error: invalid initialization of reference of type 'int (&)[3]' from expression of type 'int [1]'
Т. е. компилятор не может получить из массива из одного элемента ссылку на массив из трех элементов, что и ожидалось.
//////////////////////////
*
* Реализуйте функцию array_size, которая возвращает размер массива,
* переданного в качестве параметра.
* Функция должна работать только для массивов!
* Т. е. если функции передать указатель, должна произойти ошибка компиляции.
*
* Примеры:
int ints[] = {1, 2, 3, 4};
int *iptr = ints;
double doubles[] = {3.14};
array_size(ints); // вернет 4
array_size(doubles); // вернет 1
array_size(iptr); // тут должна произойти ошибка компиляции
Hint: в одной из первых недель мы вам показывали трюк с передачей массивов только заданного размера в функцию
(передача массива по ссылке),
совместите его с вашими знаниями о шаблонах.
* */

#include <cstddef> // size_t

// реализуйте шаблонную функцию array_size,
// которая возвращает значение типа size_t.

template <typename A, size_t size>
size_t array_size(A (&array)[size]) {
    return size;
}















































