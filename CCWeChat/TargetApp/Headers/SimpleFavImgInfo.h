//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SimpleMsgInfo.h"

#import "ICdnComMgrExt.h"

@class FavoritesItem, FavoritesItemDataField, NSString;

@interface SimpleFavImgInfo : SimpleMsgInfo <ICdnComMgrExt>
{
    FavoritesItemDataField *_m_favData;
    FavoritesItem *_m_favItem;
}

@property(retain, nonatomic) FavoritesItem *m_favItem; // @synthesize m_favItem=_m_favItem;
@property(retain, nonatomic) FavoritesItemDataField *m_favData; // @synthesize m_favData=_m_favData;
- (void).cxx_destruct;
- (void)dealloc;
- (void)OnCdnDownload:(id)arg1;
- (_Bool)isVideoMsg;
- (_Bool)isImgMsg;
- (id)getDefaultImg;
- (unsigned int)getVideoTime;
- (id)getSightPath;
- (id)getImgPath;
- (id)getSquareImgDir;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

