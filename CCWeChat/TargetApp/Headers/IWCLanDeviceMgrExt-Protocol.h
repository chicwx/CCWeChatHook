//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, WCLanDeviceInfo;

@protocol IWCLanDeviceMgrExt <NSObject>

@optional
- (void)onWCLanDeviceReceiveNotify:(NSString *)arg1 DeviceId:(NSString *)arg2 Dictionary:(NSDictionary *)arg3;
- (void)onWCLanDeviceConnectStateNotify:(NSString *)arg1 DeviceId:(NSString *)arg2 StateCode:(int)arg3;
- (void)onSendFileToWCLanDevice:(long long)arg1 Progress:(float)arg2 isFinish:(_Bool)arg3 ErrCode:(int)arg4;
- (void)onSendDataToWCLanDevice:(long long)arg1 ErrCode:(int)arg2;
- (void)onTaskPerformed:(long long)arg1 ErrCode:(int)arg2;
- (void)onReceiveWCLanDeviceProfile:(WCLanDeviceInfo *)arg1;
- (void)onReceiveWCLanDeviceDisc:(WCLanDeviceInfo *)arg1;
@end

