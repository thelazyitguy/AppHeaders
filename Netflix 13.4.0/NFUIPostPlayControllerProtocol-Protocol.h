//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIPlayerControllerDelegate-Protocol.h"

@class NFUIPlayerControlsRefreshViewController, NFUIPlayerViewController, PostPlayViewModel, UIViewController;
@protocol NFUIPlayerControllerProtocol, NFUIPostPlayDelegate;

@protocol NFUIPostPlayControllerProtocol <NFUIPlayerControllerDelegate>
@property(nonatomic) __weak id <NFUIPostPlayDelegate> delegate;
@property(nonatomic) __weak NFUIPlayerControlsRefreshViewController *playerControlsViewController;
@property(nonatomic) __weak NFUIPlayerViewController *playerViewController;
- (void)configureWithModel:(PostPlayViewModel *)arg1;
- (void)playbackDidEnd;
- (UIViewController *)viewController;

@optional
- (void)playerController:(id <NFUIPlayerControllerProtocol>)arg1 externalPlaybackActive:(_Bool)arg2;
- (void)playerController:(id <NFUIPlayerControllerProtocol>)arg1 stateChange:(unsigned long long)arg2 previous:(unsigned long long)arg3;
- (void)playerController:(id <NFUIPlayerControllerProtocol>)arg1 timeUpdate:(double)arg2;
- (void)playerControllerReady:(id <NFUIPlayerControllerProtocol>)arg1;
@end

