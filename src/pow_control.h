#ifndef POW_CONTROL_H
#define POW_CONTROL_H

extern bool fTestNet;

static const int P1_End = 20000;
static const int P2_Start = 996500;
static const int P2_End = 10000000; // 0 coin reward PoW mining enabled for about 10 years. Incase of PoS diff drop
static const int P1_End_TestNet = 115;
static const int P2_Start_TestNet = 125;
static const int P2_End_TestNet = 155;

static const int64_t fReward_Height1 = 1;
static const int64_t fReward_Height2 = 996505;

static const int64_t fReward_TestNet_Height1 = 1;
static const int64_t fReward_TestNet_Height2 = 130;


#endif // POW_CONTROL_H
