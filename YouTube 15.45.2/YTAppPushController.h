//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSMutableArray, YTAppViewController;

@interface YTAppPushController : NSObject
{
    NSMutableArray *_collapseWatchCompletionBlocks;
    YTAppViewController *_appViewController;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)navigationController;
- (id)visibleViewController;
- (id)presentedViewController;
- (id)appViewController;
- (id)topViewController;
- (void)collapseWatch;
- (id)searchView;
- (_Bool)isTopLevelViewController:(id)arg1;
- (void)pushViewController:(id)arg1 navigationEndpoint:(id)arg2 fromView:(id)arg3 metadata:(id)arg4 isExternallyInitialized:(_Bool)arg5 shouldCollapseWatch:(_Bool)arg6 shouldAnimatePush:(_Bool)arg7 viewControllerToReplace:(id)arg8;
- (void)back;
- (void)pushViewController:(id)arg1 fromView:(id)arg2 metadata:(id)arg3 isExternallyInitialized:(_Bool)arg4 collapseWatch:(_Bool)arg5 shouldAnimatePush:(_Bool)arg6 viewControllerToReplace:(id)arg7;

@end
