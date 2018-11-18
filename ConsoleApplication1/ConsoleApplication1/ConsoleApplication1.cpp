// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Observer.h"
#include "Subject.h"

int main()
{
    ConcreteSubject* pSubject = new ConcreteSubject();

    //
    Observer *pObserver = new ConcreteObserver();
    Observer *pObserver2 = new ConcreteObserver2();

    pSubject->SetState( 2 );

    pSubject->Attach( pObserver );
    pSubject->Attach( pObserver2 );

    pSubject->Notify();

    pSubject->Detach( pObserver );

    pSubject->SetState( 3 );
    pSubject->Notify();

    delete pObserver;
    delete pObserver2;
    delete pSubject;
    system( "pause" );
    return 0;
}

