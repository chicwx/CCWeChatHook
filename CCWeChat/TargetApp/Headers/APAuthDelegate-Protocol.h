//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APAuth;

@protocol APAuthDelegate <NSObject>

@optional
- (void)didExpiredOfApAuth:(APAuth *)arg1;
- (void)didFailOfApAuth:(APAuth *)arg1 withErrCode:(int)arg2;
- (void)didSuccessOfApAuth:(APAuth *)arg1;
- (void)didStartApAuth:(APAuth *)arg1;
@end

