//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"
#import "WCTColumnCoding.h"

@class NSArray, NSString;

@interface WAStatePermissionBytes : NSObject <PBCoding, WCTColumnCoding>
{
    NSArray *arrStatePermissionBytes;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSArray *arrStatePermissionBytes; // @synthesize arrStatePermissionBytes;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)archivedWCTValue;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

