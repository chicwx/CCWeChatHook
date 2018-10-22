//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString, VoipForceStartObject;

@interface VoipForceStartInActiveState : MMService <MMService>
{
    VoipForceStartObject *_m_audioObject;
    VoipForceStartObject *_m_videoObject;
}

@property(retain, nonatomic) VoipForceStartObject *m_videoObject; // @synthesize m_videoObject=_m_videoObject;
@property(retain, nonatomic) VoipForceStartObject *m_audioObject; // @synthesize m_audioObject=_m_audioObject;
- (void).cxx_destruct;
- (void)startVideo;
- (void)updateVoipVideoStartBlock:(CDUnknownBlockType)arg1;
- (void)startAudio;
- (void)updateVoipAudioStartBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

