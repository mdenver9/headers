#pragma once

#include "../bedrock/network/packet/observer/NetworkStatistics"


class NetworkDebugManager {

public:
    static long UPDATE_INTERVAL_MILLISECONDS;
    static long MAX_NUMBER_OF_SAMPLES;
    static long mNetworkDebugManager;


    void initialize(void);
    void registerStatisticsSource(NetworkStatistics &);
    void unregisterStatisticsSource(NetworkStatistics &);
    void getNetworkStatistics(TrackerType);
    void trackSend(TrackerType, std::string const&, unsigned long);
    void trackReceive(TrackerType, std::string const&, unsigned long);
    void send(TrackerType, std::string const&, unsigned long);
    void receive(TrackerType, std::string const&, unsigned long);
    void update(void);
    void getStats(TrackerType)const;
    void getGraphBars(TrackerType)const;
    void _getGraphBars(std::string const&, int, std::vector<TrackerStat, std::allocator<TrackerStat>> const&)const;
    void getMode(void)const;
    void nextGraph(void);
    bool previousGraph(void);
    void resetData(void);
};
