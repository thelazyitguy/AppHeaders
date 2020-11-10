//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class HTTPRequestTask, NSString, UILabel;

@interface UIImageView (NetflixUI)
+ (id)nflx_getImageAsset:(id)arg1 fromSprite:(id)arg2 withMetadata:(id)arg3;
+ (id)nflx_setImageType:(id)arg1 forUrl:(id)arg2;
+ (id)nflx_hashStringForURLString:(id)arg1 withSize:(struct CGSize)arg2;
+ (void)logAllPendingDurationsUsingImageLogger;
+ (void)nflx_clearImageCache;
+ (void)nflx_setCachedImage:(id)arg1 forURLString:(id)arg2 size:(struct CGSize)arg3;
+ (id)nflx_cachedImageForURL:(id)arg1 withSize:(struct CGSize)arg2;
+ (id)nflx_cachedImageForURL:(id)arg1;
+ (id)nflx_legacyImageLogger;
+ (id)nflx_sharedImageCache;
- (void)nflx_automationMarkImageLoaded:(_Bool)arg1;
- (_Bool)tryLoadFromCacheForHashstring:(id)arg1 isFallback:(_Bool)arg2 size:(struct CGSize)arg3 animated:(_Bool)arg4 success:(CDUnknownBlockType)arg5;
- (void)nflx_setResizedImageWithURLString:(id)arg1 targetSize:(struct CGSize)arg2 fallbackSize:(struct CGSize)arg3 fallbackUrl:(id)arg4 syncCacheRead:(_Bool)arg5 animated:(_Bool)arg6 success:(CDUnknownBlockType)arg7;
- (void)showImage:(id)arg1 didComplete:(_Bool)arg2 wasInCache:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)nflx_showImage:(id)arg1 ifHasCorrectHash:(id)arg2 size:(struct CGSize)arg3 animated:(_Bool)arg4 success:(CDUnknownBlockType)arg5;
- (void)nflx_showImage:(id)arg1 animated:(_Bool)arg2;
- (void)nflx_stopAnimatingBetweenImages;
- (void)nflx_animateBetweenImages:(id)arg1 intervalPerImage:(double)arg2;
- (void)nflx_cancelImageRequestTask;
- (void)nflx_setResizedImageWithURLStrings:(id)arg1 placeholderImage:(id)arg2 initialAlphaIsZero:(_Bool)arg3 size:(struct CGSize)arg4 syncCacheRead:(_Bool)arg5 forceAnimation:(_Bool)arg6 success:(CDUnknownBlockType)arg7;
- (_Bool)nflx_isImageCachedInMemory:(id)arg1 size:(struct CGSize)arg2;
- (_Bool)nflx_isImageCached:(id)arg1 size:(struct CGSize)arg2;
- (_Bool)nflx_isImageCachedInMemory:(id)arg1;
- (_Bool)nflx_isImageCached:(id)arg1;
- (void)nflx_setResizedImageWithURLString:(id)arg1 placeholderImage:(id)arg2 initialAlphaIsZero:(_Bool)arg3 size:(struct CGSize)arg4 syncCacheRead:(_Bool)arg5 success:(CDUnknownBlockType)arg6;
- (void)nflx_setResizedImageWithURLString:(id)arg1 syncCacheRead:(_Bool)arg2;
- (void)nflx_setResizedImageWithURLString:(id)arg1;
- (void)nflx_setImageWithURLString:(id)arg1 forceAnimation:(_Bool)arg2 success:(CDUnknownBlockType)arg3;
- (void)nflx_setImageWithURLString:(id)arg1 placeholderImage:(id)arg2 initialAlphaIsZero:(_Bool)arg3 syncCacheRead:(_Bool)arg4 success:(CDUnknownBlockType)arg5;
- (void)nflx_setImageWithURLString:(id)arg1 syncCacheRead:(_Bool)arg2 success:(CDUnknownBlockType)arg3;
- (void)nflx_setImageWithURLString:(id)arg1 initialAlphaIsZero:(_Bool)arg2 success:(CDUnknownBlockType)arg3;
- (void)nflx_setImageWithURLString:(id)arg1 success:(CDUnknownBlockType)arg2;
- (void)nflx_setImageWithURLString:(id)arg1 placeholderImage:(id)arg2;
- (void)nflx_setImageWithURLString:(id)arg1;
@property(retain, nonatomic) NSString *nflx_currentURLHash;
- (void)nflx_setImageContext:(id)arg1;
- (id)nflx_imageContext;
@property(retain, nonatomic, setter=nflx_setImageRequestTask:) HTTPRequestTask *nflx_imageRequestTask;
- (void)setRequest:(id)arg1;
- (id)request;
- (CDUnknownBlockType)nflx_prepareCompletionBlock:(CDUnknownBlockType)arg1;
- (void)nflx_setImageWithRequest:(id)arg1;
- (_Bool)nflx_imageViewIsStillValidForDisplay:(id)arg1;
- (void)setFallbackText:(id)arg1;
@property(retain, nonatomic) UILabel *fallbackLabel; // @dynamic fallbackLabel;
@end

