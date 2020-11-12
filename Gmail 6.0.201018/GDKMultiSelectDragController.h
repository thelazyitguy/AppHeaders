//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, MDCFlexibleHeaderViewController, NSIndexPath, UICollectionView;
@protocol GDKMultiSelectDragControllerDataSource;

@interface GDKMultiSelectDragController : NSObject
{
    _Bool _autoScrollingUp;
    UICollectionView *_collectionView;
    MDCFlexibleHeaderViewController *_headerViewController;
    NSIndexPath *_pileViewIndexPath;
    NSIndexPath *_previouslyHighlightedIndexPath;
    CADisplayLink *_autoScrollDisplayLink;
    double _lastFrameTimestamp;
    id <GDKMultiSelectDragControllerDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GDKMultiSelectDragControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool autoScrollingUp; // @synthesize autoScrollingUp=_autoScrollingUp;
@property(nonatomic) double lastFrameTimestamp; // @synthesize lastFrameTimestamp=_lastFrameTimestamp;
@property(retain, nonatomic) CADisplayLink *autoScrollDisplayLink; // @synthesize autoScrollDisplayLink=_autoScrollDisplayLink;
@property(retain, nonatomic) NSIndexPath *previouslyHighlightedIndexPath; // @synthesize previouslyHighlightedIndexPath=_previouslyHighlightedIndexPath;
@property(retain, nonatomic) NSIndexPath *pileViewIndexPath; // @synthesize pileViewIndexPath=_pileViewIndexPath;
@property(retain, nonatomic) MDCFlexibleHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)highlightCell:(_Bool)arg1 atIndexPath:(id)arg2;
- (double)maxContentOffsetY;
- (double)minContentOffsetY;
- (void)autoScroll:(id)arg1;
- (id)didEndDraggingPileAtPoint:(struct CGPoint)arg1 window:(id)arg2;
- (id)didDragPileToPoint:(struct CGPoint)arg1 canDropPile:(_Bool)arg2 window:(id)arg3;
- (id)initWithCollectionView:(id)arg1 headerViewController:(id)arg2 dataSource:(id)arg3;

@end
