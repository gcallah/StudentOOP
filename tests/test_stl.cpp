/*
 * Let's use the *Standard Template Library*!
 * First, we will include the headers we need:
 * */
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

/*
 * print_vec to print vectors
 * */

/*
 * Let's make a template for a `print_list` that can handle
 * lists of any type:
 * Templates are the C++ feature that enable generic programming.
 * */

/*
 * But, we can go even more generic, and make a `print` that can print
 * *containers* of any sequential type:
 * */


/*
 * A Cat class just so we can show these work on our types:
 * */
class Cat {
    friend ostream& operator<<(ostream& os, const Cat& cat) {
        os << "meow ";
        return os;
    }
};

/*
 * We could pass this `is_odd()` function in to a `find_if()`,
 * or pass a *lambda* instead.
 * */
bool is_odd(int n) { return (n % 2) == 1; }

/*
 * Or, we could have a *functor*!
 * */
class IsOdd {
    public:
        bool operator()(int n) {
            IsOdd::times_called++;
            return (n % 2) == 1;
        }
    private:
        static int times_called;
};

/*
 * Our main will exercise some STL capabilities.
 * */
int main() {
    int bjarnelen = 17;
    int dennislen = 14;

    char s[]  = "Bjarne Stroustrup";
    char s2[] = "Dennis Ritchie";

    cout << "C++ creator: " << s << "\n";
    cout << "C creator, 4th letter: " << s2[3] << "\n";

    /*
     * Let's do some things with a `vector`.
     * We will create it with a half-open range, and then sort it.
     * */
    vector<char> cvec(s2, s2 + dennislen);
//    print_vec("cvec", cvec);
    sort(cvec.begin(), cvec.end());
//    print_vec("sorted cvec", cvec);

    /*
     * Create a `char` list:
     * */
    list<char> clist(s, s + bjarnelen);
    list<char> clist2 = clist;
    list<char> clist3(s2, s2 + dennislen);
    /*
     * The STL provides us with a `reverse()` functions that
     * reverses an iterable structure:
     * */
    reverse(clist.begin(), clist.end());
//    print_list("clist reversed", clist);
//    print_list("clist2 not reversed", clist2);

    /*
     * But even after `clist` is reversed, `clist` and
     * `clist2` are still permutations of each other:
     * */
    list<char> clist4 = clist;
    cout << "Is clist a permutation of clist2? "
        << is_permutation(clist.begin(), clist.end(), clist2.begin())
        << endl; ;
    cout << "Is clist4 a permutation of clist3? "
        << is_permutation(clist4.begin(), clist4.end(), clist3.begin())
        << endl; ;

    /*
     * Testing a list of Cats:
     * */
    Cat catptr[] = { Cat(), Cat(), Cat() };
    list<Cat> catlist(catptr, catptr + 3);
//    print_list("Cat list", catlist);

    /*
     * Testing an int list:
     * */
    int ilen = 8;
    int iptr[] = { 16, 32, 64, 128, 1, 44, 8, 17 };
    list<int> ilist(iptr, iptr + ilen);
    /*
     * Our print can work for lists as well as vectors:
     * */
//    print("print: ilist", ilist);
//    print("print: sorted cvec", cvec);
    /*
     * `sort()` does not work for lists, since they aren't random access.
     * Thus lists have their own `sort()` method, called below:
     * This *won't* work: `sort(ilist.begin(), ilist.end());`
     * */
    // ilist.sort();
//    print("ilist sorted", ilist);

    /*
     * Let's experiment with *iterators* a bit!
     * */

    /*
     * Here we are going to pass `is_odd()` to `find_if()`.
     * */
    cout << "ilist begin is: " << *(ilist.begin()) << endl;
    cout << "ilist end is: " << *(ilist.end()) << endl;

    list<int>::iterator odd_iter = find_if(ilist.begin(),
            ilist.end(), is_odd);
    cout << "First odd number in ilist is: " << *odd_iter << endl;
    odd_iter++;
    cout << "The next number in ilist is: " << *odd_iter << endl;

    /*
     * Here we are going to pass functor `IsOdd` to `find_if()`.
     * */
    IsOdd odd_functor = IsOdd();
    cout << "Is 6 odd? " << odd_functor(6) << endl;
    cout << "Is 7 odd? " << odd_functor(7) << endl;
    list<int>::iterator odd_iter2 = find_if(ilist.begin(),
            ilist.end(), odd_functor);
    cout << "First odd number in ilist is: " << *odd_iter2 << endl;
    odd_iter2++;
    cout << "The next number in ilist is: " << *odd_iter2 << endl;

    /*
     * Here we are going to pass a *lambda* to `find_if()`.
     * The lambda starts with `[]`. The point here is to show
     * that this form and the one above are identical in effect.
     * */
    list<int>::iterator odd_iter3 = find_if(ilist.begin(),
            ilist.end(), [](int n) { return (n % 2) == 1; });
    cout << "First lambda odd number in ilist is: " << *odd_iter3 << endl;
    odd_iter3++;
    cout << "The next lambda number in ilist is: " << *odd_iter3 << endl;
}
