//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMBubbleLayer : NSObject
{
    int _arrowDirection;
    double _cornerRadius;
    double _arrowHeight;
    double _arrowWidth;
    double _arrowPosition;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double arrowPosition; // @synthesize arrowPosition=_arrowPosition;
@property(nonatomic) int arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) double arrowWidth; // @synthesize arrowWidth=_arrowWidth;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id)bubblePath;
- (struct CGRect)contentFrame;
- (id)centerOfCorner;
- (id)keyPointAtcorner;
- (id)arrowPoints;
- (id)layerForSize:(struct CGSize)arg1;
- (void)setArrowPositionAtPos:(double)arg1 baseLen:(double)arg2;
- (id)init;

@end

