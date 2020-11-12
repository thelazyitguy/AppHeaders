//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"
#import "HUBImageLoaderDelegate-Protocol.h"

@class NSURL, UIColor;
@protocol HUBContentOperationDelegate, HUBImageLoader;

@interface SPTFreeTierAlbumHeaderGradientContentOperation : NSObject <HUBImageLoaderDelegate, HUBContentOperation>
{
    id <HUBContentOperationDelegate> _delegate;
    id <HUBImageLoader> _imageLoader;
    NSURL *_mainImageURL;
    UIColor *_backgroundColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSURL *mainImageURL; // @synthesize mainImageURL=_mainImageURL;
@property(retain, nonatomic) id <HUBImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)extractColorFromImage:(id)arg1;
- (void)imageLoader:(id)arg1 didFailLoadingImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 context:(id)arg4;
- (void)updateHeaderGradient:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithImageLoader:(id)arg1;

@end
