//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMOpenVoiceReporter : NSObject
{
}

+ (void)resetAll;
+ (id)generateReport;
+ (void)setAudioPlayInitStatus:(int)arg1 recorderErrCode:(int)arg2 playerErrCode:(int)arg3;
+ (void)setAudioEndStatusWithRecordReadNum:(int)arg1 playVolume:(int)arg2;

@end

