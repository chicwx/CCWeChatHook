//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSString;

@interface BaseResponseErrMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)ShowAlertFromErrMsg:(id)arg1 DefaultMsg:(id)arg2;
- (_Bool)isShowAlert;
- (id)initWithXml:(id)arg1;
- (id)initWithContent:(id)arg1;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(retain, nonatomic) NSString *cancel; // @dynamic cancel;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int countdown; // @dynamic countdown;
@property(nonatomic) int delayConnSec; // @dynamic delayConnSec;
@property(nonatomic) int dispSec; // @dynamic dispSec;
@property(retain, nonatomic) NSString *ok; // @dynamic ok;
@property(nonatomic) int showType; // @dynamic showType;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

