//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AspenUIComponents/_TtC17AspenUIComponents19ShelfViewController.h>

@class _TtC17AspenUIComponents15LoadingCardView;

@interface _TtC17AspenUIComponents27ShelfCarouselViewController : _TtC17AspenUIComponents19ShelfViewController
{
    // Error parsing type: , name: maxNumberOfCarouselItems
    // Error parsing type: , name: carouselView
    // Error parsing type: , name: $__lazy_storage_$_loadingCardView
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)isCarouselItemSelectableAtIndexPath:(id)arg1;
- (void)carouselItemSelectedAtIndexPath:(id)arg1;
- (id)carouselItemAtIndexPath:(id)arg1;
- (double)carouselItemWidthAtIndexPath:(id)arg1;
- (long long)numberOfCarouselItems;
- (void)reloadCarouselWithScrollToIndex:(id)arg1 handlerAfterScroll:(CDUnknownBlockType)arg2;
- (void)reloadCarousel;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaxNumberOfCarouselItems:(long long)arg1;
@property(nonatomic, readonly) _TtC17AspenUIComponents15LoadingCardView *loadingCard;
@property(nonatomic, readonly) long long maxNumberOfCarouselItems; // @synthesize maxNumberOfCarouselItems;

@end
