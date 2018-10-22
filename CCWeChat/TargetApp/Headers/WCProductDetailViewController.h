//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavClickStreamHelperDelegete.h"
#import "IStrangerContactMgrExt.h"
#import "IWCProductExt.h"
#import "LoopPageScrollViewDataSourceDelegate.h"
#import "MMImageLoaderObserver.h"
#import "SendAppMsgHandleDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCBizFullImageViewDelegate.h"
#import "WCProductActionLogicControllerDelegate.h"
#import "WCRecommandGroupViewDelegate.h"

@class FavClickStreamHelper, LoopPageScrollView, MMAnimationTipView, MMTableView, NSData, NSMutableArray, NSString, SendAppMsgHandler, WCProductActionLogicController, WCProductInfo, WCUIPageControl;

@interface WCProductDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, LoopPageScrollViewDataSourceDelegate, WCProductActionLogicControllerDelegate, SendAppMsgHandleDelegate, IWCProductExt, MMImageLoaderObserver, IStrangerContactMgrExt, WCBizFullImageViewDelegate, WCRecommandGroupViewDelegate, FavClickStreamHelperDelegete>
{
    FavClickStreamHelper *m_clickHelper;
    WCProductInfo *_productInfo;
    NSMutableArray *_tableDatas;
    NSMutableArray *_actionGroupList;
    NSMutableArray *_bigImageUrls;
    LoopPageScrollView *_bigImageScrollView;
    WCUIPageControl *_bigImagePageControl;
    MMTableView *_tableView;
    WCProductActionLogicController *_actionLogicController;
    SendAppMsgHandler *_sendAppMsgHandler;
    MMAnimationTipView *m_tipView;
    NSString *_thumbImageUrl;
    NSData *_thumbImageData;
    _Bool isFromFav;
    _Bool productIDISScanCode;
    unsigned int scene;
    unsigned int _favId;
    id <WCProductDetailViewControllerDelegate> _delegate;
}

@property(nonatomic) unsigned int favId; // @synthesize favId=_favId;
@property(nonatomic) __weak id <WCProductDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool productIDISScanCode; // @synthesize productIDISScanCode;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(nonatomic) _Bool isFromFav; // @synthesize isFromFav;
- (void).cxx_destruct;
- (id)sessionId;
- (_Bool)hasService;
- (id)getWxPriceRegion;
- (_Bool)isCanPurchase;
- (_Bool)isNOStock;
- (void)reloadProductInfo:(id)arg1;
- (void)showDebugJsonView;
- (void)onOperate:(id)arg1;
- (void)fav;
- (void)shareToTimeLine;
- (void)sendToFriend;
- (void)enterStore;
- (void)jumpToNewMessage:(id)arg1;
- (void)jumpToContactInfoViewController:(id)arg1;
- (void)changePageControlToNextPage;
- (void)openContactInfoView;
- (void)openProductSKUView;
- (void)OnSendAppMsgOK;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onStrangerContactUpdated:(id)arg1;
- (id)getServiceContant;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)onGotProductDetailFail:(id)arg1;
- (void)onGotProductDetailSuccess:(id)arg1 productID:(id)arg2 retCode:(int)arg3;
- (void)updateActionItemListHeight;
- (id)getViewController;
- (void)onWCBizFullScreenImageViewHide:(unsigned int)arg1;
- (void)didTapPageAtNum:(unsigned int)arg1;
- (void)didChangeToPage:(unsigned int)arg1;
- (int)totalNumOfPage;
- (id)viewForPage:(id)arg1 pageNum:(unsigned int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makePurchaseCell:(id)arg1;
- (void)makeActionItemCell:(id)arg1 withItemInfo:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)makeActionGroupCell:(id)arg1 withTitle:(id)arg2;
- (void)makePricesCell:(id)arg1 withWXPrice:(id)arg2 withOriginprice:(id)arg3;
- (void)makeDetailCell:(id)arg1;
- (void)makeDescCell:(id)arg1 withDesc:(id)arg2;
- (void)makeWordCell:(id)arg1 withWord:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (struct CGSize)caluMaxPriceSizeWithWXPrice:(id)arg1 withOriginPrice:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)createTableHeaderView;
- (void)initView;
- (void)loadTableData;
- (void)loadActionData;
- (void)loadBigImageData;
- (void)initData;
- (void)updateProductDetail;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithExtString:(id)arg1;
- (id)initWithWCProductInfo:(id)arg1;
- (id)initWithWCProductID:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

