//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSDKGraphRequest, NSDictionary;

@interface FBSDKGraphRequestMetadata : NSObject
{
    FBSDKGraphRequest *_request;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_batchParameters;
}

@property(copy, nonatomic) NSDictionary *batchParameters; // @synthesize batchParameters=_batchParameters;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) FBSDKGraphRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)invokeCompletionHandlerForConnection:(id)arg1 withResults:(id)arg2 error:(id)arg3;
- (id)init;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 batchParameters:(id)arg3;

@end

