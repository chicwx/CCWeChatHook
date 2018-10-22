//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface FTSMsgContentItem : NSObject <WCTTableCoding>
{
    unsigned int userNameId;
    unsigned int msgLocalId;
    unsigned int createTime;
    unsigned int _reservedInt;
    NSString *msg;
    NSString *_reservedText;
}

+ (void)__wcdb_FTSMsgContentItem_multi_primary_13:(struct WCTBinding *)arg1;
+ (void)__wcdb_FTSMsgContentItem_multi_primary_12:(struct WCTBinding *)arg1;
+ (void)__wcdb_FTSMsgContentItem_multi_primary_11:(struct WCTBinding *)arg1;
+ (void)__wcdb_FTSMsgContentItem_virtual_table_module_10:(struct WCTBinding *)arg1;
+ (void)__wcdb_FTSMsgContentItem_virtual_table_argument_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)reservedText;
+ (void)__wcdb_FTSMsgContentItem_synthesize_8:(struct WCTBinding *)arg1;
+ (void)__wcdb_FTSMsgContentItem_default_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)reservedInt;
+ (void)__wcdb_FTSMsgContentItem_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msg;
+ (void)__wcdb_FTSMsgContentItem_synthesize_5:(struct WCTBinding *)arg1;
+ (void)__wcdb_FTSMsgContentItem_default_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createTime;
+ (void)__wcdb_FTSMsgContentItem_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgLocalId;
+ (void)__wcdb_FTSMsgContentItem_synthesize_2:(struct WCTBinding *)arg1;
+ (void)__wcdb_FTSMsgContentItem_default_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)userNameId;
+ (void)__wcdb_FTSMsgContentItem_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSString *reservedText; // @synthesize reservedText=_reservedText;
@property(nonatomic) unsigned int reservedInt; // @synthesize reservedInt=_reservedInt;
@property(retain, nonatomic) NSString *msg; // @synthesize msg;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId;
@property(nonatomic) unsigned int userNameId; // @synthesize userNameId;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
