//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewAdapter.h>

@protocol T1NudgeItemViewAdapterDelegate;

@interface T1NudgeItemViewAdapter : TFNItemsDataViewAdapter
{
    id <T1NudgeItemViewAdapterDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1NudgeItemViewAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)expandedStatePossibleForItem:(id)arg1;
- (id)_t1_learnMoreForItem:(id)arg1;
- (id)_t1_subtitleForItem:(id)arg1;
- (id)_t1_titleForItem:(id)arg1;
- (id)_t1_iconForItem:(id)arg1;
- (id)_t1_condensedViewForItem:(id)arg1;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)_t1_configureCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)initWithDelegate:(id)arg1;

@end
