//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@interface SCSTableView : UITableView
{
    struct CGPoint _lastScrollOffset;
    _Bool _needsReload;
    _Bool _processingUpdates;
}

@property(readonly, nonatomic, getter=isProcessingUpdates) _Bool processingUpdates; // @synthesize processingUpdates=_processingUpdates;
- (void)scrollToSectionHeader:(id)arg1 sectionIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)scrollToTop:(_Bool)arg1;
- (void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)insertSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)endUpdates;
- (void)beginUpdates;
- (void)reloadData;
- (void)reloadDataIfNeeded;
- (void)setNeedsReload;
- (_Bool)needsReload;

@end
