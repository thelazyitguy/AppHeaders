//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPodcastEpisodeDescriptionBaseViewController.h"

#import "SPContentInsetViewController-Protocol.h"
#import "SPTPageController-Protocol.h"

@class NSString, NSURL, UIScrollView;
@protocol SPTPageContainer;

@interface SPTPodcastEpisodeDescriptionPageViewController : SPTPodcastEpisodeDescriptionBaseViewController <SPContentInsetViewController, SPTPageController>
{
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)viewSafeAreaInsetsDidChange;
- (void)sp_updateContentInsets;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)setUpConstraints;
- (void)setUpView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
