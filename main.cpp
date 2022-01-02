#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class a{
    public:
        string a;
};
class m{
    public:
        string m;
};
class o{
    public:
        string o;
};
class g{
    public:
        string g;
};
class u{
    public:
        string u;
};
class s{
    public:
        string s;
};
int main(){
    a a;
    m m;
    o o;
    g g;
    u u;
    s s;
    a.a = "a";
    m.m = "m";
    o.o = "o";
    g.g = "g";
    u.u = "u";
    s.s = "s";
    
    if (a.a, "a"){
        a.a = "a";
    }
    else if(m.m, "m"){
        m.m = "m";
    }
    else if(o.o, "o"){
        o.o = "o";
    }
    else if(g.g, "g"){
        g.g = "g";
    }
    else if(u.u, "u"){
        u.u = "u";
    }
    else if(s.s, "s"){
    s.s = "s";
    } 

    cout << a.a << m.m << o.o << g.g << u.u << s.s << endl;
    return 0;
}
