//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class ASCellNode, ASCollectionElement, UICollectionViewLayoutAttributes;

@interface _ASCollectionViewCell : UICollectionViewCell
{
    ASCollectionElement *_element;
    UICollectionViewLayoutAttributes *_layoutAttributes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(retain, nonatomic) ASCollectionElement *element; // @synthesize element=_element;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)cellNodeVisibilityEvent:(unsigned long long)arg1 inScrollView:(id)arg2;
@property(readonly, nonatomic) _Bool consumesCellNodeVisibilityEvents;
@property(readonly, nonatomic) ASCellNode *node;

@end

