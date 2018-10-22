//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PluginContactInfoAssist.h"

#import "ForwardMessageLogicDelegate.h"
#import "IWCDeviceBrandMgrExt.h"
#import "contactVerifyLogicDelegate.h"

@class CContactVerifyLogic, ForwardMessageLogicController, NSString, UrlController;

@interface WeSportContactInfoAssist : PluginContactInfoAssist <ForwardMessageLogicDelegate, IWCDeviceBrandMgrExt, contactVerifyLogicDelegate>
{
    UrlController *m_urlController;
    ForwardMessageLogicController *m_forwardLogic;
    CContactVerifyLogic *m_oLogic;
}

@property(retain, nonatomic) CContactVerifyLogic *m_oLogic; // @synthesize m_oLogic;
- (void).cxx_destruct;
- (void)cancelFocus;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)uninstallPlugin;
- (void)handleAddedContact;
- (void)contactAddContactOk:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)installPlugin;
- (void)onTopChange:(id)arg1;
- (void)onMuteChange:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClearMsg;
- (void)onSetPrivacy;
- (void)onShowDataSource;
- (void)goToCommonQuestion;
- (id)getCurrentViewController;
- (void)inviteFriend;
- (void)goWeSportSessionFrame;
- (void)goWeSportCenter;
- (void)reloadInstalledTableViewData;
- (id)getPluginIntro;
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

