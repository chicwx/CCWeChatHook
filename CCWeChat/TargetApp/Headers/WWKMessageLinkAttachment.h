//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WWKMessageAttachment.h"

@class NSData, NSString;

@interface WWKMessageLinkAttachment : WWKMessageAttachment
{
    NSString *_title;
    NSString *_summary;
    NSString *_url;
    NSString *_iconurl;
    NSData *_icon;
}

@property(retain, nonatomic) NSData *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *iconurl; // @synthesize iconurl=_iconurl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)writeToDict:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

