//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying.h"

@interface MMAlbum : MMObject <NSCopying>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)lastAssetWithSecond:(double)arg1;
- (void)retriveCoverImageWithAsyncBlock:(CDUnknownBlockType)arg1;
- (void)retrivePhotoCountWithAsyncBlock:(CDUnknownBlockType)arg1;
- (void)stopICloudActivity;
- (id)assetOfIndex:(unsigned long long)arg1;
- (void)shouldIncludeVideoAsset:(_Bool)arg1;
- (id)coverImage;
- (unsigned long long)photosCount;
- (id)name;
- (id)albumId;

@end

