//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTHubViewController.h"

@class SPTFreeTierTrackContextMenuButtonViewModel, SPTFreeTierTrackFeedbackButtonViewModel;

@interface SPTFreeTierTrackViewController : SPTHubViewController
{
    SPTFreeTierTrackFeedbackButtonViewModel *_feedbackButtonViewModel;
    SPTFreeTierTrackContextMenuButtonViewModel *_contextMenuButtonViewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTFreeTierTrackContextMenuButtonViewModel *contextMenuButtonViewModel; // @synthesize contextMenuButtonViewModel=_contextMenuButtonViewModel;
@property(readonly, nonatomic) SPTFreeTierTrackFeedbackButtonViewModel *feedbackButtonViewModel; // @synthesize feedbackButtonViewModel=_feedbackButtonViewModel;
- (void)viewModelDidLoad:(id)arg1;
- (void)setupNavigationItems;
- (id)initWithTheme:(id)arg1 pageIdentifier:(id)arg2 pageURI:(id)arg3 componentRegistry:(id)arg4 componentLayoutManager:(id)arg5 imageLoaderFactory:(id)arg6 commandHandler:(id)arg7 viewModelProvider:(id)arg8 impressionLogger:(id)arg9 loadingLogger:(id)arg10 feedbackButtonViewModel:(id)arg11 contextMenuButtonViewModel:(id)arg12 shareDragDelegateFactory:(id)arg13;

@end

