#pragma once

class BatchedNetworkPeer : NetworkPeer {

public:
    virtual ~BatchedNetworkPeer();
    virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void receivePacket(std::string &);
    virtual void getNetworkStatus(void);
    virtual void update(void);
    virtual void flush(std::function<void ()(void)> &&);

    void BatchedNetworkPeer(std::shared_ptr<NetworkPeer>, Scheduler &);
    void setAsyncEnabled(bool);
    void getCompressibleState(unsigned long)const;
    void _startSendTask(void);
};
