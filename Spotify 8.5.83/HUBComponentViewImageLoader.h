//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBImageLoaderDelegate-Protocol.h"

@class NSMutableDictionary;
@protocol HUBImageLoader;

@interface HUBComponentViewImageLoader : NSObject <HUBImageLoaderDelegate>
{
    id <HUBImageLoader> _imageLoader;
    NSMutableDictionary *_componentImageLoadingContexts;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *componentImageLoadingContexts; // @synthesize componentImageLoadingContexts=_componentImageLoadingContexts;
@property(readonly, nonatomic) id <HUBImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
- (void)imageLoader:(id)arg1 didFailLoadingImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 context:(id)arg4;
- (void)handleComponentImageFailedWithError:(id)arg1 forURL:(id)arg2 context:(id)arg3;
- (void)handleLoadedComponentImage:(id)arg1 forURL:(id)arg2 context:(id)arg3;
- (id)imageDataFromContext:(id)arg1 componentModel:(id)arg2;
- (id)uniqueIdentifierForURLRequest:(id)arg1 withPreferredSize:(struct CGSize)arg2;
- (void)loadImageFromData:(id)arg1 model:(id)arg2 componentView:(id)arg3 containerViewSize:(struct CGSize)arg4;
- (void)loadImagesForComponentView:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)initWithImageLoader:(id)arg1;

@end
