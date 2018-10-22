//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavMMUIViewController.h"

#import "FavForwardLogicDelegate.h"
#import "FavTagViewDelegate.h"
#import "IVOIPUILogicMgrExt.h"
#import "MMScrollActionSheetDelegate.h"
#import "MMTipsViewControllerDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCScheduleLogicControllerDelegate.h"
#import "WNAlertViewHelperDelegate.h"
#import "WNArticleControllerDelegate.h"
#import "WNSelectViewDelegate.h"

@class FavForwardLogicController, FavoritesBrowseDetailReportData, FavoritesItemDataField, MMScrollActionSheet, MMTableView, MMTimer, NSString, UIView, WCScheduleLogicController, WNArticleDataController, WNArticleFooterView, WNParagraphStyleToolView, WNSelectView;

@interface WNArticleViewController : FavMMUIViewController <WCActionSheetDelegate, FavForwardLogicDelegate, FavTagViewDelegate, MMTipsViewControllerDelegate, WNSelectViewDelegate, WCScheduleLogicControllerDelegate, MMScrollActionSheetDelegate, IVOIPUILogicMgrExt, WNAlertViewHelperDelegate, WNArticleControllerDelegate>
{
    WNParagraphStyleToolView *m_toolView;
    UIView *_headerView;
    WNArticleFooterView *_footerView;
    WNArticleDataController *m_dataController;
    FavForwardLogicController *_favForwardLogicController;
    MMTableView *m_tableView;
    MMTimer *_saveTimer;
    WNSelectView *_selectView;
    _Bool bDeletePopView;
    double m_keyboardHeight;
    WCScheduleLogicController *_scheduleLogicController;
    MMScrollActionSheet *_scrollActionSheet;
    _Bool forceHideTimeHeader;
    _Bool bEditable;
    _Bool _bShowMoreMenu;
    id <FavNotePostDelegate> favNotePostDelegate;
    FavoritesBrowseDetailReportData *_reportData;
    FavoritesItemDataField *_scrollToData;
}

@property(retain, nonatomic) FavoritesItemDataField *scrollToData; // @synthesize scrollToData=_scrollToData;
@property(retain, nonatomic) FavoritesBrowseDetailReportData *reportData; // @synthesize reportData=_reportData;
@property(nonatomic) _Bool bShowMoreMenu; // @synthesize bShowMoreMenu=_bShowMoreMenu;
@property(nonatomic) __weak id <FavNotePostDelegate> favNotePostDelegate; // @synthesize favNotePostDelegate;
@property(nonatomic) _Bool bEditable; // @synthesize bEditable;
- (void).cxx_destruct;
- (void)showKeyboard;
- (void)hideKeyboard;
- (_Bool)needHideKeyboardToShowAlert;
- (id)sessionId;
- (void)onVoipMaximized;
- (void)onVoipMinimized;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onWCScheduleItem:(id)arg1 SetSuccess:(_Bool)arg2 ErrMsg:(id)arg3;
- (void)onWCScheduleSelectDatePickerView;
- (void)onWCScheduleCancelDatePickerView;
- (id)GetScheduleHeaderView;
- (void)onScheduleHeaderViewClicked;
- (void)onUpdateScheduleItem:(id)arg1;
- (_Bool)shouldShowSchedule;
- (void)updateToolBarHeight:(int)arg1 KeyboardHeight:(double)arg2;
- (void)onTopBarFrameChanged;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (_Bool)BeEditable;
- (void)onHideSelectAllView;
- (void)onNoteSecurityCheckFail;
- (void)onNoteSecurityCheckOK;
- (void)onDownloadHtmlExpire;
- (void)onDownloadHtmlFail;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onEdited;
- (void)onShowFullToolbar;
- (void)hideToolbarView;
- (void)reloadRightBarBtn;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)onTxtInfoTextLengthExceed;
- (void)onNoneTxtInfoNumExceed;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)initSelectView;
- (void)onSelectObjectView:(id)arg1;
- (void)onSelectAllViewToShow;
- (void)onSelectParaTextForEditing:(struct _NSRange)arg1;
- (id)getTableView;
- (id)getViewController;
- (_Bool)isCellVisible:(int)arg1;
- (void)hasLoadAllParaInfo;
- (void)reloadAll;
- (void)setBecomeFirstResponse:(long long)arg1;
- (void)makeCellSelectionSyleNoneAtIndexPath:(id)arg1;
- (void)unhighlightRowAtIndexPath:(id)arg1;
- (void)highlightRowAtIndexPath:(id)arg1;
- (void)scrollToIndex:(long long)arg1 atScrollPosition:(long long)arg2 needHighlight:(_Bool)arg3 animation:(_Bool)arg4;
- (void)scrollToIndex:(long long)arg1 atScrollPosition:(long long)arg2;
- (void)scrollToIndex:(long long)arg1;
- (void)deleteRowAtIndex:(long long)arg1;
- (void)insertNewRowAtIndex:(long long)arg1 withCount:(long long)arg2;
- (void)insertNewRowAtIndex:(long long)arg1;
- (void)reloadRowsAtIndexArray:(id)arg1;
- (void)reloadRowAtIndex:(long long)arg1;
- (void)resizeCellViewAtIndex:(long long)arg1;
- (void)onFavTagEditOK;
- (void)onFavTagEditBegin:(int)arg1;
- (id)getFavForawrdViewController;
- (id)getFooterViewImage;
- (void)getTableViewimage:(CDUnknownBlockType)arg1;
- (void)getNoteImage:(CDUnknownBlockType)arg1;
- (double)getTableViewContentHeight;
- (void)realSaveNoteAsImage;
- (void)saveNoteAsImage;
- (void)setConversionOntop:(_Bool)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)favItem;
- (void)forceShowKeyboard;
- (void)setDataEdited:(_Bool)arg1;
- (void)onTimeSave;
- (void)stopAutoSaveTimer;
- (void)startAutoSaveTimer;
- (void)onMenuAction:(id)arg1;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3;
- (void)onForwardNote2WC;
- (void)forwardNote;
- (id)tryRemoveChatVoiceBeforeForward:(id)arg1;
- (void)saveNote;
- (void)backupNote;
- (void)disMissSelf;
- (void)configNavbar;
- (id)makeDefaultTableHeaderView;
- (void)initTableView;
- (void)reloadFooterView;
- (void)initHeaderView;
- (_Bool)shouldShowAddTimeHeader;
- (void)initToolView;
- (void)initUI;
- (_Bool)isEmpty;
- (void)configWithWCDataItem:(id)arg1;
- (void)configWithFavItem:(id)arg1;
- (void)configWithMsg:(id)arg1;
- (void)initData;
- (_Bool)shouldInteractivePop;
- (_Bool)useTransparentNavibar;
- (void)checkShowContext;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (_Bool)useBlackStatusbar;
- (void)setM_uiVcType:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

