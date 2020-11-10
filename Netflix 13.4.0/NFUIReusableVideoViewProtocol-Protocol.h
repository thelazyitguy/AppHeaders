//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol NFUIPlayer, NFUIVideoViewDelegate;

@protocol NFUIReusableVideoViewProtocol <NSObject>
@property(nonatomic) __weak id <NFUIVideoViewDelegate> delegate;
@property(nonatomic) long long index;
- (void)prepareForReuse;
- (id <NFUIPlayer>)currentPlayer;
- (void)stop;
- (void)pause;
- (void)play;
- (void)configureWithModel:(id)arg1;

@optional
- (void)loadPlayer;
@end

