//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer, AVPlayerLayer, NSHashTable, UIImage;

@interface GSCImageAnimator : NSObject
{
    unsigned long long _animationIndex;
    UIImage *_animatedSourceImage;
    AVPlayer *_animationPlayer;
    AVPlayerLayer *_animationLayer;
    double _currentDuration;
    NSHashTable *_delegates;
    unsigned long long _frameCount;
    double _lastImageShownTime;
    unsigned long long _playbackCount;
    _Bool _producingImage;
    _Bool _waitingForDuration;
    _Bool _animationPaused;
    unsigned long long _playbackAmount;
    double _nextDuration;
    UIImage *_nextImage;
}

+ (void)flushAllAnimatorMemory;
+ (void)allowAnimationWhenScrolling:(_Bool)arg1;
+ (id)imageAnimatorWithImage:(id)arg1 withDelegate:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *nextImage; // @synthesize nextImage=_nextImage;
@property(nonatomic) double nextDuration; // @synthesize nextDuration=_nextDuration;
@property(nonatomic) unsigned long long playbackAmount; // @synthesize playbackAmount=_playbackAmount;
@property(nonatomic) _Bool animationPaused; // @synthesize animationPaused=_animationPaused;
- (void)produceImage;
- (void)processNextImage;
- (void)processImages;
- (void)showNextImage;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)registerEndNotificationForItem:(id)arg1;
- (void)resumeFromPause;
- (void)pauseFromPlaying;
- (void)invalidate;
- (void)addDelegate:(id)arg1;
- (void)flushAllMemory;
- (void)invalidateForDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithImage:(id)arg1 withDelegate:(id)arg2;

@end

