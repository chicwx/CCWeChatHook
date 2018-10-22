//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface UpdateWechatRedDotConfig : NSObject <PBCoding>
{
    unsigned int uiHasShowReddotlevel;
    unsigned int _uiClientVersion;
    unsigned int _uiReddotlevel;
    unsigned int _uiExpireTime;
    NSString *nsNewXml;
    NSString *_nsWording;
    NSString *_nsUrl;
}

+ (id)getUpdateWechatRedDotConfig;
+ (void)saveUpdateWechatRedDotCofig:(id)arg1;
+ (id)loadUpdateWechatRedDotConfig;
+ (id)updateWechatRedDotPath;
+ (void)receiveUpdateWechatRedDot:(id)arg1;
+ (void)reportConfig:(id)arg1 Opcode:(unsigned int)arg2 OldConfig:(id)arg3;
+ (void)initialize;
@property(nonatomic) unsigned int uiExpireTime; // @synthesize uiExpireTime=_uiExpireTime;
@property(nonatomic) unsigned int uiReddotlevel; // @synthesize uiReddotlevel=_uiReddotlevel;
@property(nonatomic) unsigned int uiClientVersion; // @synthesize uiClientVersion=_uiClientVersion;
@property(retain, nonatomic) NSString *nsUrl; // @synthesize nsUrl=_nsUrl;
@property(retain, nonatomic) NSString *nsWording; // @synthesize nsWording=_nsWording;
@property(retain, nonatomic) NSString *nsNewXml; // @synthesize nsNewXml;
@property(nonatomic) unsigned int uiHasShowReddotlevel; // @synthesize uiHasShowReddotlevel;
- (void).cxx_destruct;
- (void)setUpdateHasShowUpdateWechatRedDot;
- (void)setAboutHasShowUpdateWechatRedDot;
- (void)setSettingHasShowUpdateWechatRedDot;
- (void)setMoreHasShowUpdateWechatRedDot;
- (id)getUpdateWechatCellWording;
- (_Bool)shouldUpdateShowUpdateWechatRedDot;
- (_Bool)shouldAboutShowUpdateWechatRedDot;
- (_Bool)shouldSettingShowUpdateWechatRedDot;
- (_Bool)shouldMoreShowUpdateWechatRedDot;
- (void)parseUpdateWechatRedDot:(id)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

