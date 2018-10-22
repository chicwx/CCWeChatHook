//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EditImageDeleteBarView, EditImageModView, EditImageUIView, EditImageWidgetTool;

@protocol EditImageWidgetToolDelegate <NSObject>
@property(retain, nonatomic) EditImageDeleteBarView *_deleteBar;
- (void)addNewWidget:(EditImageWidgetTool *)arg1;
- (double)scrollViewZoomScale;
- (int)checkToolType;
- (void)updateViewIndex;
- (void)bringWidgetviewBack:(EditImageWidgetTool *)arg1;
- (void)bringWidgetviewToFront:(EditImageWidgetTool *)arg1;
- (void)removeSubview:(EditImageUIView *)arg1;
- (void)widgetToolBecomeFirstResponder:(EditImageWidgetTool *)arg1;
- (void)endGesture:(EditImageModView *)arg1;
- (void)startGesture;
@end

