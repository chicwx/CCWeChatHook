//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WXTalkRoomMember : NSObject
{
    unsigned int memberId;
    NSString *username;
}

@property(nonatomic) unsigned int memberId; // @synthesize memberId;
@property(retain, nonatomic) NSString *username; // @synthesize username;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

