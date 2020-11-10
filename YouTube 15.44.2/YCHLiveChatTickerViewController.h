//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTCollectionViewScrollObserver-Protocol.h>
#import <Module_Framework/YTRendererController-Protocol.h>

@class GIMMe, NSString, YCHLiveChatService, YCHLiveChatTickerCollectionViewController;
@protocol YTResponder;

@interface YCHLiveChatTickerViewController : UIViewController <YTCollectionViewScrollObserver, YTRendererController>
{
    _Bool _isFetchingContextMenu;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YCHLiveChatTickerCollectionViewController *_collectionViewController;
    YCHLiveChatService *_liveChatService;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFetchingContextMenu; // @synthesize isFetchingContextMenu=_isFetchingContextMenu;
@property(readonly, nonatomic) __weak YCHLiveChatService *liveChatService; // @synthesize liveChatService=_liveChatService;
@property(readonly, nonatomic) YCHLiveChatTickerCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)loadWithModel:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

