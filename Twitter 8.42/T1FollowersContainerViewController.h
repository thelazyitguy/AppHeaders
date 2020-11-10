//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1ScrollingSegmentedViewControllerDataSource-Protocol.h>

@class NSString, T1ScrollingSegmentedViewController, TFNTwitterAccount, TFNTwitterUserDataSource;

@interface T1FollowersContainerViewController : TFNViewController <T1ScrollingSegmentedViewControllerDataSource>
{
    TFNTwitterAccount *_account;
    TFNTwitterUserDataSource *_userDataSource;
    T1ScrollingSegmentedViewController *_contentViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) T1ScrollingSegmentedViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) TFNTwitterUserDataSource *userDataSource; // @synthesize userDataSource=_userDataSource;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (id)segmentedViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (id)segmentedViewController:(id)arg1 titleAtIndex:(long long)arg2;
- (long long)numberOfEntriesForSegmentedViewController:(id)arg1;
- (_Bool)t1_showsPeopleAction;
- (long long)dashContentItemType;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_t1_updateFollowerCountTitle;
- (_Bool)_t1_shouldShowFollowerCountTitle;
@property(nonatomic) unsigned long long selectedTab;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithAccount:(id)arg1 userDataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
