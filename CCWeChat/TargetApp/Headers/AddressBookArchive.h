//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableSet, NSString;

@interface AddressBookArchive : NSObject <PBCoding>
{
    NSMutableSet *phones;
    NSMutableSet *emails;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableSet *emails; // @synthesize emails;
@property(retain, nonatomic) NSMutableSet *phones; // @synthesize phones;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

