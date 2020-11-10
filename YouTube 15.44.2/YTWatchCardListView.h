//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTResponder-Protocol.h"
#import "YTReusableView-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSMutableArray, NSString, YTIWatchCardListSupportedRenderers, YTWatchCardListHeaderView;
@protocol YTResponder, YTWatchCardList;

@interface YTWatchCardListView : UIView <YTReusableView, YTResponder, YTThumbnailMapping>
{
    YTWatchCardListHeaderView *_headerView;
    NSMutableArray *_itemViews;
    id <YTWatchCardList> _list;
    id <YTResponder> _parentResponder;
    YTIWatchCardListSupportedRenderers *_renderer;
}

+ (double)preferredHeightForRenderer:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTWatchCardListHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) YTIWatchCardListSupportedRenderers *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)itemViews;
- (void)didTapListItem:(id)arg1;
- (id)thumbnailMappings;
- (void)prepareForReuse;
@property(readonly, nonatomic) id <YTWatchCardList> list; // @synthesize list=_list;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
