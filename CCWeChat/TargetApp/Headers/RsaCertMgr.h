//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableDictionary, NSRecursiveLock, NSString, RsaCertInfo;

@interface RsaCertMgr : MMService <MMService, PBMessageObserverDelegate>
{
    NSRecursiveLock *m_oLock;
    RsaCertInfo *m_oRsaCertInfo;
    NSMutableDictionary *m_dicRsaCGIWrap;
    unsigned int m_uiMaxEventID;
    _Bool m_bGettingCert;
}

+ (id)getExtKeyFromEventID:(unsigned int)arg1;
+ (id)GetInfoStringMd5For:(id)arg1;
+ (id)GetPathOfRsaCertInfoVerify;
+ (id)GetPathOfRsaCertInfo;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleGetCertOK:(id)arg1;
- (void)HandleGetCertFail;
- (unsigned int)addRSAProtobufEvent:(id)arg1 Flag:(unsigned int)arg2;
- (void)removeRSAProtobufEvent:(unsigned int)arg1;
- (void)safeRemoveRsaCGIWrapForKey:(id)arg1;
- (void)safeAddRsaCGIWrap:(id)arg1 forKey:(id)arg2;
- (_Bool)CreateGetCert;
- (void)HandleGetCert;
- (id)GetMutableRsaCertInfo;
- (id)GetKVCommCertInfo;
- (id)GetAuthCertInfo;
- (id)GetBaseRsaCertInfo;
- (id)GetRsaCertInfoForCGI:(unsigned int)arg1;
- (void)SaveRsaCertInfo;
- (void)SaveRsaCertInfoVerify;
- (void)LoadRsaCertInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

