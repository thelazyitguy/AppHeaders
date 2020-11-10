//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "YTCollectionViewCellProtocol-Protocol.h"

@class NSString, YTIItemSectionHeaderRenderer, YTQTMButton;
@protocol YTResponder;

@interface YTItemSectionHeaderCell : UICollectionViewCell <YTCollectionViewCellProtocol>
{
    id <YTResponder> _parentResponder;
    YTIItemSectionHeaderRenderer *_entry;
    YTQTMButton *_clearHistoryButton;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTQTMButton *clearHistoryButton; // @synthesize clearHistoryButton=_clearHistoryButton;
@property(retain, nonatomic) YTIItemSectionHeaderRenderer *entry; // @synthesize entry=_entry;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)layoutSubviews;
- (_Bool)isExpandedLayoutForWidth:(double)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
