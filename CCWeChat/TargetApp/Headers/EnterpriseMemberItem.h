//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface EnterpriseMemberItem : MMObject <PBCoding>
{
    NSString *m_nsUsrName;
    NSString *m_nsContactDisplayName;
    unsigned long long m_uiContactVer;
}

+ (void)initialize;
@property(nonatomic) unsigned long long m_uiContactVer; // @synthesize m_uiContactVer;
@property(retain, nonatomic) NSString *m_nsContactDisplayName; // @synthesize m_nsContactDisplayName;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

