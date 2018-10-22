//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class GetRealnameWordingRsp, InternalTask, NSString, WCPayJumpRemindControlLogic, WCPayJumpRemindInfo;

@interface WCPaySelectVerifyTypeViewController : WCPayBaseViewController
{
    id <WCPaySelectVerifyTypeViewControllerDelegate> m_delegate;
    NSString *bindCardTitle;
    NSString *bindCardSubTitle;
    NSString *bindIdTitle;
    NSString *bindIdSubTitle;
    NSString *extralWording;
    _Bool questionAnswerSwitch;
    NSString *questionAnswerUrl;
    _Bool isShowBindCard;
    _Bool isShowRealnameVerify;
    _Bool isShowBindCardVerify;
    NSString *bindCardVerifyTitle;
    NSString *bindCardVerifySubTitle;
    _Bool isNeedShowBindCardVerifyAlertView;
    NSString *bindCardVeifyAlertViewRightButtonText;
    NSString *bindCardVeifyAlertViewContent;
    GetRealnameWordingRsp *_wording;
    InternalTask *_m_internalTask;
    WCPayJumpRemindInfo *_jumpRemindInfo;
    WCPayJumpRemindControlLogic *_jumpRemindControlLogic;
}

@property(retain, nonatomic) WCPayJumpRemindControlLogic *jumpRemindControlLogic; // @synthesize jumpRemindControlLogic=_jumpRemindControlLogic;
@property(retain, nonatomic) WCPayJumpRemindInfo *jumpRemindInfo; // @synthesize jumpRemindInfo=_jumpRemindInfo;
@property(retain, nonatomic) InternalTask *m_internalTask; // @synthesize m_internalTask=_m_internalTask;
@property(retain, nonatomic) GetRealnameWordingRsp *wording; // @synthesize wording=_wording;
- (void).cxx_destruct;
- (void)onWCPayPrivacyViewControllerClickAgree:(_Bool)arg1;
- (void)onRightBarButtonClick;
- (void)populateData:(id)arg1;
- (void)getWording;
- (void)realSelectBindCardVerify;
- (void)onContinueSelectBindCardVerify;
- (void)selectBindCardVerify;
- (void)realSelectRealnameVerify;
- (void)onContinueSelectRealnameVerify;
- (void)selectRealnameVerify;
- (void)realSelectBindCard;
- (void)onContinueSelectBindCard;
- (void)selectBindCard;
- (void)makeSelectBindCardVerifyCell:(id)arg1;
- (void)makeSelectRealnameVerifyCell:(id)arg1;
- (void)makeSelectBindCardCell:(id)arg1;
- (id)createDotLabel;
- (id)headerView;
- (void)setDelegate:(id)arg1;
- (void)OnBack;
- (void)reloadTableView;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

