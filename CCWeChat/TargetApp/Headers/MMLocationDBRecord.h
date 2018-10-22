//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface MMLocationDBRecord : NSObject <WCTTableCoding>
{
    int _m_latitude;
    int _m_longitude;
    NSString *_m_address;
}

+ (const struct WCTProperty *)m_address;
+ (void)__wcdb_MMLocationDBRecord_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_longitude;
+ (void)__wcdb_MMLocationDBRecord_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_latitude;
+ (void)__wcdb_MMLocationDBRecord_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSString *m_address; // @synthesize m_address=_m_address;
@property(nonatomic) int m_longitude; // @synthesize m_longitude=_m_longitude;
@property(nonatomic) int m_latitude; // @synthesize m_latitude=_m_latitude;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

