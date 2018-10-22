//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayTransferPrepayRequestStruct : NSObject
{
    NSString *m_nsReceiverUserName;
    unsigned long long m_uiTotalFee;
    unsigned int m_uiFeeType;
    NSString *m_nsExtInfo;
    unsigned int m_uiPayScene;
    int m_transferScene;
    NSString *m_nsProducetDesc;
    NSString *m_nsFacingPaidID;
    unsigned int m_uiPayChannel;
    unsigned int _dynamic_code_source;
    NSString *_m_nsF2FPayerDesc;
    NSString *_maskTrueName;
    NSString *_receiver_openid;
    NSString *_dynamic_code_url;
    NSString *_mch_name;
    NSString *_nickname;
    NSString *_receiver_true_name;
    NSString *_truenameExtend;
    NSString *_inputName;
    NSString *_checkNameSign;
}

@property(retain, nonatomic) NSString *checkNameSign; // @synthesize checkNameSign=_checkNameSign;
@property(retain, nonatomic) NSString *inputName; // @synthesize inputName=_inputName;
@property(retain, nonatomic) NSString *truenameExtend; // @synthesize truenameExtend=_truenameExtend;
@property(nonatomic) unsigned int dynamic_code_source; // @synthesize dynamic_code_source=_dynamic_code_source;
@property(retain, nonatomic) NSString *receiver_true_name; // @synthesize receiver_true_name=_receiver_true_name;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *mch_name; // @synthesize mch_name=_mch_name;
@property(retain, nonatomic) NSString *dynamic_code_url; // @synthesize dynamic_code_url=_dynamic_code_url;
@property(retain, nonatomic) NSString *receiver_openid; // @synthesize receiver_openid=_receiver_openid;
@property(copy, nonatomic) NSString *maskTrueName; // @synthesize maskTrueName=_maskTrueName;
@property(retain, nonatomic) NSString *m_nsF2FPayerDesc; // @synthesize m_nsF2FPayerDesc=_m_nsF2FPayerDesc;
@property(nonatomic) unsigned int m_uiPayChannel; // @synthesize m_uiPayChannel;
@property(nonatomic) int m_transferScene; // @synthesize m_transferScene;
@property(retain, nonatomic) NSString *m_nsFacingPaidID; // @synthesize m_nsFacingPaidID;
@property(retain, nonatomic) NSString *m_nsProducetDesc; // @synthesize m_nsProducetDesc;
@property(nonatomic) unsigned int m_uiPayScene; // @synthesize m_uiPayScene;
@property(retain, nonatomic) NSString *m_nsExtInfo; // @synthesize m_nsExtInfo;
@property(nonatomic) unsigned long long m_uiTotalFee; // @synthesize m_uiTotalFee;
@property(nonatomic) unsigned int m_uiFeeType; // @synthesize m_uiFeeType;
@property(retain, nonatomic) NSString *m_nsReceiverUserName; // @synthesize m_nsReceiverUserName;
- (void).cxx_destruct;
- (void)dealloc;

@end

