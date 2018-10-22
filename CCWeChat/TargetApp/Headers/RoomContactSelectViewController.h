//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "AddMemLogicDelegate.h"
#import "ChatRoomMemberGridViewDelegate.h"
#import "DelMemLogicDelegate.h"
#import "IContactMgrExt.h"
#import "MMTableViewInfoDelegate.h"
#import "NewChatRoomMemberItemViewDelegate.h"
#import "NewContactsSearchPanelViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "tableViewDelegate.h"

@class AddMemLogic, CBaseContact, CContact, DelMemLogic, MMTableView, MMTableViewInfo, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NewContactsSearchPanelView, SearchHelpDataItem;

@interface RoomContactSelectViewController : MMSearchBarDisplayController <AddMemLogicDelegate, DelMemLogicDelegate, tableViewDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, NewContactsSearchPanelViewDelegate, ChatRoomMemberGridViewDelegate, MMTableViewInfoDelegate, NewChatRoomMemberItemViewDelegate, IContactMgrExt>
{
    MMTableView *m_tableView;
    NSMutableArray *m_arrRoomMembers;
    NSMutableArray *m_arrKeys;
    NSMutableDictionary *m_dicRoomMembers;
    CBaseContact *m_roomContact;
    NSMutableArray *m_arrFilterdFriends;
    NSMutableSet *m_setFilteredFriends;
    NSMutableDictionary *m_dicMatchTips;
    id <RoomContactSelectDelegate> m_delegate;
    NewContactsSearchPanelView *m_panelView;
    int m_commonSearchScene;
    unsigned int m_scene;
    NSArray *m_customMemberList;
    MMTableViewInfo *m_tableViewInfo;
    CContact *m_chatRoomContact;
    unsigned long long m_nCellCnt;
    unsigned long long m_nCellCol;
    NSArray *m_arrMemberList;
    _Bool m_bDeleteStatus;
    AddMemLogic *m_addMemLogic;
    DelMemLogic *m_delMemLogic;
    NSIndexPath *m_oSelectIndexPath;
    SearchHelpDataItem *m_searchHelpDataItem;
    _Bool m_bShowWithGrid;
    _Bool _m_bHideSearchBar;
    _Bool _m_bShowSelf;
    _Bool _m_bSortByTime;
    _Bool _m_bCustomMakeCell;
    _Bool _m_bEnableEdit;
    _Bool _m_bMultiSelect;
    _Bool _m_bShowIsFriend;
    struct CGPoint m_bContentOffset;
}

@property(nonatomic) _Bool m_bShowIsFriend; // @synthesize m_bShowIsFriend=_m_bShowIsFriend;
@property(nonatomic) _Bool m_bMultiSelect; // @synthesize m_bMultiSelect=_m_bMultiSelect;
@property(nonatomic) _Bool m_bEnableEdit; // @synthesize m_bEnableEdit=_m_bEnableEdit;
@property(nonatomic) _Bool m_bCustomMakeCell; // @synthesize m_bCustomMakeCell=_m_bCustomMakeCell;
@property(nonatomic) _Bool m_bSortByTime; // @synthesize m_bSortByTime=_m_bSortByTime;
@property(nonatomic) _Bool m_bShowSelf; // @synthesize m_bShowSelf=_m_bShowSelf;
@property(nonatomic) _Bool m_bHideSearchBar; // @synthesize m_bHideSearchBar=_m_bHideSearchBar;
@property(retain, nonatomic) NSArray *m_customMemberList; // @synthesize m_customMemberList;
@property(nonatomic) unsigned int m_scene; // @synthesize m_scene;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
@property(nonatomic) struct CGPoint m_bContentOffset; // @synthesize m_bContentOffset;
@property(nonatomic) _Bool m_bShowWithGrid; // @synthesize m_bShowWithGrid;
@property(nonatomic) int m_commonSearchScene; // @synthesize m_commonSearchScene;
@property(retain, nonatomic) NewContactsSearchPanelView *m_panelView; // @synthesize m_panelView;
@property(nonatomic) __weak id <RoomContactSelectDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CBaseContact *m_roomContact; // @synthesize m_roomContact;
- (void).cxx_destruct;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)sortResultContact:(id)arg1 matchTips:(id)arg2;
- (void)doSearch:(id)arg1;
- (void)onDeleteMember:(id)arg1;
- (void)onDelMemLogicStop:(_Bool)arg1;
- (void)showDelMemView;
- (void)setShowRemoveMember;
- (void)onAddMemLogicStop:(_Bool)arg1;
- (void)addMember;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didSelectContact:(id)arg1;
- (id)getViewController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2 tableView:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onDone;
- (void)onCancel:(id)arg1;
- (void)OnDataChange;
- (id)getCachedSearchHelpDataItem;
- (id)getSearchMatchTip:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (void)initSearchBar;
- (void)initTableView;
- (id)getMemberList;
- (void)reloadMemberListAndView;
- (void)reloadView;
- (void)initData;
- (id)getContactWith:(id)arg1;
- (void)addContact:(id)arg1;
- (id)addSectionKey:(id)arg1;
- (id)GetCompareStrByContact:(id)arg1;
- (void)updateTitleView;
- (void)onModifyContact:(id)arg1;
- (void)openContactInfo:(id)arg1;
- (void)loadMemberList;
- (void)resortMemList;
- (void)reloadProfileGridTableData;
- (double)getMemListCellHeight;
- (void)makeMemListSection:(id)arg1;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)updateMemberView;
- (void)updateToNormalStatusEx;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

