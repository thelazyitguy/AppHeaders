//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionReusableView.h>

@class YTShelfHeaderView;

@interface YTShelfCell : YTCollectionReusableView
{
    _Bool _isFullBleedSingleItem;
    YTShelfHeaderView *_headerView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFullBleedSingleItem; // @synthesize isFullBleedSingleItem=_isFullBleedSingleItem;
@property(readonly, nonatomic) YTShelfHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setEntry:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

