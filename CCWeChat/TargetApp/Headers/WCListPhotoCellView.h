//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCListBaseCellView.h"

@class UIView;

@interface WCListPhotoCellView : WCListBaseCellView
{
    UIView *m_imageGridView;
}

+ (double)calculateHeightForRowData:(id)arg1 isFirstOneInsection:(_Bool)arg2 isLastOneInSection:(_Bool)arg3;
- (void).cxx_destruct;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)handleClickImageView:(id)arg1;
- (id)findActiveView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)initView;
- (void)initImageGridView;

@end

