// ChattingServer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include "Listener.h"
#include "IOCP.h"
#include "pch.h"
#include "SockHelper.h"
#include "CClientSession.h"
#include "CClientPacketHandler.h"
#include "Service.h"
#include "ThreadManager.h"


shared_ptr<CClientSession> MakeSharedListener()
{
    return make_shared<CClientSession>();
}


int main()
{
    SockHelper::init();
    CClientPacketHandler::Init();

    shared_ptr<ServerService> pService = MakeShared<ServerService>(NetAddress(L"127.0.0.1", 7777),
        make_shared<IOCP>(), MakeSharedListener,5);

    pService->Start();
    
    for (int i = 0; i < 5; ++i)
    {
        ThreadMgr->Excute(
            [=]()
            {
                while (true)
                {
                    pService->GetIOCP()->Excute();
                }
            }
        );
    }

    ThreadMgr->Join();
}

