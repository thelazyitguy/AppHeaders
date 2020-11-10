//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTCollectionViewScrollObserver-Protocol.h"

@class NSString, YTAutonavPauseController;

@interface YTAutonavCollectionViewScrollObserver : NSObject <YTCollectionViewScrollObserver>
{
    _Bool _scrolling;
    YTAutonavPauseController *_controller;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isScrolling) _Bool scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic) __weak YTAutonavPauseController *controller; // @synthesize controller=_controller;
- (_Bool)isScrolledToTopWithViewController:(id)arg1;
- (void)collectionViewControllerDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)collectionViewControllerDidEndDecelerating:(id)arg1;
- (void)collectionViewControllerWillBeginDragging:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

