//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1ImageViewFetchHelperDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, TFNTwitterAccount, TIPImagePipeline;
@protocol NSObject;

@interface T1MultiPhotoView : UIView <T1ImageViewFetchHelperDelegate>
{
    id <NSObject> _updateNotificationObservers[4];
    _Bool _useAdaptiveMediaLayout;
    _Bool _borderHidden;
    _Bool _imageViewSubviewsAccessibilityDisabled;
    _Bool _shouldIgnoreFocusRectangles;
    unsigned long long _numberOfVisibleImageViews;
    NSArray *_inlineMediaInfos;
    long long _inlineMediaSourceStatusId;
    CDUnknownBlockType _multiPhotoTapBlock;
    CDUnknownBlockType _multiPhotoLongPressBlock;
    CDUnknownBlockType _multiPhotoLoadedBlock;
    CDUnknownBlockType _multiPhotoLoadFailedBlock;
    double _gutterWidth;
    double _borderCornerRadius;
    TFNTwitterAccount *_account;
    TIPImagePipeline *_imagePipeline;
    NSMutableArray *_imageViews;
    NSMutableArray *_imageBorderLayers;
    unsigned long long _options;
}

+ (double)_compactVerticalLayoutSeparatorWidth;
+ (CDStruct_5e758c1a)_compactVerticalLayoutMinimumMultiPhotoAspectRatioForImageCount:(long long)arg1;
+ (CDStruct_5e758c1a)_compactVerticalLayoutMaximumMultiPhotoAspectRatioForImageCount:(long long)arg1;
+ (CDStruct_5e758c1a)_compactVerticalLayoutMaximumSinglePhotoAspectRatio;
+ (CDStruct_5e758c1a)_compactVerticalLayoutBoundingBoxAspectRatio;
+ (struct CGSize)_croppedImageSizeConstrainedToHeight:(double)arg1 imageSize:(struct CGSize)arg2 maxAspectRatio:(CDStruct_5e758c1a)arg3 minAspectRatio:(CDStruct_5e758c1a)arg4;
+ (struct CGRect)_compactVerticalFrameForImageAtIndex:(long long)arg1 withinMediaInfos:(id)arg2 withinBoundingSize:(struct CGSize)arg3;
+ (struct CGSize)_compactVerticalBoundingSizeForMediaInfos:(id)arg1 withinWidth:(double)arg2 primaryImageSize:(struct CGSize)arg3;
+ (struct CGSize)_t1_targetSinglePreviewImageSizeForTweetDetailsWidth:(double)arg1;
+ (_Bool)_isImageSizePanoramic:(struct CGSize)arg1;
+ (double)adaptiveMediaHeightForWidth:(double)arg1 imageSize:(struct CGSize)arg2 maxAspectRatio:(CDStruct_5e758c1a)arg3;
+ (struct CGSize)preferredSizeForWidth:(double)arg1 mediaInfos:(id)arg2 primaryMediaInfo:(id)arg3 mediaParameters:(id)arg4 attachmentType:(unsigned long long)arg5 displayType:(unsigned long long)arg6 options:(unsigned long long)arg7;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSMutableArray *imageBorderLayers; // @synthesize imageBorderLayers=_imageBorderLayers;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(nonatomic) _Bool shouldIgnoreFocusRectangles; // @synthesize shouldIgnoreFocusRectangles=_shouldIgnoreFocusRectangles;
@property(nonatomic) _Bool imageViewSubviewsAccessibilityDisabled; // @synthesize imageViewSubviewsAccessibilityDisabled=_imageViewSubviewsAccessibilityDisabled;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool borderHidden; // @synthesize borderHidden=_borderHidden;
@property(nonatomic) double borderCornerRadius; // @synthesize borderCornerRadius=_borderCornerRadius;
@property(nonatomic) double gutterWidth; // @synthesize gutterWidth=_gutterWidth;
@property(nonatomic) _Bool useAdaptiveMediaLayout; // @synthesize useAdaptiveMediaLayout=_useAdaptiveMediaLayout;
@property(copy, nonatomic) CDUnknownBlockType multiPhotoLoadFailedBlock; // @synthesize multiPhotoLoadFailedBlock=_multiPhotoLoadFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType multiPhotoLoadedBlock; // @synthesize multiPhotoLoadedBlock=_multiPhotoLoadedBlock;
@property(copy, nonatomic) CDUnknownBlockType multiPhotoLongPressBlock; // @synthesize multiPhotoLongPressBlock=_multiPhotoLongPressBlock;
@property(copy, nonatomic) CDUnknownBlockType multiPhotoTapBlock; // @synthesize multiPhotoTapBlock=_multiPhotoTapBlock;
@property(readonly, nonatomic) long long inlineMediaSourceStatusId; // @synthesize inlineMediaSourceStatusId=_inlineMediaSourceStatusId;
@property(readonly, nonatomic) NSArray *inlineMediaInfos; // @synthesize inlineMediaInfos=_inlineMediaInfos;
@property(readonly, nonatomic) unsigned long long numberOfVisibleImageViews; // @synthesize numberOfVisibleImageViews=_numberOfVisibleImageViews;
- (struct CGRect)_compactVerticalFrameForImageAtIndex:(unsigned long long)arg1;
- (void)_updateAccessibilityLabels;
- (void)t1_fetchHelper:(id)arg1 readyToConfigureView:(id)arg2 state:(long long)arg3;
- (long long)tfn_scaleAspectFillFocusModeForFetchHelper:(id)arg1;
- (id)tfn_focusRectanglesForFocusMode:(long long)arg1 inBounds:(struct CGRect)arg2 forFetchHelper:(id)arg3;
- (void)t1_fetchHelper:(id)arg1 didLoadInitialImageFromSource:(long long)arg2;
- (void)t1_fetchHelper:(id)arg1 didFailToLoadImageWithError:(id)arg2;
- (void)_multiPhotoDidLongPress:(id)arg1;
- (void)_multiPhotoDidTap:(id)arg1;
- (struct CGRect)_frameForImageAtIndex:(unsigned long long)arg1;
- (struct CGRect)_landscapeFourPhotoFrameForImageAtIndex:(unsigned long long)arg1 withNumberOfRows:(unsigned long long)arg2;
- (struct CGRect)_adaptiveFrameForImageAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isPrimaryImagePanoramic;
@property(readonly, nonatomic) _Bool isPrimaryImageLandscape;
- (struct CGSize)_primaryImageSize;
- (unsigned long long)rectCornerForImageAtIndex:(unsigned long long)arg1;
- (void)_layoutImageView:(id)arg1 atIndex:(unsigned long long)arg2 layoutMetrics:(id)arg3;
- (void)layoutSubviews;
- (void)_t1_addAltTextBadgeToImageView:(id)arg1;
- (id)_initializePlaceholderView;
- (id)_initializeImageViewAtIndex:(unsigned long long)arg1;
- (void)_updateNumberOfVisibleImageViews:(unsigned long long)arg1;
- (id)_paletteForIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)reset;
- (_Bool)haveAllImagesBeenDownloaded;
@property(retain, nonatomic) NSArray *images;
- (void)setInlineMediaInfos:(id)arg1 fromSourceStatusId:(long long)arg2 options:(unsigned long long)arg3;
- (id)mediaInfoAtIndex:(unsigned long long)arg1;
- (long long)imageContentModeAtIndex:(unsigned long long)arg1;
- (struct CGRect)imageContentsRectAtIndex:(unsigned long long)arg1;
- (id)imageViewAtIndex:(unsigned long long)arg1;
- (id)imageAtIndex:(unsigned long long)arg1;
- (long long)imageIndexAtPoint:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1 images:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

