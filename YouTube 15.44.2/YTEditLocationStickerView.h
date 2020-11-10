//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/TOKOverlayGestureManagerManagedView-Protocol.h>
#import <Module_Framework/YTEditAdvancedStickerStyle-Protocol.h>
#import <Module_Framework/YTEditStickerViewLogging-Protocol.h>

@class NSMutableArray, NSString, UIImageView, UILabel, YTEditStickerViewModel;

@interface YTEditLocationStickerView : UIView <YTEditAdvancedStickerStyle, YTEditStickerViewLogging, TOKOverlayGestureManagerManagedView>
{
    UIImageView *_iconView;
    UILabel *_labelView;
    NSMutableArray *_stickerColorBlocks;
    unsigned long long _currentStickerStyle;
    UIView *_contentView;
    YTEditStickerViewModel *_model;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTEditStickerViewModel *model; // @synthesize model=_model;
- (id)stickerForGELLogging;
- (void)overlayGestureManagerDidEnd:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)overlayGestureManagerWillBegin:(id)arg1 withGestureRecognizer:(id)arg2;
- (_Bool)overlayGestureManagerShouldBeginTransformingView:(id)arg1;
- (void)layoutSubviews;
- (void)setUpSubviews;
- (void)createLocationStickerStyles;
- (void)performSpringAnimationForStickerLayer:(id)arg1;
- (_Bool)multipleStyleSupported;
- (_Bool)isStickerDeletionAllowed;
- (void)changeStickerStyle:(long long)arg1 animated:(_Bool)arg2;
- (id)imageFromView;
- (id)initWithFrame:(struct CGRect)arg1 forStickerModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

