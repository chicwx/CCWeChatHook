//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt.h"
#import "MMNewTipsMgrExt.h"
#import "TransitioningAnimationDelegate.h"
#import "whatsnewViewDelegateEx.h"

@class CrossfadeAnimationController, MMTableViewInfo, NSString, UILabel, WCOutWhatsNewViewController;

@interface SettingAboutMMViewController : MMUIViewController <MMNewTipsMgrExt, whatsnewViewDelegateEx, TransitioningAnimationDelegate, ILinkEventExt>
{
    MMTableViewInfo *m_tableViewInfo;
    UILabel *m_labelProduct;
    _Bool m_bFullVersion;
    _Bool m_bFromSetting;
    WCOutWhatsNewViewController *m_whatsNewViewController;
    CrossfadeAnimationController *m_transitionInstance;
}

- (void).cxx_destruct;
- (void)onNotifyToShowTips:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showWhatsNewWillEnd;
- (void)showUpdate;
- (void)showWhatsNewEnd;
- (void)ShowWhatsNew;
- (void)onLaw;
- (void)onAboutVersion;
- (void)showSystemNotice;
- (void)showRate;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)getHeaderView;
- (void)updateProduct;
- (void)reloadData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

