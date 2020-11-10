//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <Module_Framework/ELMScrollViewProtocol-Protocol.h>

@class ELMScrollViewDataController, NSString;
@protocol ELMContext, UITableViewDataSource><ELMScrollViewDataSource;

@interface ELMTableView : UITableView <ELMScrollViewProtocol>
{
    long long _performBatchPhase;
    ELMScrollViewDataController *_dataController;
    id <ELMContext> _context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <ELMContext> context; // @synthesize context=_context;
- (void)didEndDisplayingView:(id)arg1 forFooterInSection:(long long)arg2;
- (void)didEndDisplayingView:(id)arg1 forHeaderInSection:(long long)arg2;
- (void)didEndDisplayingView:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)willDisplayView:(id)arg1 forFooterInSection:(long long)arg2;
- (void)willDisplayView:(id)arg1 forHeaderInSection:(long long)arg2;
- (void)willDisplayView:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setTuningParameters:(CDStruct_c3b9c2ee)arg1 forRangeMode:(BOOL)arg2 rangeType:(long long)arg3;
- (CDStruct_c3b9c2ee)tuningParametersForRangeMode:(BOOL)arg1 rangeType:(long long)arg2;
- (id)elementsViewForHeaderInSection:(long long)arg1;
- (id)elementsViewForFooterInSection:(long long)arg1;
- (id)elementsCellForItemAtIndexPath:(id)arg1;
- (struct CGSize)elementsSizeForFooterInSection:(long long)arg1;
- (struct CGSize)elementsSizeForHeaderInSection:(long long)arg1;
- (struct CGSize)elementsSizeForItemAtIndexPath:(id)arg1;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)insertSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)endUpdates;
- (void)beginUpdates;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadData;
@property(nonatomic) __weak id <UITableViewDataSource><ELMScrollViewDataSource> dataSource; // @dynamic dataSource;
- (id)visibleSupplementaryViewsOfKind:(id)arg1;
- (void)setSelected:(_Bool)arg1 at:(id)arg2;
- (void)elementsInvalidateLayout;
- (id)contentViewFromView:(id)arg1 isCell:(_Bool)arg2;
- (void)getPathsInRect:(struct CGRect)arg1 paths:(vector_b8106f4e *)arg2;
- (CDStruct_42a63532)defaultSizeRangeFor:(const struct CollectionPath *)arg1;
- (long long)elementsNumberOfItemsInSection:(long long)arg1 duringSizingPass:(_Bool)arg2;
- (id)dequeueCellFor:(const struct CollectionPath *)arg1;
- (_Bool)scrollsHorizontally;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

