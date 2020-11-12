//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTPageController-Protocol.h"
#import "SPTSocialListeningNearbyDevicesViewModelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, NSURL, SPTSocialListeningGLUETheme, SPTTableView;
@protocol GLUEImageLoader, SPTPageContainer, SPTSocialListeningNearbyDevicesViewModel;

@interface SPTSocialListeningNearbyDevicesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SPTSocialListeningNearbyDevicesViewModelDelegate, SPTPageController>
{
    id <SPTSocialListeningNearbyDevicesViewModel> _viewModel;
    SPTSocialListeningGLUETheme *_theme;
    SPTTableView *_tableView;
    id <GLUEImageLoader> _imageLoader;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) SPTSocialListeningGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTSocialListeningNearbyDevicesViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)socialListeningNearbyDevicesViewModelUpdated:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)addConstraints;
- (void)setupViews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 imageLoader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
