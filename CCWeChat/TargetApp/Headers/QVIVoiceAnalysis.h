//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QVIVoiceAnalysis : NSObject
{
    struct _TRSpeexEncodeContex mSpeexEncodeContex;
    struct _TRSpeexDecodeContex mSpeexDecodeContex;
    unsigned long long mEncodeBufferSize;
    char *mEncodeInBuffer;
    char *mEncodeOutBuffer;
    _Bool mSpeexEncodeInitialized;
    unsigned long long mDecodeBufferSize;
    char *mDecodeInBuffer;
    char *mDecodeOutBuffer;
    _Bool mSpeexDecodeInitialized;
    _Bool mMfeInitialized;
}

+ (void)releaseSharedInstance;
+ (id)activeInstance;
+ (id)sharedInstance;
- (id).cxx_construct;
- (void)stopMfeEngine;
- (_Bool)startMfeEngine;
- (void)releaseMfeEngine;
- (_Bool)initMfeEngineWithSilentTime:(int)arg1 andTimeout:(int)arg2;
- (void)mfeDetect:(id)arg1 withResult:(id)arg2;
- (void)mfeStop;
- (void)mfeStart;
- (void)mfeRelease;
- (void)mfeInitWithSilentTime:(int)arg1 andTimeout:(int)arg2;
- (id)speexDecode:(id)arg1;
- (void)speexDecodeRelease;
- (void)speexDecodeInit;
- (id)speexEncode:(id)arg1;
- (void)speexEncodeRelease;
- (void)speexEncodeInit;
- (id)init;

@end

