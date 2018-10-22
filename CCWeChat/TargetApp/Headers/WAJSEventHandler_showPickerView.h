//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WACustomPickerDelegate.h"

@class MMPickerMaskView, NSString, WACommonPickerView;

@interface WAJSEventHandler_showPickerView : WAJSEventHandler_BaseEvent <WACustomPickerDelegate>
{
    WACommonPickerView *_picker;
    MMPickerMaskView *_mask;
    long long _current;
    double _pickerTime;
}

- (void).cxx_destruct;
- (void)onConfirm:(id)arg1;
- (void)onCancel;
- (void)didRotate:(id)arg1;
- (void)hidePicker;
- (void)showPickerView:(id)arg1;
- (void)touchMask:(id)arg1;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

