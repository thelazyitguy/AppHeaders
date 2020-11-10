//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MLPlayerInternal-Protocol.h>

@class HAMPlayerContext, UIView;
@protocol HAMFrameSourceDelegate, MLHAMPlayerViewProtocol;

@protocol MLHAMPlayerProtocol <MLPlayerInternal>
@property(readonly, nonatomic) UIView<MLHAMPlayerViewProtocol> *playerView;
@property(readonly, nonatomic) __weak id <HAMFrameSourceDelegate> frameSourceDelegate;
@property(readonly, nonatomic) HAMPlayerContext *context;
- (void)makeActivePlayer;
@end

