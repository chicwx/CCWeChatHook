//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCBaseControlMgrExt.h"
#import "WCPayBalanceDetailViewControllerDelegate.h"
#import "WCPayECardDetailControlLogicDelegate.h"
#import "WCPayLQTDetailControlLogicDelegate.h"

@class NSString, WCPayAddPayCardLogic, WCPayLQTDetailControlLogic;

@interface WCPayBalanceDetailControlLogic : WCPayControlLogic <WCPayLQTDetailControlLogicDelegate, WCPayECardDetailControlLogicDelegate, WCPayBalanceDetailViewControllerDelegate, WCBaseControlMgrExt>
{
    int m_eWCPayBalanceDetailControlLogicScene;
    WCPayAddPayCardLogic *m_oWCPayAddPayCardLogic;
    WCPayLQTDetailControlLogic *_lqtDetailControlLogic;
}

@property(retain, nonatomic) WCPayLQTDetailControlLogic *lqtDetailControlLogic; // @synthesize lqtDetailControlLogic=_lqtDetailControlLogic;
@property(nonatomic) int m_eWCPayBalanceDetailControlLogicScene; // @synthesize m_eWCPayBalanceDetailControlLogicScene;
- (void).cxx_destruct;
- (void)eCardDeteailLogicDidUnbindCard:(id)arg1;
- (void)onLQTDetailControlLogicStop;
- (void)OnRealnameVerifySuccessNotification:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)BackToRootView;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)doFetchMoney;
- (void)doAddCardForFetchMoney;
- (void)doAddCard;
- (void)BalanceDetailBackOpenECardDetail:(id)arg1;
- (void)BalanceDetailLQTEntryClick;
- (void)BalanceDetailRequeryBalance;
- (void)BalanceDetailFetchMoney;
- (void)BalanceDetailSaveMoney;
- (void)BalanceDetailBack;
- (void)pause;
- (void)startBalanceDetailLogic;
- (void)startLogic;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

