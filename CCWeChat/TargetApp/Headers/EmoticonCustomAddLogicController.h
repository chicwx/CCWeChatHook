//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EmoticonCameraDelegate.h"
#import "EmoticonCustomManageAddLogicDelegate.h"
#import "MMUIViewControllerDelegate.h"
#import "WCActionSheetDelegate.h"

@class EmoticonCameraReportObject, EmoticonCustomManageAddLogic, MMUIViewController, NSString;

@interface EmoticonCustomAddLogicController : NSObject <MMUIViewControllerDelegate, EmoticonCameraDelegate, WCActionSheetDelegate, EmoticonCustomManageAddLogicDelegate>
{
    MMUIViewController *m_tmpViewController;
    EmoticonCameraReportObject *m_reportObject;
    id <EmoticonCustomAddLogicControllerDelegate><MMUIViewControllerDelegate> _delegate;
    EmoticonCustomManageAddLogic *_addEmoticonLogic;
}

+ (_Bool)shouldShowEmoticonCameraFollow;
+ (_Bool)shouldShowEmoticonCameraEntrance;
@property(retain, nonatomic) EmoticonCustomManageAddLogic *addEmoticonLogic; // @synthesize addEmoticonLogic=_addEmoticonLogic;
@property(nonatomic) __weak id <EmoticonCustomAddLogicControllerDelegate><MMUIViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)handleEmoticonUploadInfo:(id)arg1 source:(long long)arg2;
- (void)handleGIFInfo:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(_Bool)arg2;
- (void)onEmoticonCameraOpenSelectPhotoFromViewController:(id)arg1;
- (void)onEmoticonCameraDidTakeImgWithUploadInfo:(id)arg1 viewController:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getViewController;
- (_Bool)startExchangePackAndAddEmoticonWithWrap:(id)arg1;
- (void)DismissModalViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)DismissModalViewControllerAnimated:(_Bool)arg1;
- (_Bool)showSelectPhotoWithNeedCheck:(_Bool)arg1 viewController:(id)arg2;
- (_Bool)showTakePhotoWithNeedCheck:(_Bool)arg1 followMsg:(id)arg2 viewController:(id)arg3;
- (_Bool)showActionSheet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

