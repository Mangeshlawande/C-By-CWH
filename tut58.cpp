//Abstract  Base Classes and PURE virtual FUNCTION 
#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0;// do-nothing function => Pure Virtual function 
    // {
    //     cout << "Bogus code " << endl;
    // }
};
class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << " This is an amazing video with title: " << title << endl;
        cout << "Ratings : " << rating << " Out of 5 Stars !!" << endl;
        cout << " The length of this Video is : " << videoLength << " Minutes.\n " << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "\n This is an amazing Text tutorial with title: " << title << endl;
        cout << "Ratings of this text tutorial : " << rating << " Out of 5 Stars !!" << endl;
        cout << " The number of words in this tutorial is  : " << words << " words.\n " << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;
    // code for CWH Video
    title = "Django Tutorial";
    vlen = 14.56;
    rating = 4.69;
    CWHVideo djVideo(title, rating, vlen);
    //   djVideo.display();

    // code for CWH Text
    title = "Django Tutorial Text";
    words = 1456;
    rating = 3.9;
    CWHText djText(title, rating, words);
    //   djText.display();

    // call by pointers
    CWH *tut[2];
    tut[0] = &djVideo;
    tut[1] = &djText;

    tut[0]->display();
    tut[1]->display();

    return 0;
}
/*
Rules for virtual function :
1. It cannot be static ;
2. They can be accessed by object pointers; 
3. Virtual function can be a friend of another class ;
4. Virtual function in base class might not be used ;
5. A virtual function defined in the base class there is no necessity of redefining it in the 
derived class;

*/