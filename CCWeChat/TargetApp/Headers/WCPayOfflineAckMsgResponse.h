//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayOfflineAckMsgResponse : NSObject
{
    long long _retCode;
    NSString *_retMsg;
    long long _pollTime;
}

@property(nonatomic) long long pollTime; // @synthesize pollTime=_pollTime;
@property(retain, nonatomic) NSString *retMsg; // @synthesize retMsg=_retMsg;
@property(nonatomic) long long retCode; // @synthesize retCode=_retCode;
- (void).cxx_destruct;

@end

