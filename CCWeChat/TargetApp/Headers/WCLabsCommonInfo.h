//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCLabsCommonInfo : MMObject <PBCoding>
{
    _Bool hasShowNewRedDotInLabEntrance;
    _Bool shouldShowGerneralRedDotInLabEntrance;
    unsigned int uiShowLabTipCnt;
}

+ (void)initialize;
@property(nonatomic) _Bool shouldShowGerneralRedDotInLabEntrance; // @synthesize shouldShowGerneralRedDotInLabEntrance;
@property(nonatomic) _Bool hasShowNewRedDotInLabEntrance; // @synthesize hasShowNewRedDotInLabEntrance;
@property(nonatomic) unsigned int uiShowLabTipCnt; // @synthesize uiShowLabTipCnt;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

