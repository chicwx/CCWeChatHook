//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface WXGLACCommon : NSObject
{
    unsigned long long m_heartBeatInterval;
    unsigned long long m_slowCutInterval;
    unsigned long long m_slowGapSpeed;
    NSArray *m_resendIntervalArray;
    double m_testSpeedDiff;
    _Bool m_detectReach;
    _Bool m_testSpeedOpen;
}

+ (_Bool)isTestSpeedPacket:(id)arg1;
+ (unsigned int)getTestPacketLength;
+ (id)getTestSpeedPacket;
+ (unsigned int)getTestCount;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)testSpeedOpen;
- (id)getResendTimeIntervalArray;
- (double)getTestSpeedDiff;
- (_Bool)getClientDetectReach;
- (unsigned long long)getSlowGapSpeed;
- (unsigned long long)getSlowCutInterval;
- (unsigned long long)getHeartBeatInterval;
- (void)checkABTest;
- (id)init;

@end

