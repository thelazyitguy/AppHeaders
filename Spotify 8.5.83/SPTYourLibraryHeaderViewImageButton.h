//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "GLUEStyleable-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"

@class NSString, NSURL, SPTYourLibraryHeaderViewImageButtonStyle;
@protocol SPTImageLoader;

@interface SPTYourLibraryHeaderViewImageButton : UIButton <SPTImageLoaderDelegate, GLUEStyleable>
{
    id <SPTImageLoader> _imageLoader;
    NSURL *_imageURL;
    long long _placeholderIcon;
    SPTYourLibraryHeaderViewImageButtonStyle *_style;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTYourLibraryHeaderViewImageButtonStyle *style; // @synthesize style=_style;
@property(nonatomic) long long placeholderIcon; // @synthesize placeholderIcon=_placeholderIcon;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)updatePlaceholderImage;
- (void)glue_applyStyle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
