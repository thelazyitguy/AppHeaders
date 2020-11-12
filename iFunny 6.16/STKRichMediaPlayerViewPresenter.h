//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class STKRichMediaImageView, STKVASTAssetControlContainer, STKVideoVisibilitySensitivePlayerView, UIActivityIndicatorView, UITapGestureRecognizer, UIView;
@protocol STKRichMediaAsset, STKRichMediaPlayerViewPresenterDelegate;

@interface STKRichMediaPlayerViewPresenter : NSObject
{
    _Bool _shouldBeRefresh;
    id <STKRichMediaPlayerViewPresenterDelegate> _delegate;
    STKVideoVisibilitySensitivePlayerView *_player;
    STKRichMediaImageView *_placeholderImageView;
    id <STKRichMediaAsset> _currentAsset;
    id <STKRichMediaAsset> _nextAsset;
    UIView *_targetView;
    STKVASTAssetControlContainer *_muteContainer;
    STKVASTAssetControlContainer *_playContainer;
    UIActivityIndicatorView *_videoActivityIndicatorView;
    UITapGestureRecognizer *_placeholderTapGestureRecognizer;
}

+ (id)presenterForAsset:(id)arg1 targetView:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldBeRefresh; // @synthesize shouldBeRefresh=_shouldBeRefresh;
@property(nonatomic) __weak UITapGestureRecognizer *placeholderTapGestureRecognizer; // @synthesize placeholderTapGestureRecognizer=_placeholderTapGestureRecognizer;
@property(nonatomic) __weak UIActivityIndicatorView *videoActivityIndicatorView; // @synthesize videoActivityIndicatorView=_videoActivityIndicatorView;
@property(nonatomic) __weak STKVASTAssetControlContainer *playContainer; // @synthesize playContainer=_playContainer;
@property(nonatomic) __weak STKVASTAssetControlContainer *muteContainer; // @synthesize muteContainer=_muteContainer;
@property(nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) id <STKRichMediaAsset> nextAsset; // @synthesize nextAsset=_nextAsset;
@property(retain, nonatomic) id <STKRichMediaAsset> currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) STKRichMediaImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(retain, nonatomic) STKVideoVisibilitySensitivePlayerView *player; // @synthesize player=_player;
@property(nonatomic) __weak id <STKRichMediaPlayerViewPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)synchroniseAudioState;
- (void)removeTapGestureRecognizer;
- (void)removeMuteButton;
- (void)installMuteButton;
- (void)layoutPlayerView;
- (void)stopVideoActivityIndicatorView;
- (void)startVideoActivityIndicatorView;
- (void)installPlaceholderImageView;
- (void)hidePlayButton;
- (void)presentPlayButton;
- (void)stopVideoPlayback;
- (void)preparePlayerForTransaction;
- (void)handlePlayButtonTouch:(id)arg1;
- (void)handleTapGestureEvent:(id)arg1;
- (void)changeVideoSoundState:(_Bool)arg1;
- (void)muteButtonActon:(id)arg1;
- (void)presentVideo;
- (void)presentImageView;
- (void)replaceCurrentAssetWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 targetView:(id)arg2;

@end
