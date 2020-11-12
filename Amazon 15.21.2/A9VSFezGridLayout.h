//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@protocol A9VSFezGridLayoutDelegate;

@interface A9VSFezGridLayout : UICollectionViewFlowLayout
{
    id <A9VSFezGridLayoutDelegate> _delegate;
}

@property(nonatomic) __weak id <A9VSFezGridLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isVerticalScrollDirection;
- (struct CGSize)itemDimension;
- (long long)numberOfDividers;
- (long long)numberOfItemsAcross;
- (void)updateHeaderAttributes:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)init;

@end
