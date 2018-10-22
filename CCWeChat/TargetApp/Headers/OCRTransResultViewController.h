//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IOCRTransMgrExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class MMLoadingView, NSArray, NSMutableDictionary, NSString, OCRTransReport, UIButton, UIColor, UIImage, UIImageView, UILabel, UIScrollView, UIView;

@interface OCRTransResultViewController : MMUIViewController <IOCRTransMgrExt, UIScrollViewDelegate, MMTipsViewControllerDelegate>
{
    UIImageView *_souceImageView;
    UIView *_resultView;
    MMLoadingView *_loadingView;
    _Bool _showOrigin;
    NSMutableDictionary *_fontDic;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIColor *_bgColor;
    UIColor *_textColor;
    struct CGPoint _offsetPoint;
    struct CGRect _newImageRect;
    char *_rgba;
    UILabel *_tipLabel;
    UIButton *_closeBtn;
    UIButton *_showOriginBtn;
    UIButton *_saveBtn;
    UIImageView *_topBar;
    UIImageView *_bottomBar;
    struct CGRect _imageRect;
    _Bool _viewIsAppeared;
    UIImage *_showOriginNormalImage;
    UIImage *_showOriginSelectedImage;
    UIImage *_showOriginNormalImageHL;
    UIImage *_showOriginSelectedImageHL;
    unsigned long long _ZHResultStrCount;
    unsigned long long _allResultStrCount;
    UIImage *_image;
    UIImage *_grayImage;
    NSArray *_translations;
    double _angle;
    OCRTransReport *_transReport;
    CDUnknownBlockType _closeBlock;
    UIView *_animationView;
    UIView *_topLine;
    UIView *_rightLine;
    UIView *_bottomLine;
    UIView *_leftLine;
    UIImageView *_scanLineImgView;
    struct CGRect _imageCropRect;
}

@property(retain, nonatomic) UIImageView *scanLineImgView; // @synthesize scanLineImgView=_scanLineImgView;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) OCRTransReport *transReport; // @synthesize transReport=_transReport;
@property(nonatomic) struct CGRect imageCropRect; // @synthesize imageCropRect=_imageCropRect;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(retain, nonatomic) NSArray *translations; // @synthesize translations=_translations;
@property(retain, nonatomic) UIImage *grayImage; // @synthesize grayImage=_grayImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)saveToAlbum:(id)arg1;
- (void)setBackgroundAndTextColorForLabel:(id)arg1 withInfo:(id)arg2;
- (void)close;
- (void)OnSendOCRImage:(id)arg1 pbCGIWrap:(id)arg2;
- (void)getBitmap;
- (void)OnOploadOCRImageFinish:(_Bool)arg1;
- (void)OnTakeOCRGrayImage:(id)arg1;
- (void)OnTakeOCRImage:(id)arg1;
- (void)switchText;
- (void)updateAngle;
- (void)expandToLeftForInfo:(id)arg1 font:(id)arg2;
- (void)expandToUpForInfo:(id)arg1 font:(id)arg2;
- (void)expandToDownForInfo:(id)arg1 font:(id)arg2;
- (void)expandToRightForInfo:(id)arg1 font:(id)arg2;
- (void)expandForInfo:(id)arg1 withFont:(id)arg2;
- (struct CGSize)sizeForText:(id)arg1 withSize:(struct CGSize)arg2 font:(id)arg3 isMerge:(_Bool)arg4;
- (void)setupShowOriginButtonImage;
- (void)updateResult;
- (void)setTranslations:(id)arg1 andAngle:(double)arg2;
- (void)adjustViewAndTryToAnimate;
- (void)animate;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

