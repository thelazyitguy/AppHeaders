//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTEditStickerView.h>

#import <Module_Framework/YTEditAdvancedStickerStyle-Protocol.h>
#import <Module_Framework/YTEditStickerUPLModelProvider-Protocol.h>
#import <Module_Framework/YTEditStickerViewLogging-Protocol.h>

@class GIMMe, NSMutableArray, NSMutableDictionary, NSString, YTEditStickerViewModel, YTImageView;

@interface YTEditStickerImageView : YTEditStickerView <YTEditAdvancedStickerStyle, YTEditStickerViewLogging, YTEditStickerUPLModelProvider>
{
    NSMutableArray *_secondaryImages;
    unsigned long long _currentlySelectedImage;
    YTImageView *_contentView;
    NSMutableDictionary *_urlToImageDictionary;
    NSMutableDictionary *_emojiToImageDictionary;
    GIMMe *_gimme;
    YTEditStickerViewModel *_model;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTEditStickerViewModel *model; // @synthesize model=_model;
- (id)stickerUPLModel;
- (id)stickerForGELLogging;
- (void)performSpringAnimationForStickerLayer:(id)arg1;
- (void)fetchImagesFromUrl:(id)arg1;
- (void)getSecondaryImages;
- (double)correctionInsetWithDimension:(double)arg1 minimumDimension:(double)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (_Bool)multipleStyleSupported;
- (_Bool)isStickerDeletionAllowed;
- (void)changeStickerStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)overlayGestureManagerDidEnd:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)overlayGestureManagerWillBegin:(id)arg1 withGestureRecognizer:(id)arg2;
- (_Bool)overlayGestureManagerShouldBeginTransformingView:(id)arg1;
- (void)setUpContentView:(id)arg1;
- (id)currentImage;
- (id)initWithFrame:(struct CGRect)arg1 forStickerModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

