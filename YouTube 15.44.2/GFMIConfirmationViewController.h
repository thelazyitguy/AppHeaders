//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GFMIBaseListViewController.h>

#import <Module_Framework/GKSCallToActionPanelDelegate-Protocol.h>

@class GIMMe, GKSCallToActionPanel, NSString;
@protocol GFMIConfirmationDelegate, GFMIConfirmationPage;

@interface GFMIConfirmationViewController : GFMIBaseListViewController <GKSCallToActionPanelDelegate>
{
    id <GFMIConfirmationDelegate> _delegate;
    id <GFMIConfirmationPage> _page;
    GKSCallToActionPanel *_callToActionPanel;
    long long _pageType;
}

- (void).cxx_destruct;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) GKSCallToActionPanel *callToActionPanel; // @synthesize callToActionPanel=_callToActionPanel;
@property(retain, nonatomic) id <GFMIConfirmationPage> page; // @synthesize page=_page;
@property(nonatomic) __weak id <GFMIConfirmationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)userDidCancel;
- (void)performAction;
- (id)collectionView:(id)arg1 innerBackgroundColorAtIndexPath:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 inkTouchStyleAtIndexPath:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 cellDividerStyleForSection:(long long)arg2;
- (void)handleCallToActionPanelPrimaryAction;
- (void)handleCallToActionPanelSecondaryAction;
- (void)userTappedBackButton;
- (id)executeViewRefresh;
- (void)viewRefreshWillBegin;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

