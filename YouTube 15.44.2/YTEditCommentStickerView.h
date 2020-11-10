//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/TOKOverlayGestureManagerManagedView-Protocol.h>
#import <Module_Framework/YTEditAdvancedStickerStyle-Protocol.h>
#import <Module_Framework/YTEditStickerViewLogging-Protocol.h>

@class MDCShadowLayer, NSMutableArray, NSString, YTFormattedStringLabel, YTICommentStickerRenderer, YTImageView, YTThumbnailController;

@interface YTEditCommentStickerView : UIView <YTEditAdvancedStickerStyle, YTEditStickerViewLogging, TOKOverlayGestureManagerManagedView>
{
    YTFormattedStringLabel *_commentAuthorLabel;
    YTFormattedStringLabel *_commentTextLabel;
    YTFormattedStringLabel *_commentTitle;
    YTImageView *_commentAuthorAvatarImageView;
    YTICommentStickerRenderer *_renderer;
    YTThumbnailController *_thumbnailController;
    NSMutableArray *_stickerColorBlocks;
    unsigned long long _currentStickerStyle;
    long long once;
    MDCShadowLayer *_shadowLayer;
    UIView *_contentView;
    _Bool _commentStickerRemovePII;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTImageView *commentAuthorAvatarImageView; // @synthesize commentAuthorAvatarImageView=_commentAuthorAvatarImageView;
- (id)stickerForGELLogging;
- (void)overlayGestureManagerDidEnd:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)overlayGestureManagerWillBegin:(id)arg1 withGestureRecognizer:(id)arg2;
- (_Bool)overlayGestureManagerShouldBeginTransformingView:(id)arg1;
- (void)createCommentStickerStyles;
- (void)performSpringAnimationForSticker;
- (_Bool)multipleStyleSupported;
- (void)changeStickerStyle:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)isStickerDeletionAllowed;
- (void)layoutSubviews;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)initWithRenderer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

