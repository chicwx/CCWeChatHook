//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "WCPayCurrencyInputLogicDelegate.h"

@class NSString, UILabel, UITextField, WCPayCurrencyInputLogic;

@interface WCPayCurrencyInputView : UIView <WCPayCurrencyInputLogicDelegate>
{
    id <WCPayCurrencyInputViewDelegate> _m_delegate;
    WCPayCurrencyInputLogic *_m_inputlogic;
    UILabel *_m_currencyLabel;
    UITextField *_m_numberTextFiled;
    double _fontSize;
}

@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UITextField *m_numberTextFiled; // @synthesize m_numberTextFiled=_m_numberTextFiled;
@property(retain, nonatomic) UILabel *m_currencyLabel; // @synthesize m_currencyLabel=_m_currencyLabel;
@property(retain, nonatomic) WCPayCurrencyInputLogic *m_inputlogic; // @synthesize m_inputlogic=_m_inputlogic;
@property(nonatomic) __weak id <WCPayCurrencyInputViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)textFieldDidChanged:(id)arg1;
- (void)onWCPayCurrencyInputLogicStringChangeTo:(id)arg1;
- (unsigned long long)getAmount;
- (void)updateFontSize:(double)arg1;
- (void)updateCurrencyTitle:(id)arg1;
- (void)updateDelegate:(id)arg1;
- (void)internalLayout;
- (void)layoutSubviews;
- (void)showKeyboard;
- (void)closeKeyboard;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

