//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@interface _TtC7SlackUI26PagingCollectionViewLayout : UICollectionViewLayout
{
    // Error parsing type: , name: options
    // Error parsing type: , name: state
    // Error parsing type: , name: visibleItems
    // Error parsing type: , name: layoutAttributes
    // Error parsing type: , name: indicatorLayoutAttributes
    // Error parsing type: , name: borderLayoutAttributes
    // Error parsing type: , name: invalidationState
    // Error parsing type: , name: sizeCache
    // Error parsing type: , name: contentInsets
    // Error parsing type: , name: contentSize
    // Error parsing type: , name: PagingIndicatorKind
    // Error parsing type: , name: PagingBorderKind
}

+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)invalidateLayout;
- (void)prepareLayout;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;

@end
