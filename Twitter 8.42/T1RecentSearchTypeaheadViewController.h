//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1RecentSearchCollectionItemAdapterDelegate-Protocol.h>

@class NSArray, NSString, T1RecentSearchCollectionItemAdapter, UICollectionViewFlowLayout;
@protocol T1RecentSearchTypeaheadViewControllerDelegate;

@interface T1RecentSearchTypeaheadViewController : TFNItemsDataViewController <T1RecentSearchCollectionItemAdapterDelegate>
{
    _Bool _viewDidLoadFired;
    NSArray *_results;
    id <T1RecentSearchTypeaheadViewControllerDelegate> _delegate;
    T1RecentSearchCollectionItemAdapter *_recentSearchAdapter;
    UICollectionViewFlowLayout *_flowLayout;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool viewDidLoadFired; // @synthesize viewDidLoadFired=_viewDidLoadFired;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) T1RecentSearchCollectionItemAdapter *recentSearchAdapter; // @synthesize recentSearchAdapter=_recentSearchAdapter;
@property(nonatomic) __weak id <T1RecentSearchTypeaheadViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
- (void)recentSearchCollectionItemAdapter:(id)arg1 didSelectItem:(id)arg2;
- (void)tfn_fontSizeChanged;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithImagePipeline:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

