#pragma once
#include <list>

class Observer;

class Subject
{
public :
    virtual void Attach( Observer* ) = 0;
    virtual void Detach( Observer* ) = 0;
    virtual void Notify() = 0;
};

class ConcreteSubject :public Subject
{
public :
    void Attach( Observer* pObserver );
    void Detach( Observer* pObserver );
    void Notify();

    void SetState( int state );

private :
    std::list<Observer* >  m_ObserverList;
    int                    m_iState;
};