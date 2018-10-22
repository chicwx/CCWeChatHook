//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIColor;

@interface WCSVGImage : NSObject
{
    NSArray *_styledPaths;
    double _scale;
    UIColor *_tintColor;
    struct CGRect _viewBox;
}

+ (id)svgImageWithContentsOfFile:(id)arg1;
+ (id)svgImageNamed:(id)arg1;
+ (id)imageHLNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
+ (id)imageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
+ (id)imageHLNamed:(id)arg1 size:(struct CGSize)arg2;
+ (id)imageNamed:(id)arg1 size:(struct CGSize)arg2;
+ (id)imageNamed:(id)arg1 color:(id)arg2;
+ (id)imageHLNamed:(id)arg1;
+ (id)imageNamed:(id)arg1;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGRect viewBox; // @synthesize viewBox=_viewBox;
@property(retain, nonatomic) NSArray *styledPaths; // @synthesize styledPaths=_styledPaths;
- (void).cxx_destruct;
- (id)imageAtSize:(struct CGSize)arg1 Alpha:(double)arg2;
- (id)imageAtSize:(struct CGSize)arg1;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 Alpha:(double)arg3;
- (void)drawInContext:(struct CGContext *)arg1 Alpha:(double)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (struct CGImage *)CGImage;
@property(readonly, nonatomic) struct CGSize size;
- (id)imageWithAlpha:(double)arg1;
- (id)imageHL;
- (id)image;
- (id)init;

@end

