//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FTSWebSearchDataSource.h"
#import "IWSViewControllerLifeCycleExt.h"
#import "UIScrollViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UIWebViewDelegate.h"
#import "WAAppCanvasWrapperViewDelegate.h"
#import "WASearchFromGlobalProxyDelegate.h"
#import "WSContactSearchLogicDelegate.h"
#import "WSJSEventHandleDelegate.h"
#import "WSTagSearchDelegate.h"

@class FTSWebSearchMgr, MMTagSearchBar, MMUIViewController, NSMutableArray, NSMutableDictionary, NSString, UIImageView, UISearchBar, UITextField, UIView, WASearchFromGlobalProxy, WSContactSearchLogic, WSHistoryCacheLogic, WSJSEventHandler, WSResultViewLogic, WSTagSearchLogic;

@interface FTSWebSearchController : NSObject <UISearchBarDelegate, UIWebViewDelegate, UIScrollViewDelegate, FTSWebSearchDataSource, WSJSEventHandleDelegate, WSContactSearchLogicDelegate, WSTagSearchDelegate, WASearchFromGlobalProxyDelegate, WAAppCanvasWrapperViewDelegate, IWSViewControllerLifeCycleExt>
{
    NSString *_lastShouldChangedFormatQuery;
    int _scene;
    int _mode;
    MMTagSearchBar *_searchBar;
    NSMutableArray *_arrResultViews;
    WSResultViewLogic *_resultViewLogic;
    UIImageView *_searchBarWrap;
    UIImageView *_bottomViewShadow;
    _Bool _hasMoving;
    double _moveStartOffset;
    double _moveCurOffset;
    double _moveContentOffsetY;
    double _searchTextFieldNormalWidth;
    struct CGSize _searchIconDefaultSize;
    _Bool _isDetailSearch;
    unsigned long long _detailSearchType;
    _Bool _isWeAppSearch;
    NSString *_searchID;
    NSString *_browsingTID;
    NSMutableArray *_arrDeletedTID;
    _Bool _bSwizzle;
    int _guideType;
    FTSWebSearchMgr *_webSearchMgr;
    WASearchFromGlobalProxy *_weAppSearchProxy;
    int _currentShowViewType;
    unsigned long long _mainBusinessType;
    UIView *_view;
    UIView *_searchBarSuperView;
    UIView *_bottomView;
    MMUIViewController *_viewController;
    id <FTSWebSearchViewDelegate> _delegate;
    WSJSEventHandler *_jsEventHandler;
    WSContactSearchLogic *_searchContactLogic;
    WSTagSearchLogic *_tagSearchLogic;
    WSHistoryCacheLogic *_historyCacheLogic;
    UITextField *_searchTextField;
    UIImageView *_searchLeftView;
    UIView *_searchPromtLabel;
    NSMutableDictionary *_widgetViewCache;
}

@property(retain, nonatomic) NSMutableDictionary *widgetViewCache; // @synthesize widgetViewCache=_widgetViewCache;
@property(retain, nonatomic) UIView *searchPromtLabel; // @synthesize searchPromtLabel=_searchPromtLabel;
@property(retain, nonatomic) UIImageView *searchLeftView; // @synthesize searchLeftView=_searchLeftView;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) WSHistoryCacheLogic *historyCacheLogic; // @synthesize historyCacheLogic=_historyCacheLogic;
@property(retain, nonatomic) WSTagSearchLogic *tagSearchLogic; // @synthesize tagSearchLogic=_tagSearchLogic;
@property(retain, nonatomic) WSContactSearchLogic *searchContactLogic; // @synthesize searchContactLogic=_searchContactLogic;
@property(retain, nonatomic) WSJSEventHandler *jsEventHandler; // @synthesize jsEventHandler=_jsEventHandler;
@property(readonly, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <FTSWebSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *searchBarSuperView; // @synthesize searchBarSuperView=_searchBarSuperView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)commonSetWeappResultView:(id)arg1;
- (void)onWAProxySetSearchPlaceHolder:(id)arg1;
- (void)onWAProxyWillBeginVerticalSearch:(id)arg1;
- (void)onWAProxyWillBeginDetailSearch:(id)arg1;
- (void)onWAProxySearchInputChanged:(id)arg1;
- (void)onWAProxyHideKeyboard;
- (void)onTagSearchBarInfoChangedToNotify:(id)arg1;
- (void)onReturnWSContactResult:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)onWrapperView:(id)arg1 updateHeight:(double)arg2;
- (void)onWrapperView:(id)arg1 openApp:(id)arg2;
- (void)onPreSearch:(id)arg1 bizType:(unsigned long long)arg2;
- (void)onActionSheet:(id)arg1 clickButtonAtIndex:(long long)arg2;
- (void)onTapWAWidgetWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onUpdateWAWidgetWithParams:(id)arg1;
- (void)onRemoveWAWidgetWithParams:(id)arg1;
- (id)onInsertWAWidgetWithParams:(id)arg1;
- (void)onInsertHistoryOperation:(id)arg1;
- (void)onClearHistoryOperation:(id)arg1;
- (void)onRequestLocalSuggestion:(id)arg1;
- (void)onWSMusicStatusChanged:(id)arg1;
- (void)currentFriendScene:(unsigned int *)arg1 withParams:(id)arg2;
- (void)onDeleteBrowsingSnsItemOnH5;
- (void)onBrowsingSnsItem:(id)arg1;
- (_Bool)checkBrowsingSnsItem:(id)arg1;
- (void)onOpenWeAppPage:(id)arg1;
- (void)onClickRecmdWord:(id)arg1;
- (void)onViewTypeChange:(id)arg1;
- (void)onLaunchDetailPageForWeApp:(id)arg1;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onSearchInputChanged:(id)arg1;
- (void)enableSearchBar;
- (void)hideSearchKeyboard;
- (unsigned int)searchScene;
- (id)viewStacks;
- (unsigned long long)businessType;
- (id)query;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)onClickSearchButton:(id)arg1;
- (void)cancelSearch;
- (void)tryAsyncSearchContact:(id)arg1;
- (void)resetSearch;
- (void)asyncSearch:(id)arg1;
- (void)setSearchBarText:(id)arg1;
- (void)reportClickSearch:(id)arg1;
- (void)notifyPageOfSearchClick:(id)arg1;
- (void)notifyPageOfQueryChanged:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)enableButton:(id)arg1;
- (void)willBeginVerticalSearchOfWeApp:(id)arg1;
- (void)willBeginDetailSearchOfWeApp:(id)arg1;
- (void)willBeginDetailSearch:(id)arg1 andParams:(id)arg2;
- (id)urlParmasForVSPage:(id)arg1;
- (id)urlParmasForDetailPage:(id)arg1 andParams:(id)arg2;
- (id)urlParmasForMainPage:(id)arg1 baseUrlParams:(id)arg2;
- (id)getResultViewLogic;
- (void)loadLocalHtmlForVertSearch:(id)arg1;
- (void)loadLocalHtmlForDetailPage:(id)arg1 andParams:(id)arg2;
- (void)loadLocalHtml:(id)arg1 baseUrlParams:(id)arg2;
- (void)resetSearchIconFrame;
- (void)removeAllAnimation:(id)arg1;
- (void)show;
- (void)hideKeyboard;
- (void)onBackBtnClick;
- (void)remove;
- (void)popWithAnimation;
- (void)popFromDetailSearch;
- (void)onRemoveDetailView;
- (void)pop:(_Bool)arg1;
- (double)getSearchTextFieldWidth;
- (void)updateMovingDetailView;
- (void)updateSearchBarPosition;
- (void)moveDetailViewToRight;
- (void)moveWebViewToRight;
- (void)cancelMoveDetailView;
- (void)cancelMoveSearchBar;
- (void)handlePanGestureForDetailView:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)webSearchVC:(id)arg1 willDisappear:(_Bool)arg2;
- (void)webSearchVC:(id)arg1 willAppear:(_Bool)arg2;
- (_Bool)isSupportMCSBrandContact;
- (_Bool)isSupportLocalSuggestion;
- (_Bool)isSupportSuggestion;
- (_Bool)isSubClassSearch;
- (_Bool)isVerticalSearch;
- (void)internalSwizzle;
- (void)clearResource;
- (void)handleRotateEvent;
- (void)unswizzle;
- (void)swizzle;
- (id)makeNewDetailView:(id)arg1;
- (void)initResultView;
- (void)initView;
- (void)initWebSearchMgr;
- (void)initContext:(unsigned long long)arg1;
- (void)initHistoryCacheLogic;
- (void)initTagSearchLogic;
- (void)initContactSearchLogic;
- (void)initResultViewLogic;
- (id)secondLastResultView;
- (id)currentResultView;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 Scene:(int)arg2 mode:(int)arg3 businessType:(unsigned long long)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

