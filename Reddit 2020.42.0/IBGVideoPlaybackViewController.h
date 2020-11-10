//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGViewController.h>

@class AVPlayer, AVPlayerLayer, UIView;
@protocol IBGVideoPlaybackViewDelegate;

@interface IBGVideoPlaybackViewController : IBGViewController
{
    UIView *_playView;
    AVPlayer *_player;
    id <IBGVideoPlaybackViewDelegate> _delegate;
    AVPlayerLayer *_playerLayer;
}

@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(nonatomic) __weak id <IBGVideoPlaybackViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak UIView *playView; // @synthesize playView=_playView;
- (void).cxx_destruct;
- (void)doneButtonTapped;
- (void)dealloc;
- (struct CGRect)getFullscreenWithoutNavigationBarRect;
- (void)viewDidRotate;
- (void)addNaviagtionBarButtons;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 player:(id)arg2 delegate:(id)arg3;
- (void)awakeFromNib;

@end

