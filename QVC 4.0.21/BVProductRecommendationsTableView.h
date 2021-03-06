//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <BVSDK/BVRecommendationsContainerProtocol-Protocol.h>
#import <BVSDK/UITableViewDataSource-Protocol.h>
#import <BVSDK/UITableViewDelegate-Protocol.h>

@class BVMessageInterceptor, NSMutableDictionary, NSString;

@interface BVProductRecommendationsTableView : UITableView <UITableViewDelegate, UITableViewDataSource, BVRecommendationsContainerProtocol>
{
    BVMessageInterceptor *delegate_interceptor;
    BVMessageInterceptor *datasource_interceptor;
    _Bool hasSentScrollEvent;
    _Bool hasSentRenderedEvent;
    _Bool hasSentSeenEvent;
    NSMutableDictionary *cellToProductMap;
}

- (void).cxx_destruct;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)selectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)loadRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

