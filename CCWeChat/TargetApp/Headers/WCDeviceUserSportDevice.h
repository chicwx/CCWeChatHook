//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCDeviceUserSportDevice : MMObject
{
    _Bool m_isHealThkitOrApp;
    unsigned int m_stepCount;
    NSString *m_deviceId;
    NSString *m_deviceType;
    NSString *m_bundleId;
    NSString *m_appName;
    NSString *m_deviceName;
    NSString *m_iconUrl;
    NSString *m_connProto;
    long long m_bleSimpleProtol;
    long long m_DID;
}

@property(nonatomic) unsigned int m_stepCount; // @synthesize m_stepCount;
@property(nonatomic) long long m_DID; // @synthesize m_DID;
@property(nonatomic) long long m_bleSimpleProtol; // @synthesize m_bleSimpleProtol;
@property(retain, nonatomic) NSString *m_connProto; // @synthesize m_connProto;
@property(retain, nonatomic) NSString *m_iconUrl; // @synthesize m_iconUrl;
@property(retain, nonatomic) NSString *m_deviceName; // @synthesize m_deviceName;
@property(retain, nonatomic) NSString *m_appName; // @synthesize m_appName;
@property(retain, nonatomic) NSString *m_bundleId; // @synthesize m_bundleId;
@property(retain, nonatomic) NSString *m_deviceType; // @synthesize m_deviceType;
@property(retain, nonatomic) NSString *m_deviceId; // @synthesize m_deviceId;
@property(nonatomic) _Bool m_isHealThkitOrApp; // @synthesize m_isHealThkitOrApp;
- (void).cxx_destruct;
- (_Bool)isSimpleProfileDevcie;
- (_Bool)isBLEDevice;
- (_Bool)isM7Device;
- (void)dealloc;

@end

