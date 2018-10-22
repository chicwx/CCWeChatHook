//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUIButton, MMUILabel, NSString, UIActivityIndicatorView, UIImageView, UILongPressGestureRecognizer, UIView, WAPopOverTaskBarlogic, WAPopOverView, WAWebViewController;

@interface WAWebViewMutiFuncMenuView : MMUIView
{
    NSString *_normalLastNavTitle;
    MMUILabel *_normalTitleView;
    _Bool _isActivityIndicatorAnimating;
    UIActivityIndicatorView *_activityIndicatorView;
    MMUIButton *_returnButton;
    UIView *_menuView;
    MMUIButton *_menuMoreButton;
    MMUIButton *_menuExitButton;
    _Bool _isMenuHidden;
    MMUIButton *_menuStateButton;
    UIImageView *_menuIconView;
    UILongPressGestureRecognizer *_moreLongPressRecognizer;
    _Bool _isTrigerMoreLongPress;
    UILongPressGestureRecognizer *_longPressRecognizer;
    WAPopOverTaskBarlogic *_popOverLogic;
    WAPopOverView *_popOverView;
    double _lastSystemNavigationBarHeight;
    _Bool _canShowShare;
    int _navMode;
    id <WAWebViewMutiFuncMenuViewDelegate> _delegate;
    WAWebViewController *_webview;
    long long _contentMode;
    long long _menuState;
}

+ (double)getMenuOriginY;
+ (_Bool)shouldUseSmallMenu;
+ (double)menuViewHeightCurOri;
+ (double)menuViewWidthCurOri;
@property(nonatomic) long long menuState; // @synthesize menuState=_menuState;
@property(nonatomic) _Bool canShowShare; // @synthesize canShowShare=_canShowShare;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) int navMode; // @synthesize navMode=_navMode;
@property(nonatomic) __weak WAWebViewController *webview; // @synthesize webview=_webview;
@property(nonatomic) __weak id <WAWebViewMutiFuncMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLongPressExitItem:(id)arg1;
- (void)onLongPressMoreItem:(id)arg1;
- (id)pluginWeAppMsg;
- (id)pluginVideoPlayer;
- (_Bool)isSupportVisualEffect;
- (id)genStateButton;
- (id)genMenuView;
- (void)onReturn;
- (void)onExit;
- (void)onMore;
- (id)copyMenuView;
- (id)getIconNameForCurrentNavMode:(id)arg1 HighLight:(_Bool)arg2;
- (id)getIconNameForCurrentNavMode:(id)arg1;
- (id)stateBackgroundIconName;
- (id)voiceRecordStateIconName;
- (id)POIStateIconName;
- (id)videoRecordStateIconName;
- (id)exitButtonHighLightIconName;
- (id)exitButtonIconName;
- (id)moreButtonIconName;
- (void)changeMenuStateWithIcon:(id)arg1 AccessbilityLabel:(id)arg2;
- (void)changeMenuStateToRecordingVideo;
- (void)changeMenuStateToRecordingVoice;
- (void)changeMenuStateToLocation;
- (void)changeMenuStateToNormal;
- (void)onWebViewDidAppear;
- (void)fsmenu_updateContent;
- (void)fsnormal_layoutContent;
- (void)fsnormal_updateContent;
- (void)setMenuTitleViewLoading:(_Bool)arg1;
- (void)setMenuViewCapsuleHidden:(_Bool)arg1;
- (void)resetMenuState;
- (void)setMenuNavTitle:(id)arg1;
- (void)setMenuNavBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)updateMenuViewWithWebContentMode:(long long)arg1 navMode:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

