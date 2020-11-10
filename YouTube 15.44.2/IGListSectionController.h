//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;
@protocol IGListCollectionContext, IGListDisplayDelegate, IGListScrollDelegate, IGListSupplementaryViewSource, IGListTransitionDelegate, IGListWorkingRangeDelegate;

@interface IGListSectionController : NSObject
{
    _Bool _isFirstSection;
    _Bool _isLastSection;
    UIViewController *_viewController;
    id <IGListCollectionContext> _collectionContext;
    long long _section;
    double _minimumLineSpacing;
    double _minimumInteritemSpacing;
    id <IGListSupplementaryViewSource> _supplementaryViewSource;
    id <IGListDisplayDelegate> _displayDelegate;
    id <IGListWorkingRangeDelegate> _workingRangeDelegate;
    id <IGListScrollDelegate> _scrollDelegate;
    id <IGListTransitionDelegate> _transitionDelegate;
    struct UIEdgeInsets _inset;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGListTransitionDelegate> transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;
@property(nonatomic) __weak id <IGListScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) __weak id <IGListWorkingRangeDelegate> workingRangeDelegate; // @synthesize workingRangeDelegate=_workingRangeDelegate;
@property(nonatomic) __weak id <IGListDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
@property(nonatomic) __weak id <IGListSupplementaryViewSource> supplementaryViewSource; // @synthesize supplementaryViewSource=_supplementaryViewSource;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
@property(nonatomic) struct UIEdgeInsets inset; // @synthesize inset=_inset;
@property(nonatomic) _Bool isLastSection; // @synthesize isLastSection=_isLastSection;
@property(nonatomic) _Bool isFirstSection; // @synthesize isFirstSection=_isFirstSection;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak id <IGListCollectionContext> collectionContext; // @synthesize collectionContext=_collectionContext;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)moveObjectFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (_Bool)canMoveItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (_Bool)canMoveItemAtIndex:(long long)arg1;
- (void)didUnhighlightItemAtIndex:(long long)arg1;
- (void)didHighlightItemAtIndex:(long long)arg1;
- (void)didDeselectItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)init;

@end

