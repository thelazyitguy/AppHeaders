//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTResponder-Protocol.h"

@class NSString, UIView, YTShortsTrimToolController, YTShortsTrimToolView;
@protocol YTResponder, YTShortsLoggingProxy;

@interface YTShortsTrimToolViewController : UIViewController <YTResponder>
{
    YTShortsTrimToolController *_controller;
    YTShortsTrimToolView *_view;
    id <YTResponder> _parentResponder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) CDStruct_e83c9415 selectedTimeRange;
- (id)initWithParentResponder:(id)arg1 asset:(id)arg2 player:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<YTShortsLoggingProxy> *view; // @dynamic view;

@end

