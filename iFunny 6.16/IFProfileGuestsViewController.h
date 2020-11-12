//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Funny/IFScrollContainerViewProtocol-Protocol.h>
#import <Funny/UITableViewDataSource-Protocol.h>
#import <Funny/UITableViewDelegate-Protocol.h>

@class IFProfileGuestsModel, IFProfileGuestsView, NSArray, NSLayoutConstraint, NSObject, NSString, UIScrollView;
@protocol IFProfileGuestsRouterProtocol, IFScrollContainerViewDelegate;

@interface IFProfileGuestsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, IFScrollContainerViewProtocol>
{
    NSObject<IFScrollContainerViewDelegate> *_delegate;
    NSLayoutConstraint *_containerHeight;
    IFProfileGuestsModel *_model;
    NSObject<IFProfileGuestsRouterProtocol> *_router;
    IFProfileGuestsView *_profileGuestsView;
    NSArray *_guests;
    unsigned long long _viewState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) NSArray *guests; // @synthesize guests=_guests;
@property(retain, nonatomic) IFProfileGuestsView *profileGuestsView; // @synthesize profileGuestsView=_profileGuestsView;
@property(retain, nonatomic) NSObject<IFProfileGuestsRouterProtocol> *router; // @synthesize router=_router;
@property(retain, nonatomic) IFProfileGuestsModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSLayoutConstraint *containerHeight; // @synthesize containerHeight=_containerHeight;
@property(nonatomic) __weak NSObject<IFScrollContainerViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)hasNewGuests;
- (void)loadNewData;
- (void)loadNextData;
- (void)setContainerActive:(_Bool)arg1;
@property(nonatomic) double validYOffset;
@property(nonatomic) _Bool allowAutoAdjustContentOffset;
@property(readonly, nonatomic) struct CGSize contentSize;
- (void)resetAndReloadData;
@property(readonly, nonatomic) UIScrollView *contentScrollView;
- (long long)itemsCount;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1 router:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
