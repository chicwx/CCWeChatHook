//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ClickStatSwizzleExt.h"

@interface WCEventTrackingSystem : NSObject <ClickStatSwizzleExt>
{
}

+ (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
+ (void)onSendEvent:(id)arg1;
+ (id)currentConfig;
+ (_Bool)openTrackingSystem;
+ (id)getCellLog:(id)arg1;
+ (_Bool)isPrivacy:(id)arg1;
+ (void)trackSwitch:(id)arg1 action:(SEL)arg2 to:(id)arg3 from:(id)arg4;
+ (void)trackAlertAction:(id)arg1;
+ (void)trackCell:(id)arg1;
+ (void)trackRichTextView:(id)arg1;
+ (void)trackUIButton:(id)arg1;
+ (void)trackSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
+ (void)trackEvent:(id)arg1;

@end

