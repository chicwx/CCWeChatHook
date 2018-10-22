//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseInfoItem.h"

#import "WCPaySelectBankViewControllerDelegate.h"
#import "WCPayT2BCGetBankListCgiDelegate.h"

@class MMUIViewController, MMWebImageView, NSString, UILabel, WCPaySelectBankViewController, WCPayT2BCGetBankListCgi, WCPayTransBankItem;

@interface WCPaySelectBankItem : WCBaseInfoItem <WCPaySelectBankViewControllerDelegate, WCPayT2BCGetBankListCgiDelegate>
{
    MMUIViewController *m_currentViewController;
    WCPayTransBankItem *m_value;
    MMWebImageView *m_bankIconView;
    UILabel *m_bankLabel;
    _Bool m_isUnselectable;
    id <WCPaySelectBankItemDelegate> _m_selectBankItemDelegate;
    WCPayT2BCGetBankListCgi *_m_getBankListCgi;
    WCPaySelectBankViewController *_m_selectBankViewController;
}

@property(retain, nonatomic) WCPaySelectBankViewController *m_selectBankViewController; // @synthesize m_selectBankViewController=_m_selectBankViewController;
@property(retain, nonatomic) WCPayT2BCGetBankListCgi *m_getBankListCgi; // @synthesize m_getBankListCgi=_m_getBankListCgi;
@property(nonatomic) __weak id <WCPaySelectBankItemDelegate> m_selectBankItemDelegate; // @synthesize m_selectBankItemDelegate=_m_selectBankItemDelegate;
- (void).cxx_destruct;
- (void)OnGetBankListOK:(id)arg1 allBankList:(id)arg2;
- (void)OnGetWCPaySelectBankViewControllerDataSorce;
- (id)getBankIconImageView;
- (id)bankString;
- (void)setBankItem:(id)arg1;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)arg1;
- (void)becomeFirstResponder;
- (id)getValue;
- (void)setCurrentViewController:(id)arg1;
- (void)updateView;
- (void)initView:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

