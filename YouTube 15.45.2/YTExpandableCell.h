//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <Module_Framework/YTPageStyling-Protocol.h>

@class NSString, UIColor, UIImageView;

@interface YTExpandableCell : UICollectionViewCell <YTPageStyling>
{
    UIImageView *_disclosureArrow;
    long long _pageStyle;
    _Bool _hasDisclosureArrow;
    _Bool _expanded;
    double _disclosureXPadding;
    double _disclosureYPadding;
    UIColor *_disclosureArrowColor;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *disclosureArrowColor; // @synthesize disclosureArrowColor=_disclosureArrowColor;
@property(nonatomic) double disclosureYPadding; // @synthesize disclosureYPadding=_disclosureYPadding;
@property(nonatomic) double disclosureXPadding; // @synthesize disclosureXPadding=_disclosureXPadding;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) _Bool hasDisclosureArrow; // @synthesize hasDisclosureArrow=_hasDisclosureArrow;
- (id)expandCollapseIconColor;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
