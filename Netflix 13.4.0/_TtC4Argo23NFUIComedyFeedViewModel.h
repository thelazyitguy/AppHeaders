//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUIFeedViewControllerModelProtocol-Protocol.h"
#import "NFUIManagedViewModelEntityProviderProtocol-Protocol.h"

@protocol NFUIFeedViewControllerModelFeedDelegate;

@interface _TtC4Argo23NFUIComedyFeedViewModel : NSObject <NFUIFeedViewControllerModelProtocol, NFUIManagedViewModelEntityProviderProtocol>
{
    // Error parsing type: , name: feedDelegate
    // Error parsing type: , name: currentIndexPath
    // Error parsing type: , name: comedyFeedList
    // Error parsing type: , name: listSummary
    // Error parsing type: , name: paginationAmount
    // Error parsing type: , name: initialItemCount
    // Error parsing type: , name: _currentNumberOfPaginatedItems
}

- (void).cxx_destruct;
- (id)init;
- (double)minimumInterItemSpacingForSection:(long long)arg1;
- (double)minimumLineSpacingForSection:(long long)arg1;
- (struct UIEdgeInsets)insetsForSection:(long long)arg1;
- (id)modelForIndexPath:(id)arg1 forKind:(id)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)entityIdForIndexPath:(id)arg1;
- (id)typeForIndexPath:(id)arg1 withKind:(id)arg2;
@property(nonatomic) __weak id <NFUIFeedViewControllerModelFeedDelegate> feedDelegate; // @synthesize feedDelegate;

@end
