//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/MLAVPlayerViewProtocol-Protocol.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSString;
@protocol MLAVPlayerViewDelegate;

@interface MLAVPIPPlayerLayerView : UIView <MLAVPlayerViewProtocol>
{
    AVPlayerItem *_placeholderPlayerItem;
    AVPlayer *_placeholderPlayer;
    id <MLAVPlayerViewDelegate> _delegate;
    AVPlayerLayer *_playerLayer;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(nonatomic) __weak id <MLAVPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handlePinchEnded;
- (void)handlePinchChangedWithScale:(double)arg1 velocity:(double)arg2;
- (void)handlePinchBegan;
- (void)handlePanEnded;
- (void)handlePanChangedWithTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (_Bool)handlePanBegan;
- (_Bool)respondsToTouch;
- (void)playerItemDidChange;
- (void)prepareForReuse;
- (void)setPlayer:(id)arg1;
- (void)setVideo:(id)arg1 playerConfig:(id)arg2;
@property(readonly, nonatomic) struct CGRect videoRect;
@property(readonly, nonatomic) NSString *debugType;
- (void)clear;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 placeholderPlayerItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

