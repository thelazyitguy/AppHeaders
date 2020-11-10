//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTImageLoader;

@protocol SPTImageLoaderInstrumentationObserver <NSObject>
- (void)imageLoader:(id <SPTImageLoader>)arg1 didFailLoadingImageWithURI:(NSURL *)arg2;
- (void)imageLoader:(id <SPTImageLoader>)arg1 didFinishLoadingImageWithURI:(NSURL *)arg2;
- (void)imageLoader:(id <SPTImageLoader>)arg1 didBeginLoadingImageWithURI:(NSURL *)arg2;
@end

