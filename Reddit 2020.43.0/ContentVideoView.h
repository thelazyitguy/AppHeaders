//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LoaderContentView.h"

#import "TransitionalVideoMedia-Protocol.h"
#import "VideoAssetLoaderDelegate-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, BaseImageView, FeedPostOptions, NSString, NSURL, Post, UIView, UIVisualEffectView, VideoAssetLoader;

@interface ContentVideoView : LoaderContentView <TransitionalVideoMedia, VideoAssetLoaderDelegate>
{
    _Bool _disableAutoPlay;
    _Bool _isGifContent;
    _Bool _isPlaying;
    _Bool _isScheduledToPlay;
    _Bool _pausedForBackgroundMode;
    _Bool _isDisplayed;
    _Bool _shouldBlurPreview;
    NSString *_previewImageURLString;
    NSString *_videoURLString;
    BaseImageView *_previewImageView;
    AVPlayer *_videoPlayer;
    BaseImageView *_videoPlayButtonOverlay;
    AVPlayerItem *_playerItem;
    AVPlayerLayer *_playerLayer;
    NSURL *_videoFileDiskURL;
    UIVisualEffectView *_blurEffectView;
    VideoAssetLoader *_downloader;
    Post *_post;
    FeedPostOptions *_options;
}

+ (struct CGSize)getVideoSizeForSize:(struct CGSize)arg1 forPost:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) FeedPostOptions *options; // @synthesize options=_options;
@property(nonatomic) _Bool shouldBlurPreview; // @synthesize shouldBlurPreview=_shouldBlurPreview;
@property(nonatomic) _Bool isDisplayed; // @synthesize isDisplayed=_isDisplayed;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(retain, nonatomic) VideoAssetLoader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(retain, nonatomic) NSURL *videoFileDiskURL; // @synthesize videoFileDiskURL=_videoFileDiskURL;
@property(nonatomic) _Bool pausedForBackgroundMode; // @synthesize pausedForBackgroundMode=_pausedForBackgroundMode;
@property(nonatomic) _Bool isScheduledToPlay; // @synthesize isScheduledToPlay=_isScheduledToPlay;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool isGifContent; // @synthesize isGifContent=_isGifContent;
@property(nonatomic) _Bool disableAutoPlay; // @synthesize disableAutoPlay=_disableAutoPlay;
@property(retain, nonatomic) BaseImageView *videoPlayButtonOverlay; // @synthesize videoPlayButtonOverlay=_videoPlayButtonOverlay;
@property(retain, nonatomic) AVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) BaseImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(copy, nonatomic) NSString *videoURLString; // @synthesize videoURLString=_videoURLString;
@property(copy, nonatomic) NSString *previewImageURLString; // @synthesize previewImageURLString=_previewImageURLString;
- (void)handleAppDidEnterBackground;
- (void)handleAppDidEnterForeground;
- (void)videoAssetLoader:(id)arg1 didFinishDownloading:(id)arg2;
- (void)videoAssetLoader:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)playerReachedEnd:(id)arg1;
- (void)stop;
- (void)play;
- (void)downloadAndPlay;
- (void)noLongerPastVisibilityThreshold;
- (void)didPassVisibilityThreshold;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)stopBlur;
- (void)startBlur;
- (void)didTapBlurView;
- (_Bool)hasVideo;
- (void)configureWithUrlString:(id)arg1 previewUrlString:(id)arg2 forceAutoPlay:(_Bool)arg3 videoSize:(struct CGSize)arg4 isGif:(_Bool)arg5;
- (void)configureWithPost:(id)arg1 withFeedPostOptions:(id)arg2;
- (void)configureWithForceAutoplay:(_Bool)arg1;
- (void)configureWithPost:(id)arg1 withFeedPostOptions:(id)arg2 forceAutoplay:(_Bool)arg3;
- (void)configureWithTheatreMediaItem:(id)arg1 withFeedPostOptions:(id)arg2 forceAutoplay:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIView *mediaContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
