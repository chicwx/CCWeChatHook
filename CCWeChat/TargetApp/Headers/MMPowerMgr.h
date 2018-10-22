//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface MMPowerMgr : NSObject
{
    _Bool m_bLowPowerMode;
    NSMutableArray *m_minuteCPUUsageArray;
    double m_foregroundTime;
    double m_backgroundTime;
}

+ (long long)getVirtualMemory;
+ (long long)getResidentMemory;
+ (float)getCurrentCpuUsage;
+ (void)printCurrentAllThreadCPU;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)isLowPowerMode;
- (void)processPowerModeChange;
- (void)p_setPowerMode;
- (void)costCPUALot;
- (void)markTestCPU:(_Bool)arg1;
- (_Bool)isBackgroundCPUTooSmall;
- (double)getBackgroundTime;
- (double)getForegroundTime;
- (void)processEnterBackground;
- (void)processEnterForeground;
- (void)dealloc;
- (id)init;

@end

