//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact;

@protocol SelectContactsViewControllerDelegate <NSObject>
- (void)onSelectContactReturn:(CContact *)arg1 atScene:(unsigned int)arg2;

@optional
- (_Bool)onFilterContactCandidate:(CContact *)arg1;
- (void)onSelectContactCancel;
@end

