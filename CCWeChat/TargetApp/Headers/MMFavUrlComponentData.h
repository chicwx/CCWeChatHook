//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMComponentData.h"

@class NSArray, NSString;

@interface MMFavUrlComponentData : MMComponentData
{
    _Bool _m_leftHasImage;
    NSString *m_title;
    NSString *m_nameId;
    NSString *m_des;
    long long favType;
    NSArray *_m_chatNames;
    NSArray *_m_chatContents;
}

@property(retain, nonatomic) NSArray *m_chatContents; // @synthesize m_chatContents=_m_chatContents;
@property(retain, nonatomic) NSArray *m_chatNames; // @synthesize m_chatNames=_m_chatNames;
@property(nonatomic) _Bool m_leftHasImage; // @synthesize m_leftHasImage=_m_leftHasImage;
@property(nonatomic) long long favType; // @synthesize favType;
@property(retain, nonatomic) NSString *m_des; // @synthesize m_des;
@property(retain, nonatomic) NSString *m_nameId; // @synthesize m_nameId;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
- (void).cxx_destruct;

@end

