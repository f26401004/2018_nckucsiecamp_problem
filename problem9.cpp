#include <bits/stdc++.h>
#define MAX_SIZE int(1e2+5)
using namespace std;

struct Book{
    int year;
    string name;
    string author;
}book[MAX_SIZE];

bool cmp(struct Book a, struct Book b) {
    if (a.name == b.name && a.year == b.year) return a.author<b.author;
    if (a.name == b.name) return a.year<b.year;
    return a.name<b.name;
}

int main() {
    int n, cnt = -1;
    cin>>n;

    getchar();
    string s;
    while(n-(++cnt)) {
        string year;
        getline(cin, s);
        stringstream ss(s);

        getline(ss, book[cnt].name, ',');
        getline(ss, book[cnt].author, ',');
        getline(ss, year, ',');
        book[cnt].year = atoi(year.c_str());
    }
    sort(book, book+n, cmp);

    for (int i=0; i<n; ++i) {
        cout<<book[i].name<<","<<book[i].author<<","<<book[i].year<<endl;
    }

    return 0;
}
