//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IUiUtilExt.h"
#import "MMUIViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class MMDelegateProxy<UIGestureRecognizerDelegate>, MMLoadingView, MMNavBarInteractiveConfig, MMTitleView, MMUINavigationBar, NSMutableArray, NSMutableDictionary, NSString, UIBarButtonItem, UIColor, UILabel, UINavigationController, UIPanGestureRecognizer, UIView, WCEventTrackingSystemConfig;

@interface MMUIViewController : UIViewController <IUiUtilExt, MMUIViewControllerDelegate, UIGestureRecognizerDelegate>
{
    _Bool m_isPopByClickingURL;
    MMLoadingView *m_loadingViewX;
    unsigned int m_uiVcType;
    UILabel *m_newsTitleRecordLabel;
    NSMutableArray *m_fullScreenViews;
    _Bool m_bAnimated;
    _Bool m_bIsBeingPoped;
    _Bool m_bInteractivePopEnabled;
    _Bool m_bDisableAdjustInsetAndOffset;
    double lastScreenWidth;
    UINavigationController *m_navigationController;
    MMTitleView *m_baseTitleView;
    NSMutableDictionary *m_dicDeepLink;
    NSMutableDictionary *m_dicContentInsetAutolayout;
    NSMutableArray *m_arrEndUserOpInfo;
    MMDelegateProxy<UIGestureRecognizerDelegate> *m_interactivePopGestureRecognizerDelegate;
    UIBarButtonItem *m_leftBarBtnItem;
    UIBarButtonItem *m_rightBarBtnItem;
    UIColor *m_titleColor;
    MMUINavigationBar *fakeNaviView;
    UIView *m_navHeaderView;
    UIView *m_navHeaderSeparatorLine;
    _Bool m_hasAppear;
    _Bool m_bIsBeingInteractivePop;
    _Bool m_willPopWebView;
    _Bool _m_bAnimating;
    _Bool _isDuringInteractivePop;
    _Bool _m_bStopPopWhenDeleteContact;
    UIView *bottomView;
    UIViewController *_presentingModalViewController;
    UIViewController *_presentedModalViewController;
    MMNavBarInteractiveConfig *_navBarInteractiveConfig;
    WCEventTrackingSystemConfig *_trackingSystemConfig;
    UIPanGestureRecognizer *_scrollViewInteractivePanGesture;
}

@property(retain, nonatomic) UIPanGestureRecognizer *scrollViewInteractivePanGesture; // @synthesize scrollViewInteractivePanGesture=_scrollViewInteractivePanGesture;
@property(retain, nonatomic) WCEventTrackingSystemConfig *trackingSystemConfig; // @synthesize trackingSystemConfig=_trackingSystemConfig;
@property(retain, nonatomic) MMNavBarInteractiveConfig *navBarInteractiveConfig; // @synthesize navBarInteractiveConfig=_navBarInteractiveConfig;
@property(nonatomic) _Bool m_bStopPopWhenDeleteContact; // @synthesize m_bStopPopWhenDeleteContact=_m_bStopPopWhenDeleteContact;
@property(nonatomic) _Bool isDuringInteractivePop; // @synthesize isDuringInteractivePop=_isDuringInteractivePop;
@property(nonatomic) _Bool m_bAnimating; // @synthesize m_bAnimating=_m_bAnimating;
@property(nonatomic) __weak UIViewController *presentedModalViewController; // @synthesize presentedModalViewController=_presentedModalViewController;
@property(nonatomic) __weak UIViewController *presentingModalViewController; // @synthesize presentingModalViewController=_presentingModalViewController;
@property(retain, nonatomic) NSMutableArray *m_arrEndUserOpInfo; // @synthesize m_arrEndUserOpInfo;
@property(nonatomic) _Bool m_bDisableAdjustInsetAndOffset; // @synthesize m_bDisableAdjustInsetAndOffset;
@property(nonatomic) _Bool m_bInteractivePopEnabled; // @synthesize m_bInteractivePopEnabled;
@property(nonatomic) _Bool m_bIsBeingPoped; // @synthesize m_bIsBeingPoped;
@property(nonatomic) _Bool m_bAnimated; // @synthesize m_bAnimated;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView;
@property(retain, nonatomic) UILabel *m_newsTitleRecordLabel; // @synthesize m_newsTitleRecordLabel;
@property(nonatomic) unsigned int m_uiVcType; // @synthesize m_uiVcType;
@property(retain, nonatomic) MMLoadingView *loadingViewX; // @synthesize loadingViewX=m_loadingViewX;
- (void).cxx_destruct;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)reportEndOpInfo;
- (void)appendEndOpInfo:(id)arg1;
- (void)parseDeepLink:(id)arg1 animation:(_Bool)arg2;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)setDeepLinkParam:(id)arg1;
- (void)initDeepLinkConfig;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)shouldInteractivePop;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didBeginEditing:(id)arg1;
- (_Bool)isSubviewResponder:(id)arg1;
- (void)resignSubviewResponder:(id)arg1;
- (void)viewWillInteractivePop;
- (void)viewDidBeInteractivePoped;
- (void)viewWillBeInteractivePoped;
- (void)viewWillDismiss:(_Bool)arg1;
- (void)viewDidPresent:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)removeFakeNaviView;
- (void)restoreNavigationBar;
- (void)internalAddFakeNaviView:(id)arg1;
- (void)addFakeNaviView;
- (_Bool)isSeachActive;
- (_Bool)useCustomNavibar;
- (void)restoreNavHeaderIfNeed;
- (void)initNavHeaderIfNeed;
- (void)onNavigationBarBackgroundColorChange;
- (_Bool)showNavigationBarSepLine;
- (_Bool)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (_Bool)useTransparentNavibar;
- (_Bool)useBlackStatusbar;
- (_Bool)hidesStatusBar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)deselectMainTableView;
- (void)deselectCellAlongsideTransition;
- (id)findMainTableView;
- (void)removeDuplicateBarButton;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isPresentedIn;
- (_Bool)isPushedIn;
- (id)tagForCurrentPage;
- (id)tagForActivePage;
- (id)getViewController;
- (void)resetViewStatus;
- (void)forceRotateToOrientation:(long long)arg1;
- (void)startForcedRotationToPortrait;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)isSvrErrorTipForbidden;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)protectStatusBarFromBeingFuckedByForeGround:(SEL)arg1;
- (void)setStatusBarFontBlack;
- (void)setStatusBarFontWhite;
- (void)setStatusBarHidden:(_Bool)arg1 withAnimation:(long long)arg2;
- (void)setStatusBarHidden:(_Bool)arg1;
- (void)setTopBarsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)changeTopBarsHiddenAnimated:(_Bool)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)setTitleOnly:(id)arg1;
- (void)willDismissAndShow;
- (void)setTitleInterfaceOritation:(long long)arg1;
- (id)getCurrentTitleColor;
- (double)getRightBarButtonWidth;
- (double)getLeftBarButtonWidth;
- (void)setTitleView:(id)arg1;
- (void)setTitle:(id)arg1 subTitle:(id)arg2;
- (void)setTitle:(id)arg1 leftView:(id)arg2 rightView:(id)arg3;
- (id)getTitleColor;
- (void)setTitleColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)willShow;
- (void)willDisshow;
- (void)didDisshow;
- (void)didAppear;
- (void)willDisappear;
- (void)adjustView;
- (void)willAppear;
- (void)setIsPopByClickingURL;
- (void)restoreNavigationBarBkg;
- (void)removeNavigationBarBkg;
- (void)onMainWindowFrameChanged;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)setAutolayoutTopOffset:(double)arg1 forView:(id)arg2;
- (double)getVisibleHeightOri:(long long)arg1;
- (double)getVisibleHeight;
- (double)getContentViewHeight;
- (double)getContentViewYforTranslucentNaviBar;
- (double)getContentViewY;
- (double)getSafeTopInset;
- (double)getSafeBottomInset;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (void)viewDidLoad;
- (_Bool)accessibilityPerformEscape;
- (void)disMissSelf;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)adjustViewAndNavBarRect;
- (void)adjustSubviewRects;
- (void)adjustTableViewInset:(id)arg1;
- (void)adjustTableViewRect;
- (void)stopLoading;
- (void)startLoadingWithText:(id)arg1 delayAnimation:(double)arg2 block:(_Bool)arg3;
- (void)startLoadingWithText:(id)arg1 block:(_Bool)arg2;
- (void)startLoadingNonBlock;
- (void)startLoadingBlocked;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)startLoadingWithText:(id)arg1;
- (void)startCommonLoadingBlocked;
- (void)startCommonLoading;
- (void)startCommonLoading:(_Bool)arg1;
- (void)stopBizLoading;
- (void)startBizLoading;
- (void)setWCBizAuthTitle:(id)arg1;
- (_Bool)shouldScrollToTopInNavBar;
- (_Bool)stickyToExpand;
- (id)titleView;
- (double)scrollViewContentInsetBottomForInteractive;
- (double)scrollViewContentInsetTopForInteractive;
- (double)navigationBarHeight;
- (double)statusBarHeight;
- (_Bool)isScrollViewExceedsBottom;
- (_Bool)isScrollViewExceedsTop;
- (void)setNavigationBarTitleShrink:(double)arg1 withFakeAnimation:(_Bool)arg2;
- (void)setNavigationBarTitleShrink:(double)arg1;
- (void)setNavigationBarAlpha:(double)arg1 withTitleIncluded:(_Bool)arg2;
- (void)fixScrollViewContentOffset;
- (void)onNavigationBarFrameChanged;
- (void)onStatusBarFrameChanged;
- (void)setNavigationBarY:(double)arg1;
- (void)restoreNavigationBarToFullSize;
- (void)restoreNavigationBarToFullSizeAnimatedWithDuration:(double)arg1;
- (void)restoreNavigationBarToFullSizeOnScrollToTop;
- (void)willEnterForeground;
- (void)removeTapGesture;
- (void)addTapGesture;
- (void)handleStopScrolling:(id)arg1;
- (void)handleDidScrolling:(id)arg1;
- (void)handleShrink:(id)arg1;
- (void)setScrollState:(id)arg1;
- (void)updateFadeBkgAlpha;
- (void)handleFade:(id)arg1;
- (void)handleBeginScrolling:(id)arg1;
- (void)onScrollViewInteractivePan:(id)arg1;
- (void)onScrollViewContentOffsetChanged:(struct CGPoint)arg1;
- (void)viewDidLayoutSubviewsInNavBar;
- (void)viewWillDisappearInNavBar:(_Bool)arg1;
- (void)viewWillAppearInNavBar:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
