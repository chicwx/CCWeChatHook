//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseResp.h"

@class NSString, WXMediaMessage;

@interface GetMessageFromWXResp : BaseResp
{
    _Bool bText;
    NSString *text;
    WXMediaMessage *message;
}

@property(nonatomic) _Bool bText; // @synthesize bText;
@property(retain, nonatomic) WXMediaMessage *message; // @synthesize message;
@property(retain, nonatomic) NSString *text; // @synthesize text;
- (void).cxx_destruct;
- (id)init;

@end

