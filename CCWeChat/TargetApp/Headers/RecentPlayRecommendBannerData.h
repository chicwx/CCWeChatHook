//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString, RecentPlayBannerB;

@interface RecentPlayRecommendBannerData : MMObject <PBCoding>
{
    NSString *bannerABigPicUrl;
    NSString *bannerAJumpUrl;
    RecentPlayBannerB *bannerB;
}

+ (void)initialize;
@property(retain, nonatomic) RecentPlayBannerB *bannerB; // @synthesize bannerB;
@property(retain, nonatomic) NSString *bannerAJumpUrl; // @synthesize bannerAJumpUrl;
@property(retain, nonatomic) NSString *bannerABigPicUrl; // @synthesize bannerABigPicUrl;
- (void).cxx_destruct;
- (void)parse:(id)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

