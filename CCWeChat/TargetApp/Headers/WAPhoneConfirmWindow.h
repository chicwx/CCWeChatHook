//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ILinkEventExt.h"

@class MMBrandHeadImageView, NSString, UIButton, UILabel;

@interface WAPhoneConfirmWindow : UIView <ILinkEventExt>
{
    UIView *_contentView;
    UIView *_moreInfoDialog;
    UILabel *_titleLabel;
    UIView *_titleSplitLine;
    MMBrandHeadImageView *_appIconImageView;
    UIButton *_moreInfo;
    UILabel *_nameLabel;
    UILabel *_descriptionLabel;
    UILabel *_phoneLabel;
    UIView *_headSplitLine;
    UIView *_buttonSplitLine;
    UIView *_buttonVerticalSpliteLine;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    NSString *_authInfo;
    id <WAPhoneConfirmWindowDelegate> _confirmWindowDelegate;
    NSString *_appIconURL;
    NSString *_appName;
    NSString *_phoneNum;
    NSString *_desc;
}

+ (id)setupWindow:(id)arg1 appName:(id)arg2 appIconURL:(id)arg3 desc:(id)arg4 phone:(id)arg5;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appIconURL; // @synthesize appIconURL=_appIconURL;
@property(nonatomic) __weak id <WAPhoneConfirmWindowDelegate> confirmWindowDelegate; // @synthesize confirmWindowDelegate=_confirmWindowDelegate;
@property(retain, nonatomic) NSString *authInfo; // @synthesize authInfo=_authInfo;
- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onKnown:(id)arg1;
- (void)onMoreInfo:(id)arg1;
- (struct CGRect)contentViewFrame;
- (void)layoutSubviews;
- (void)onClickButtonConfirm:(id)arg1;
- (void)onClickButtonCancel:(id)arg1;
- (void)initView;
- (void)closeWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

