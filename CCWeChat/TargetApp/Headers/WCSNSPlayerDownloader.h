//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPlayerDownloader.h"

@class WCMediaItem;

@interface WCSNSPlayerDownloader : WCPlayerDownloader
{
}

- (void)OnVideoSourceChanged:(id)arg1;
- (void)stopDownloadVideo;
- (void)startWithWithPlayerMode:(unsigned long long)arg1;
- (id)getPlayerMediaId;

// Remaining properties
@property(retain, nonatomic) WCMediaItem *mediaWrap; // @dynamic mediaWrap;

@end

