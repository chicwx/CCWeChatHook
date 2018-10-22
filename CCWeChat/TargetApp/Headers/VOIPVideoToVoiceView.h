//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "IVoipCXMgrExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "VoiceViewSpeakerModeCheckExt.h"
#import "Voip480ScreenExt.h"
#import "VoipUIManagerExt.h"
#import "WCAudioSessionExt.h"

@class CContact, MMHeadImageView, MMTimerLabel, MultiTalkHDHeadView, NSString, UIImageView, UILabel, UIView, VoipDescriptionButton;

@interface VOIPVideoToVoiceView : MMUIView <VoipUIManagerExt, UIAlertViewDelegate, VoiceViewSpeakerModeCheckExt, Voip480ScreenExt, MMTipsViewControllerDelegate, WCAudioSessionExt, IVoipCXMgrExt>
{
    _Bool m_isOperating;
    CContact *m_contact;
    UIImageView *m_backgroundView;
    UILabel *m_remoteNameLabel;
    VoipDescriptionButton *m_hangupButton;
    VoipDescriptionButton *m_micButton;
    VoipDescriptionButton *m_speakerButton;
    MultiTalkHDHeadView *m_remoteHeadImageView;
    MMTimerLabel *m_timer;
    UIView *m_blurView;
    MMHeadImageView *m_blurHeadImageView;
    id <VOIPVideoToVoiceViewDelegate> m_delegate;
}

@property(nonatomic) _Bool m_isOperating; // @synthesize m_isOperating;
@property(nonatomic) __weak id <VOIPVideoToVoiceViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMHeadImageView *m_blurHeadImageView; // @synthesize m_blurHeadImageView;
@property(retain, nonatomic) UIView *m_blurView; // @synthesize m_blurView;
@property(retain, nonatomic) MMTimerLabel *m_timer; // @synthesize m_timer;
@property(retain, nonatomic) MultiTalkHDHeadView *m_remoteHeadImageView; // @synthesize m_remoteHeadImageView;
@property(retain, nonatomic) VoipDescriptionButton *m_speakerButton; // @synthesize m_speakerButton;
@property(retain, nonatomic) VoipDescriptionButton *m_micButton; // @synthesize m_micButton;
@property(retain, nonatomic) VoipDescriptionButton *m_hangupButton; // @synthesize m_hangupButton;
@property(retain, nonatomic) UILabel *m_remoteNameLabel; // @synthesize m_remoteNameLabel;
@property(retain, nonatomic) UIImageView *m_backgroundView; // @synthesize m_backgroundView;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void).cxx_destruct;
- (void)OnVoipCXCheckSpeakerMode;
- (void)OnVoipCXHungUp;
- (void)OnVoipCXSetMuted;
- (void)onWCAudioSessionOverride;
- (void)voipToastMarginBottomOffsetFor480Screen:(double *)arg1;
- (void)getVoiceViewSpeakerMode:(_Bool *)arg1;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)onVoipAudioDevicePlugin;
- (void)onVoipAudioDeviceUnPlugin;
- (void)checkSpeakerMode;
- (void)onVoipChangeToEarMode;
- (void)onVoipChangeToSpeakerMode;
- (void)startOperate:(_Bool)arg1;
- (void)startTimer;
- (void)onClickMicButton;
- (void)updateSpeakerButton;
- (void)onClickHandup;
- (void)layoutHangupButton;
- (void)layoutMicButton;
- (void)layoutSpeakerButton;
- (void)layoutNameView;
- (void)layoutHeadView;
- (void)layoutBlurView;
- (void)onSmallSwitchButtonClick;
- (void)initMinimizeButton;
- (void)layoutBackground;
- (void)layoutTimerView;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 withContact:(id)arg2 withDelegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

