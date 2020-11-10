//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

#import <YYImage/YYAnimatedImage-Protocol.h>

@class NSArray, NSString;

@interface YYFrameImage : UIImage <YYAnimatedImage>
{
    unsigned long long _loopCount;
    unsigned long long _oneFrameBytes;
    NSArray *_imagePaths;
    NSArray *_imageDatas;
    NSArray *_frameDurations;
}

- (void).cxx_destruct;
- (double)animatedImageDurationAtIndex:(unsigned long long)arg1;
- (id)animatedImageFrameAtIndex:(unsigned long long)arg1;
- (unsigned long long)animatedImageBytesPerFrame;
- (unsigned long long)animatedImageLoopCount;
- (unsigned long long)animatedImageFrameCount;
- (id)initWithImageDataArray:(id)arg1 frameDurations:(id)arg2 loopCount:(unsigned long long)arg3;
- (id)initWithImageDataArray:(id)arg1 oneFrameDuration:(double)arg2 loopCount:(unsigned long long)arg3;
- (id)initWithImagePaths:(id)arg1 frameDurations:(id)arg2 loopCount:(unsigned long long)arg3;
- (id)initWithImagePaths:(id)arg1 oneFrameDuration:(double)arg2 loopCount:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

