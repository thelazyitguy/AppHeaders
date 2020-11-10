//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1SlideshowViewControllerDataSource-Protocol.h>

@class NSArray, NSString;

@interface T1PrepopulatedSlideshowDataSource : NSObject <T1SlideshowViewControllerDataSource>
{
    NSArray *_slides;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *slides; // @synthesize slides=_slides;
- (id)_t1_slideAtIndex:(long long)arg1;
- (id)slideshow:(id)arg1 imageSpecForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 transitionObjectForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 mediaForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 directMessagePlayableForSlideAtIndex:(long long)arg2;
- (struct CGSize)slideshow:(id)arg1 imageDimensionsForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 previewImageForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 imageURLStringForSlideAtIndex:(long long)arg2;
- (long long)slideshow:(id)arg1 typeForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 imageForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 statusForSlideAtIndex:(long long)arg2;
- (long long)numberOfSlidesInSlideshow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

