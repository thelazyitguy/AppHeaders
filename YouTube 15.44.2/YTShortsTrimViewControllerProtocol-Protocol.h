//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTGraftingViewController-Protocol.h"
#import "YTTopController-Protocol.h"

@protocol YTShortsTransitionCreationContext, YTShortsTrimViewControllerDelegate;

@protocol YTShortsTrimViewControllerProtocol <YTTopController, YTGraftingViewController>
@property(nonatomic) __weak id <YTShortsTrimViewControllerDelegate> delegate;
- (id <YTShortsTransitionCreationContext>)creationContext;
@end

