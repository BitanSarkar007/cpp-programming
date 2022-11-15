// Consider an abstract class Icon that has a member function Icon* clone() which copies the curent 
// object and returns it. Suppose you have several sub-classes of Icon, e.g., MenuIcon, SearchIcon,
// OpenIcon, CloseIcon. You have another class IconStore that contains a list of icons. For expample,
// the element 0 of the lists is a menu icon, element 1 is a search icon, etc. Now suppose you have 
// a client that requests an icon from the IconStore by specifying an icon number. IconStore should 
// clone the appropriate icon (making a call like iconList[i]->clone() where i is the input icon 
// number) and returnt it to the client. Impelment the appropriate classes in C++.

#include <bits/stdc++.h>
using namespace std;

class Icon
{
public:
    virtual Icon* clone() = 0;
};

class MenuIcon : public Icon
{
public:
    Icon* clone()
    {
        return new MenuIcon(*this);
    }
};

class SearchIcon : public Icon
{
public:
    Icon* clone()
    {
        return new SearchIcon(*this);
    }
};

class OpenIcon : public Icon
{
public:
    Icon* clone()
    {
        return new OpenIcon(*this);
    }
};

class CloseIcon : public Icon
{
public:
    Icon* clone()
    {
        return new CloseIcon(*this);
    }
};

class IconStore
{
    vector<Icon*> iconList;
public:
    IconStore()
    {
        iconList.push_back(new MenuIcon());
        iconList.push_back(new SearchIcon());
        iconList.push_back(new OpenIcon());
        iconList.push_back(new CloseIcon());
    }
    Icon* getIcon(int i)
    {
        return iconList[i]->clone();
    }
};

int main()
{
    IconStore iconStore;
    Icon* icon = iconStore.getIcon(0);
    return 0;
}

