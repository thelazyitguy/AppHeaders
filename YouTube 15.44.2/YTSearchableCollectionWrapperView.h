//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyleProvider-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class NSString;
@protocol YTPageStyleProvider, YTPageStyling;

@interface YTSearchableCollectionWrapperView : UIView <YTPageStyling, YTPageStyleProvider>
{
    UIView *_searchBoxView;
    UIView *_collectionView;
    id <YTPageStyleProvider> _pageStyleProviderDelegate;
    id <YTPageStyling> _pageStyleDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTPageStyling> pageStyleDelegate; // @synthesize pageStyleDelegate=_pageStyleDelegate;
@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleProviderDelegate; // @synthesize pageStyleProviderDelegate=_pageStyleProviderDelegate;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) long long pageStyle;
- (void)layoutSubviews;
- (id)initWithSearchBoxView:(id)arg1 collectionView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

