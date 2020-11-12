//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class AFImageDownloadReceipt, AFRKImageRequestOperation;

@interface UIImageView (libFunny)
+ (void)setSharedImageDownloader:(id)arg1;
+ (id)sharedImageDownloader;
+ (id)afrk_sharedImageCache;
+ (id)afrk_sharedImageRequestOperationQueue;
+ (CDUnknownBlockType)stkPlaceholderFastImageCache;
+ (CDUnknownBlockType)stkFastBitmap;
+ (CDUnknownBlockType)stkFastImageCache;
+ (id)stk_fastImageQueue;
- (void)if_animatedSetImageWithUrl:(id)arg1;
@property(retain, nonatomic, setter=af_setActiveImageDownloadReceipt:) AFImageDownloadReceipt *af_activeImageDownloadReceipt;
- (_Bool)isActiveTaskURLEqualToURLRequest:(id)arg1;
- (void)clearActiveDownloadInformation;
- (void)cancelImageDownloadTask;
- (void)setImageWithURLRequest:(id)arg1 placeholderImage:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)setImageWithURL:(id)arg1;
- (void)afrk_cancelImageRequestOperation;
- (void)afrk_setImageWithURLRequest:(id)arg1 placeholderImage:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)afrk_setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)afrk_setImageWithURL:(id)arg1;
@property(retain, nonatomic, setter=afrk_setImageRequestOperation:) AFRKImageRequestOperation *afrk_imageRequestOperation; // @dynamic afrk_imageRequestOperation;
- (void)sd_setHighlightedImageWithURL:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (void)sd_setHighlightedImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (void)sd_setHighlightedImageWithURL:(id)arg1 options:(unsigned long long)arg2 completed:(CDUnknownBlockType)arg3;
- (void)sd_setHighlightedImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)sd_setHighlightedImageWithURL:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3;
- (void)sd_setHighlightedImageWithURL:(id)arg1 options:(unsigned long long)arg2;
- (void)sd_setHighlightedImageWithURL:(id)arg1;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 context:(id)arg4 progress:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 completed:(CDUnknownBlockType)arg4;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)sd_setImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 context:(id)arg4;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)sd_setImageWithURL:(id)arg1;
@property(readonly, nonatomic) CDUnknownBlockType stkPlaceholderFastImageCache;
@property(readonly, nonatomic) CDUnknownBlockType stkFastImageCache;
- (_Bool)fbad_containsImage:(id)arg1;
- (void)fbad_setIcon:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)if_loadAnimationWithFeedAnimationType:(unsigned long long)arg1;
- (void)loadAnimationWithPrefix:(id)arg1 numberOfSlides:(unsigned long long)arg2 repeatCount:(unsigned long long)arg3;
- (void)loadSummaryGuideAnimation;
- (void)loadCommentsGuideAnimation;
- (void)loadIntroPageGuideAnimation;
- (void)loadResetUnsmileAnimation;
- (void)loadUnsmileAnimation;
- (void)loadResetSmileAnimation;
- (void)loadSmileAnimation;
- (void)loadResetRepubAnimation;
- (void)loadRepubAnimation;
- (void)loadUnpinAnimation;
- (void)loadPinAnimation;
@end
