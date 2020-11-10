//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AVPlayerLayer, NFUIPlaybackRequest, NFUIPlayerLogger, NFUISubtitleConfiguration, NSArray, NSDictionary, NSOrderedSet, NSString, UIView, _TtC4Argo25AudioSessionConfiguration;
@protocol NFPlaygraphPlayerDelegate, NFUIPlayerDelegate;

@protocol NFUIPlayer
- (void)updateUIPlayContextForRequest:(NFUIPlaybackRequest *)arg1;
- (void)willRemovePlayerView;
- (void)setSubtitleConfiguration:(NFUISubtitleConfiguration *)arg1;
- (void)setSubtitleRelativeFontSize:(double)arg1;
- (void)setSubtitleVerticalPosition:(double)arg1;
- (NSOrderedSet *)descriptionsForAvailableAudio;
- (NSOrderedSet *)availableAudioLanguages:(_Bool)arg1;
- (NSString *)selectedAudioLanguage;
- (_Bool)selectAudioLanguage:(NSString *)arg1 withAssistiveAudio:(_Bool)arg2 makeSticky:(_Bool)arg3;
- (NSOrderedSet *)descriptionsForAvailableSubtitles;
- (NSOrderedSet *)availableSubtitleLanguages;
- (NSString *)selectedSubtitleLanguage;
- (NSString *)defaultSubtitleLanguage;
- (_Bool)selectSubtitleLanguage:(NSString *)arg1;
- (void)toggleSubtitlesOn:(_Bool)arg1 withFallbackLanguage:(NSString *)arg2;
- (void)toggleMute:(_Bool)arg1;
- (void)stop;
- (void)seek:(double)arg1 completion:(void (^)(_Bool))arg2;
- (void)pauseWithReason:(long long)arg1;
- (void)pause;
- (void)play;
- (void)cancelLoading;
- (void)presentPlayerForPlayback;
- (NSString *)playbackXid;
- (NSArray *)playbackRequests;
@property(nonatomic, readonly) long long autoPauseReason;
@property(nonatomic, readonly) unsigned long long state;
@property(nonatomic, readonly) NSDictionary *videoAspectDetails;
- (_Bool)isReady;
- (_Bool)isExternalPlaybackActive;
@property(nonatomic, readonly) _Bool allowsExternalPlayback;
@property(nonatomic, readonly) float currentTimePercent;
@property(nonatomic, readonly) double currentTime;
@property(nonatomic, readonly) double duration;
@property(nonatomic) double maxStreamBitrate;
@property(nonatomic) unsigned long long autoPauseOptions;
@property(nonatomic, retain) _TtC4Argo25AudioSessionConfiguration *audioConfiguration;
@property(nonatomic) float volume;
@property(nonatomic) float rate;
@property(nonatomic) long long loopCount;
@property(nonatomic) long long priority;
@property(nonatomic, retain) NFUIPlayerLogger<NFUIPlayerDelegate> *logger;
@property(nonatomic) __weak id <NFUIPlayerDelegate> delegate;
@property(nonatomic, retain) UIView *placeholderView;
@property(nonatomic) unsigned long long playerViewResizeMode;
@property(nonatomic, readonly) AVPlayerLayer *playerLayer;
@property(nonatomic, readonly) UIView *playerView;
@property(nonatomic, readonly) NSString *collectionId;
@property(nonatomic, readonly) NSString *playerId;
@property(nonatomic) __weak id <NFPlaygraphPlayerDelegate> playgraphDelegate;

// Remaining properties
@property(nonatomic, readonly) _Bool externalPlaybackActive;
@property(nonatomic, readonly) _Bool ready;
@end

