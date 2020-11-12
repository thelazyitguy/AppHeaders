//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANPWidgetViewController.h"

#import "ANPContainerWidget-Protocol.h"

@class ANPAppBarContainerWidget, ANPTopNavSearchBarWidget, NSMutableArray, NSString, UIViewController;
@protocol AMIIPhoneAppManagerBridge;

@interface ANPTopNavWidget : ANPWidgetViewController <ANPContainerWidget>
{
    ANPAppBarContainerWidget *_appBarContainer;
    ANPTopNavSearchBarWidget *_searchBar;
    UIViewController *_topNavViewController;
    id <AMIIPhoneAppManagerBridge> _iPhoneAppManager;
    NSMutableArray *_children;
}

@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(retain, nonatomic) id <AMIIPhoneAppManagerBridge> iPhoneAppManager; // @synthesize iPhoneAppManager=_iPhoneAppManager;
@property(retain, nonatomic) UIViewController *topNavViewController; // @synthesize topNavViewController=_topNavViewController;
@property(retain, nonatomic) ANPTopNavSearchBarWidget *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) ANPAppBarContainerWidget *appBarContainer; // @synthesize appBarContainer=_appBarContainer;
- (void).cxx_destruct;
- (void)didSetSpec;
- (void)removeChild:(id)arg1;
- (void)invalidate;
- (void)addChild:(id)arg1;
- (id)view;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
