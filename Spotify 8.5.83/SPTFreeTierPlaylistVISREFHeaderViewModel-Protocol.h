//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSAttributedString, NSString, NSURL;
@protocol SPTFreeTierPlaylistLogger, SPTFreeTierPlaylistSortingFiltering;

@protocol SPTFreeTierPlaylistVISREFHeaderViewModel <NSObject>
@property(nonatomic, readonly) id <SPTFreeTierPlaylistLogger> logger;
@property(nonatomic, readonly) CDUnknownBlockType searchViewControllerFactory;
@property(nonatomic, readonly) id <SPTFreeTierPlaylistSortingFiltering> sortingFiltering;
@property(nonatomic, readonly) unsigned long long followCount;
@property(nonatomic, readonly) double totalDuration;
@property(nonatomic, readonly) NSString *metadataAccessibilityLabel;
@property(nonatomic, readonly) NSString *metadataText;
@property(nonatomic, readonly) NSString *madeForName;
@property(nonatomic, readonly) NSAttributedString *creatorText;
@property(nonatomic, readonly) NSURL *creatorImageURL;
@property(nonatomic, readonly) NSArray *collaborators;
@end

