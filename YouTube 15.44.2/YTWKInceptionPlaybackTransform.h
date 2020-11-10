//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTPlayerResponse;
@protocol YTPlayerOverlayFactory;

@interface YTWKInceptionPlaybackTransform : NSObject
{
    id <YTPlayerOverlayFactory> _sourcePlayerOverlayFactory;
    int _sourceVisibility;
    _Bool _isMutedOnStart;
    _Bool _isBackgroundable;
    int _playbackVisibility;
    int _captionsVisibility;
    YTPlayerResponse *_sourcePlayerResponse;
    id <YTPlayerOverlayFactory> _playerOverlayFactory;
}

+ (id)inceptionPlaybackTransformWithBuilderBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isBackgroundable; // @synthesize isBackgroundable=_isBackgroundable;
@property(readonly, nonatomic) int captionsVisibility; // @synthesize captionsVisibility=_captionsVisibility;
@property(readonly, nonatomic) _Bool isMutedOnStart; // @synthesize isMutedOnStart=_isMutedOnStart;
@property(readonly, nonatomic) int playbackVisibility; // @synthesize playbackVisibility=_playbackVisibility;
@property(readonly, nonatomic) id <YTPlayerOverlayFactory> playerOverlayFactory; // @synthesize playerOverlayFactory=_playerOverlayFactory;
@property(readonly, nonatomic) YTPlayerResponse *sourcePlayerResponse; // @synthesize sourcePlayerResponse=_sourcePlayerResponse;
- (id)inverseTransform;
- (id)initWithBuilder:(id)arg1;

@end

