#include <iostream>

class SocketInterface
{
    public:
        SocketInterface() {}
        ~SocketInterface() {}
        virtual void americanSocket() = 0;
};

class Socket : public SocketInterface
{
    public:
        Socket() {}
        ~Socket() {}
        void    americanSocket()
        {
            std::cout << "This is a socket of american type\n";
        }
};

class AdapterInterface
{
    public:
        AdapterInterface() {}
        ~AdapterInterface() {}
        virtual void europeanSocket() = 0;
};

class Adapter : public AdapterInterface
{
    public:
        Adapter(SocketInterface* obj)
        {
            mSocketPointer = obj;
        }
        ~Adapter() {}
        void europeanSocket()
        {
            mSocketPointer->americanSocket();
        }
    private:
        SocketInterface* mSocketPointer;
};

int main()
{
    Socket* socketPtr = new Socket();
    AdapterInterface* adapter = new Adapter(socketPtr);
    adapter->europeanSocket();

    return 0;
}
