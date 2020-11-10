//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/AVPlayerItemOutputPullDelegate-Protocol.h>

@class AVPlayerItem, AVPlayerItemVideoOutput, CADisplayLink, NSString;
@protocol OS_dispatch_queue, YTEditVideoFrameSourceDelegate;

@interface YTEditVideoFrameSource : NSObject <AVPlayerItemOutputPullDelegate>
{
    AVPlayerItem *_playerItem;
    AVPlayerItemVideoOutput *_videoOutput;
    CADisplayLink *_videoDisplayLink;
    NSObject<OS_dispatch_queue> *_videoQueue;
    unsigned int _pixelFormat;
    id <YTEditVideoFrameSourceDelegate> _delegate;
    struct CGSize _outputSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) __weak id <YTEditVideoFrameSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)getFrameForTime:(CDStruct_1b6d18a9)arg1;
- (void)videoUpdate:(id)arg1;
- (void)outputMediaDataWillChange:(id)arg1;
- (_Bool)hasFrameForTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)resetVideoOutput;
- (void)requestFrameForCurrentTime;
- (void)shutdown;
- (void)dealloc;
- (id)initWithMaximumFPS:(long long)arg1 pixelFormat:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

