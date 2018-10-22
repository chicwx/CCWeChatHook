//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIWindow.h"

@class MMStringToastView;

@interface MMVoipToastWindow : MMUIWindow
{
    MMStringToastView *m_stringView;
    long long _m_lastOrientation;
    struct CGRect m_fixRect;
}

@property(nonatomic) long long m_lastOrientation; // @synthesize m_lastOrientation=_m_lastOrientation;
@property(nonatomic) struct CGRect m_fixRect; // @synthesize m_fixRect;
@property(retain, nonatomic) MMStringToastView *m_stringView; // @synthesize m_stringView;
- (void).cxx_destruct;
- (void)rotateToOrientation:(long long)arg1;
- (void)initWithOrientation:(long long)arg1;
- (void)statusBarDidRotate;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)clearCurrentString;
- (void)changeOriginY:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

