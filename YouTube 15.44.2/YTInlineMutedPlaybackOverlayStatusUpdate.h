//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface YTInlineMutedPlaybackOverlayStatusUpdate : NSObject
{
    _Bool _shouldProcessForInception;
    _Bool _shouldTurnAudioOn;
    double _inceptionPlaybackTimeStamp;
    UIView *_originView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *originView; // @synthesize originView=_originView;
@property(readonly, nonatomic) _Bool shouldTurnAudioOn; // @synthesize shouldTurnAudioOn=_shouldTurnAudioOn;
@property(readonly, nonatomic) double inceptionPlaybackTimeStamp; // @synthesize inceptionPlaybackTimeStamp=_inceptionPlaybackTimeStamp;
@property(readonly, nonatomic) _Bool shouldProcessForInception; // @synthesize shouldProcessForInception=_shouldProcessForInception;
- (id)initForInception:(_Bool)arg1 inceptionPlaybackTimeStamp:(double)arg2 audioStatus:(_Bool)arg3 originView:(id)arg4;

@end

