//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFISceneViewController.h"

@class NFIBranchingPlayerControlsRefreshViewController, NSNumber;

@interface NFIBranchingSceneController : NFISceneViewController
{
    NFIBranchingPlayerControlsRefreshViewController *_playerControlsViewController;
    NSNumber *_videoId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) __weak NFIBranchingPlayerControlsRefreshViewController *playerControlsViewController; // @synthesize playerControlsViewController=_playerControlsViewController;
- (id)currentSegment;
- (void)playbackToggled;
- (_Bool)nearingChoicePointStart;
- (double)canSeekForward:(double)arg1;
- (double)canSeekBack:(double)arg1;
- (id)currentSegmentId;
- (void)playbackReady:(id)arg1;
- (void)navigateToTimeMs:(double)arg1;
- (void)navigateToSegmentId:(id)arg1;

@end

