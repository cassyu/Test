#pragma once

#include <iostream>
#include <list>

using namespace std;
class Subject;

class Observer
{
public :
    virtual void Update( int ) = 0;
};

class ConcreteObserver : public Observer
{
public :
    ConcreteObserver( )
    {
    }

    void Update( int value )
    {
        cout << "ConcreteObserver get the update. New State:" << value << endl;
    }
private:
    Subject *    m_pSubject;
};

class ConcreteObserver2 :public Observer
{
public:
    ConcreteObserver2( )
    {

    }

    void Update( int value )
    {
        cout << "ConcreteObserver2 get the update. New State:" << value << endl;
    }
private :
    Subject *    m_pSubject;
};