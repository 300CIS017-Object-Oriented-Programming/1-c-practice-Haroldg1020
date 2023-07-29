//Tarea1//
//Harold David Guerrero Caicedo//
//Primer punto "Hello, World!" 

#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    printf("Hello, World!");
    return 0;
}

//Segundo Punto Conditional Statements

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main(){
    string n_temp;
    getline(cin, n_temp);
    int n = stoi(ltrim(rtrim(n_temp)));
    if (n > 9) printf("Greater than 9");
    if (n >= 1 && n <= 9){
        if (n == 1){
            printf("one");
        }
        else if (n == 2){
            printf("two");
        }
        else if (n == 3){
            printf("three");
        }
        else if (n == 4){
            printf("four");
        }
        else if (n == 5){
            printf("five");
        }
        else if (n == 6){
            printf("six");
        }
        else if (n == 7){
            printf("seven");
        }
        else if (n == 8){
            printf("eight");
        }
        else if (n == 9){
            printf("nine");
        }
    }
    return 0;
}

string ltrim(const string &str){
    string s(str);
    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str){
    string s(str);
    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

//Tercer punto Intput and Output

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    int a;
    int b;
    int c;
    int sum;
    cin >> a >> b >> c;
    sum = a + b + c;
    printf("%d", sum);
    return 0;
}

//Cuarto punto For Loop

#include <iostream>
#include <vector>
using namespace std;

string representacion(int num){
    string ansL;
    static const vector<string> numeros = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (num >= 1 && num <= 9){
        ansL = numeros[num];
    }
    else if (num % 2 == 0){
        ansL = "even";
    }
    else{
        ansL = "odd";
    }
    return ansL;
}

int main(){
    int inicio, end;
    cin >> inicio >> end;
    for(int num = inicio; num <= end; num++){
        cout << representacion(num) << endl;
    }
    return 0;
}

//Quinto punto Functions

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int ans;
    if (a > b && a > c && a > d){
        ans = a;
    }
    else if (b > a && b > c && b > d){
        ans = b;
    }
    else if (c > a && c > b && c > d){
        ans = c;
    }
    else if (d > a && d > b && d > c){
        ans = d;
    }
    return ans;
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}

// Sexto punto arrays introduction

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}

// Septimo punto Strings

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    string b;
    string sum;
    cin >> a;
    cin >> b;
    sum = a + b;
    swap(a[0], b[0]);
    cout << a.size() << " " << b.size() << endl;
    cout << sum << endl;
    cout << a << " " << b;

    return 0;
}

// Octavo punto Classes


#include <iostream>
#include <sstream>
using namespace std;

class Student{
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    void set_age(int age){
        this->age = age;
    }
    int get_age() const{
        return age;
    }
    void set_first_name(const string &first_name){
        this->first_name = first_name;
    }
    string get_first_name() const{
        return first_name;
    }
    void set_last_name(const string &last_name){
        this->last_name = last_name;
    }
    string get_last_name() const{
        return last_name;
    }
    void set_standard(int standard){
        this->standard = standard;
    }

    int get_standard() const{
        return standard;
    }
    string to_string() const{
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

int main(){
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}

// Noveno punto Classes and Objects

/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
// Write your Student class here
class Student
{
private:
    int scores[5];

public:
    void input()
    {
        for (int i = 0; i < 5; i++)
            cin >> scores[i];
    }
    int calculateTotalScore()
    {
        int ret = 0;
        for (int i = 0; i < 5; i++)
        {
            ret += scores[i];
        }
        return ret;
    }
};
// Write your Student class here

int main(){
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score)
        {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}

*/
