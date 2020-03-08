#pragma once



using namespace RakNet;

class ReliabilityLayer {

public:

    ReliabilityLayer(void);
    void InitializeVariables(void);
    void FreeMemory(bool);
    void Reset(bool, int, bool);
    void SetTimeoutTime(unsigned int);
    void GetTimeoutTime(void);
    void InitHeapWeights(void);
    void FreeThreadSafeMemory(void);
    void ClearPacketsAndDatagrams(void);
    void FreeInternalPacketData(RakNet::InternalPacket *, char const*, unsigned int);
    void ReleaseToInternalPacketPool(RakNet::InternalPacket *);
    void RemoveFromDatagramHistory(RakNet::uint24_t);
    void HandleSocketReceiveFromConnectedPlayer(char const*, unsigned int, RakNet::SystemAddress &, DataStructures::List<RakNet::PluginInterface2 *> &, int, RakNet::RakNetSocket2 *, RakNet::RakNetRandom *, unsigned long, RakNet::BitStream &);
    void AllocateFromInternalPacketPool(void);
    void AllocInternalPacketData(RakNet::InternalPacket *, unsigned int, bool, char const*, unsigned int);
    void GetMessageNumberNodeByDatagramIndex(RakNet::uint24_t, unsigned long *);
    void RemovePacketFromResendListAndDeleteOlderReliableSequenced(RakNet::uint24_t, unsigned long, DataStructures::List<RakNet::PluginInterface2 *> &, RakNet::SystemAddress const&);
    void SendAcknowledgementPacket(RakNet::uint24_t, unsigned long);
    void CreateInternalPacketFromBitStream(RakNet::BitStream *, unsigned long);
    void InsertIntoSplitPacketList(RakNet::InternalPacket *, unsigned long);
    void BuildPacketFromSplitPacketList(unsigned short, unsigned long, RakNet::RakNetSocket2 *, RakNet::SystemAddress &, RakNet::RakNetRandom *, RakNet::BitStream &);
    void IsOlderOrderedPacket(RakNet::uint24_t, RakNet::uint24_t);
    void Receive(unsigned char **);
    void Send(char *, unsigned int, PacketPriority, PacketReliability, unsigned char, bool, int, unsigned long, unsigned int);
    void AllocInternalPacketData(RakNet::InternalPacket *, unsigned char *);
    void GetMaxDatagramSizeExcludingMessageHeaderBytes(void);
    void GetMaxMessageHeaderLengthBits(void);
    void SplitPacket(RakNet::InternalPacket *);
    void AddToUnreliableLinkedList(RakNet::InternalPacket *);
    void GetNextWeight(int);
    void Update(RakNet::RakNetSocket2 *, RakNet::SystemAddress &, int, unsigned long, unsigned int, DataStructures::List<RakNet::PluginInterface2 *> &, RakNet::RakNetRandom *, RakNet::BitStream &);
    void RemoveFromUnreliableLinkedList(RakNet::InternalPacket *);
    void AckTimeout(unsigned long);
    void SendACKs(RakNet::RakNetSocket2 *, RakNet::SystemAddress &, unsigned long, RakNet::RakNetRandom *, RakNet::BitStream &);
    void GetMaxDatagramSizeExcludingMessageHeaderBits(void);
    void SendBitStream(RakNet::RakNetSocket2 *, RakNet::SystemAddress &, RakNet::BitStream *, RakNet::RakNetRandom *, unsigned long);
    void IsResendQueueEmpty(void)const;
    void ResetPacketsAndDatagrams(void);
    void PushDatagram(void);
    void PopListHead(bool);
    void PushPacket(unsigned long, RakNet::InternalPacket *, bool);
    void InsertPacketIntoResendList(RakNet::InternalPacket *, unsigned long, bool, bool);
    void ResendBufferOverflow(void)const;
    void GetMessageHeaderLengthBits(RakNet::InternalPacket const*);
    void AddFirstToDatagramHistory(RakNet::uint24_t, RakNet::uint24_t, unsigned long);
    void AddSubsequentToDatagramHistory(RakNet::ReliabilityLayer::MessageNumberNode *, RakNet::uint24_t);
    void WriteToBitStreamFromInternalPacket(RakNet::BitStream *, RakNet::InternalPacket const*, unsigned long);
    void AddFirstToDatagramHistory(RakNet::uint24_t, unsigned long);
    void IsOutgoingDataWaiting(void);
    void AreAcksWaiting(void);
    void ApplyNetworkSimulator(double, unsigned int, unsigned int);
    void SetSplitMessageProgressInterval(int);
    void SetUnreliableTimeout(unsigned int);
    void IsSendThrottled(int);
    void UpdateWindowFromPacketloss(unsigned long);
    void UpdateWindowFromAck(unsigned long);
    void RemoveFromList(RakNet::InternalPacket *, bool);
    void GetSHA1(unsigned char *, unsigned int, char *);
    void CheckSHA1(char *, unsigned char *, unsigned int);
    void AllocInternalPacketData(RakNet::InternalPacket *, RakNet::InternalPacketRefCountedData **, unsigned char *, unsigned char *);
    void BuildPacketFromSplitPacketList(RakNet::SplitPacketChannel *, unsigned long);
    void CreateInternalPacketCopy(RakNet::InternalPacket *, int, int, unsigned long);
    void AddToListTail(RakNet::InternalPacket *, bool);
    void IsDeadConnection(void)const;
    void KillConnection(void);
    void GetStatistics(RakNet::RakNetStatistics *);
    void GetResendListDataSize(void)const;
    void GetNextSendTime(void)const;
    void GetTimeBetweenPackets(void)const;
    void TagMostRecentPushAsSecondOfPacketPair(void);
    void MoveToListHead(RakNet::InternalPacket *);
    void ValidateResendList(void)const;
};
