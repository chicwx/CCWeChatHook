//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ReaderTopNewWrap : NSObject
{
    NSString *m_nsCover;
    NSString *m_nsSquareCover;
    NSString *m_nsDigest;
    unsigned int m_uiCoverWidth;
    unsigned int m_uiCoverHeight;
}

@property(nonatomic) unsigned int m_uiCoverHeight; // @synthesize m_uiCoverHeight;
@property(nonatomic) unsigned int m_uiCoverWidth; // @synthesize m_uiCoverWidth;
@property(retain, nonatomic) NSString *m_nsDigest; // @synthesize m_nsDigest;
@property(retain, nonatomic) NSString *m_nsSquareCover; // @synthesize m_nsSquareCover;
@property(retain, nonatomic) NSString *m_nsCover; // @synthesize m_nsCover;
- (void).cxx_destruct;
- (void)dealloc;

@end

